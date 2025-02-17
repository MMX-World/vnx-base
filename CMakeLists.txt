cmake_minimum_required(VERSION 3.11)
project(vnx)

if (MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
else()
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC -pthread -Wall -Wsuggest-override")
endif()

add_compile_options(-DNOGDI)

find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdiagnostics-color=auto")
	set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_FOUND}")
endif()

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

if(WIN32)
	list(APPEND PLATFORM_SOURCE_FILES
		src/win32/Directory.cpp
		src/win32/Endpoint.cpp
		src/win32/Process.cpp
		src/win32/Terminal.cpp
		src/win32/WinUtils.cpp
	)
else()
	list(APPEND PLATFORM_SOURCE_FILES
		src/linux/Directory.cpp
		src/linux/Endpoint.cpp
		src/linux/Process.cpp
		src/linux/Terminal.cpp
	)
endif()

add_library(vnx_base SHARED
	${GENERATED_SOURCE_FILES}
	${PLATFORM_SOURCE_FILES}
	src/test/Test.cpp
	src/Authentication.cpp
	src/Binary.cpp
	src/Client.cpp
	src/JRPC_Client.cpp
	src/Config.cpp
	src/CRC64.cpp
	src/SHA256.cpp
	src/Input.cpp
	src/Module.cpp
	src/ModuleBase.cpp
	src/Node.cpp
	src/Output.cpp
	src/Pipe.cpp
	src/Process.cpp
	src/BaseProxy.cpp
	src/Proxy.cpp
	src/JRPC_Proxy.cpp
	src/Publisher.cpp
	src/Router.cpp
	src/BaseServer.cpp
	src/Server.cpp
	src/JRPC_Server.cpp
	src/SpyTool.cpp
	src/Subscriber.cpp
	src/Terminal.cpp
	src/TerminalInput.cpp
	src/Time.cpp
	src/TimeServer.cpp
	src/Topic.cpp
	src/Type.cpp
	src/Util.cpp
	src/Value.cpp
	src/Visitor.cpp
	src/Variant.cpp
	src/Memory.cpp
	src/Object.cpp
	src/Endpoint.cpp
	src/Buffer.cpp
	src/Thread.cpp
	src/File.cpp
	src/Recorder.cpp
	src/RecordWriter.cpp
	src/Player.cpp
	src/RecordReader.cpp
	src/MultiRecordReader.cpp
	src/AsyncClient.cpp
	src/ThreadPool.cpp
	src/Return.cpp
	src/LogMsg.cpp
	src/Generic.cpp
	src/GenericClient.cpp
	src/GenericAsyncClient.cpp
	src/InternalError.cpp
	src/Exception.cpp
	src/Session.cpp
	src/JSON.cpp
	src/Tuple.cpp
	src/ToObject.cpp
	src/PrettyPrinter.cpp
	src/ModuleInfo.cpp
	src/JRPC_Request.cpp
	src/JRPC_Response.cpp
	src/Stream.cpp
	src/Gateway.cpp
	src/RequestQueue.cpp
)

target_include_directories(vnx_base
	PUBLIC include generated/include
)


if(MSVC)
	include(GenerateExportHeader)
	GENERATE_EXPORT_HEADER(vnx_base)
	include_directories("${CMAKE_CURRENT_BINARY_DIR}")
	set(VNXBASE_BINARY_DIR "${CMAKE_CURRENT_BINARY_DIR}" CACHE STRING "")

	include(FetchContent)
	FetchContent_Declare(dirent
    	GIT_REPOSITORY https://github.com/tronkko/dirent.git
    	GIT_TAG "a318cee5adaed3dec654773fd0a02723d844461c"
  	)
	FetchContent_MakeAvailable(dirent)
	set(dirent_INCLUDE_DIR ${dirent_SOURCE_DIR}/include)
	target_include_directories(vnx_base PUBLIC ${dirent_INCLUDE_DIR})


	set_target_properties(vnx_base PROPERTIES ENABLE_EXPORTS 1)
	set_target_properties(vnx_base PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS 1)
	
	target_link_libraries(vnx_base wsock32 ws2_32)
elseif(WIN32)
	target_link_libraries(vnx_base -lws2_32)
endif()


if(VNX_BASE_BUILD_TESTS)
	add_subdirectory(test)
endif()

if(VNX_BASE_BUILD_TOOLS)
	add_subdirectory(tools)
endif()

get_property(LIB64 GLOBAL PROPERTY FIND_LIBRARY_USE_LIB64_PATHS)

if("${LIB64}" STREQUAL "TRUE")
    set(LIBSUFFIX 64)
else()
    set(LIBSUFFIX "")
endif()

install(DIRECTORY include/vnx generated/include/vnx DESTINATION include)
install(DIRECTORY interface/ modules/ DESTINATION interface/vnx)

install(TARGETS vnx_base DESTINATION lib${LIBSUFFIX})

