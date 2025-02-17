
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/BaseProxyAsyncClient.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Module.h>
#include <vnx/ModuleInterface_vnx_get_config.hxx>
#include <vnx/ModuleInterface_vnx_get_config_return.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info_return.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/ModuleInterface_vnx_restart.hxx>
#include <vnx/ModuleInterface_vnx_restart_return.hxx>
#include <vnx/ModuleInterface_vnx_self_test.hxx>
#include <vnx/ModuleInterface_vnx_self_test_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config.hxx>
#include <vnx/ModuleInterface_vnx_set_config_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_stop.hxx>
#include <vnx/ModuleInterface_vnx_stop_return.hxx>
#include <vnx/ProxyInterface_disable_export.hxx>
#include <vnx/ProxyInterface_disable_export_return.hxx>
#include <vnx/ProxyInterface_disable_forward.hxx>
#include <vnx/ProxyInterface_disable_forward_return.hxx>
#include <vnx/ProxyInterface_disable_import.hxx>
#include <vnx/ProxyInterface_disable_import_return.hxx>
#include <vnx/ProxyInterface_disable_tunnel.hxx>
#include <vnx/ProxyInterface_disable_tunnel_return.hxx>
#include <vnx/ProxyInterface_enable_export.hxx>
#include <vnx/ProxyInterface_enable_export_return.hxx>
#include <vnx/ProxyInterface_enable_forward.hxx>
#include <vnx/ProxyInterface_enable_forward_return.hxx>
#include <vnx/ProxyInterface_enable_import.hxx>
#include <vnx/ProxyInterface_enable_import_return.hxx>
#include <vnx/ProxyInterface_enable_tunnel.hxx>
#include <vnx/ProxyInterface_enable_tunnel_return.hxx>
#include <vnx/ProxyInterface_login.hxx>
#include <vnx/ProxyInterface_login_return.hxx>
#include <vnx/ProxyInterface_on_connect.hxx>
#include <vnx/ProxyInterface_on_connect_return.hxx>
#include <vnx/ProxyInterface_on_disconnect.hxx>
#include <vnx/ProxyInterface_on_disconnect_return.hxx>
#include <vnx/ProxyInterface_on_login.hxx>
#include <vnx/ProxyInterface_on_login_return.hxx>
#include <vnx/ProxyInterface_on_remote_connect.hxx>
#include <vnx/ProxyInterface_on_remote_connect_return.hxx>
#include <vnx/ProxyInterface_on_remote_login.hxx>
#include <vnx/ProxyInterface_on_remote_login_return.hxx>
#include <vnx/ProxyInterface_wait_on_connect.hxx>
#include <vnx/ProxyInterface_wait_on_connect_return.hxx>
#include <vnx/ProxyInterface_wait_on_disconnect.hxx>
#include <vnx/ProxyInterface_wait_on_disconnect_return.hxx>
#include <vnx/Session.hxx>
#include <vnx/TopicPtr.hpp>

#include <vnx/Generic.hxx>
#include <vnx/vnx.h>


namespace vnx {

BaseProxyAsyncClient::BaseProxyAsyncClient(const std::string& service_name)
	:	AsyncClient::AsyncClient(vnx::Hash64(service_name))
{
}

BaseProxyAsyncClient::BaseProxyAsyncClient(vnx::Hash64 service_addr)
	:	AsyncClient::AsyncClient(service_addr)
{
}

uint64_t BaseProxyAsyncClient::vnx_get_config_object(const std::function<void(const ::vnx::Object&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_get_config_object::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 0;
		vnx_queue_vnx_get_config_object[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::vnx_get_config(const std::string& name, const std::function<void(const ::vnx::Variant&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_get_config::create();
	_method->name = name;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 1;
		vnx_queue_vnx_get_config[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::vnx_set_config_object(const ::vnx::Object& config, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config_object::create();
	_method->config = config;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 2;
		vnx_queue_vnx_set_config_object[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::vnx_set_config(const std::string& name, const ::vnx::Variant& value, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config::create();
	_method->name = name;
	_method->value = value;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 3;
		vnx_queue_vnx_set_config[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::vnx_get_type_code(const std::function<void(const ::vnx::TypeCode&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_get_type_code::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 4;
		vnx_queue_vnx_get_type_code[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::vnx_get_module_info(const std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_get_module_info::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 5;
		vnx_queue_vnx_get_module_info[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::vnx_restart(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_restart::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 6;
		vnx_queue_vnx_restart[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::vnx_stop(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_stop::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 7;
		vnx_queue_vnx_stop[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::vnx_self_test(const std::function<void(const vnx::bool_t&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ModuleInterface_vnx_self_test::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 8;
		vnx_queue_vnx_self_test[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::login(const std::string& name, const std::string& password, const std::function<void(std::shared_ptr<const ::vnx::Session>)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_login::create();
	_method->name = name;
	_method->password = password;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 9;
		vnx_queue_login[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::enable_import(const std::string& topic_name, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_enable_import::create();
	_method->topic_name = topic_name;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 10;
		vnx_queue_enable_import[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::disable_import(const std::string& topic_name, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_disable_import::create();
	_method->topic_name = topic_name;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 11;
		vnx_queue_disable_import[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::enable_export(const std::string& topic_name, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_enable_export::create();
	_method->topic_name = topic_name;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 12;
		vnx_queue_enable_export[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::disable_export(const std::string& topic_name, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_disable_export::create();
	_method->topic_name = topic_name;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 13;
		vnx_queue_disable_export[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::enable_forward(const std::string& service_name, const int32_t& max_queue_ms, const int32_t& max_queue_size, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_enable_forward::create();
	_method->service_name = service_name;
	_method->max_queue_ms = max_queue_ms;
	_method->max_queue_size = max_queue_size;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 14;
		vnx_queue_enable_forward[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::disable_forward(const std::string& service_name, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_disable_forward::create();
	_method->service_name = service_name;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 15;
		vnx_queue_disable_forward[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::enable_tunnel(const ::vnx::Hash64& tunnel_addr, const int32_t& max_queue_ms, const int32_t& max_queue_size, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_enable_tunnel::create();
	_method->tunnel_addr = tunnel_addr;
	_method->max_queue_ms = max_queue_ms;
	_method->max_queue_size = max_queue_size;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 16;
		vnx_queue_enable_tunnel[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::disable_tunnel(const ::vnx::Hash64& tunnel_addr, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_disable_tunnel::create();
	_method->tunnel_addr = tunnel_addr;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 17;
		vnx_queue_disable_tunnel[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::wait_on_connect(const std::function<void(const ::vnx::Hash64&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_wait_on_connect::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 18;
		vnx_queue_wait_on_connect[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::wait_on_disconnect(const std::function<void(const ::vnx::Hash64&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_wait_on_disconnect::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 19;
		vnx_queue_wait_on_disconnect[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::on_connect(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_on_connect::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 20;
		vnx_queue_on_connect[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::on_disconnect(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_on_disconnect::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 21;
		vnx_queue_on_disconnect[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::on_remote_connect(const ::vnx::Hash64& process_id, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_on_remote_connect::create();
	_method->process_id = process_id;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 22;
		vnx_queue_on_remote_connect[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::on_login(const std::string& name, const std::string& password, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_on_login::create();
	_method->name = name;
	_method->password = password;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 23;
		vnx_queue_on_login[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t BaseProxyAsyncClient::on_remote_login(std::shared_ptr<const ::vnx::Session> remote_session, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::ProxyInterface_on_remote_login::create();
	_method->remote_session = remote_session;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 24;
		vnx_queue_on_remote_login[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

int32_t BaseProxyAsyncClient::vnx_purge_request(uint64_t _request_id, const vnx::exception& _ex) {
	std::unique_lock<std::mutex> _lock(vnx_mutex);
	const auto _iter = vnx_pending.find(_request_id);
	if(_iter == vnx_pending.end()) {
		return -1;
	}
	const auto _index = _iter->second;
	vnx_pending.erase(_iter);
	switch(_index) {
		case 0: {
			const auto _iter = vnx_queue_vnx_get_config_object.find(_request_id);
			if(_iter != vnx_queue_vnx_get_config_object.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_get_config_object.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 1: {
			const auto _iter = vnx_queue_vnx_get_config.find(_request_id);
			if(_iter != vnx_queue_vnx_get_config.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_get_config.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 2: {
			const auto _iter = vnx_queue_vnx_set_config_object.find(_request_id);
			if(_iter != vnx_queue_vnx_set_config_object.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_set_config_object.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 3: {
			const auto _iter = vnx_queue_vnx_set_config.find(_request_id);
			if(_iter != vnx_queue_vnx_set_config.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_set_config.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 4: {
			const auto _iter = vnx_queue_vnx_get_type_code.find(_request_id);
			if(_iter != vnx_queue_vnx_get_type_code.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_get_type_code.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 5: {
			const auto _iter = vnx_queue_vnx_get_module_info.find(_request_id);
			if(_iter != vnx_queue_vnx_get_module_info.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_get_module_info.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 6: {
			const auto _iter = vnx_queue_vnx_restart.find(_request_id);
			if(_iter != vnx_queue_vnx_restart.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_restart.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 7: {
			const auto _iter = vnx_queue_vnx_stop.find(_request_id);
			if(_iter != vnx_queue_vnx_stop.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_stop.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 8: {
			const auto _iter = vnx_queue_vnx_self_test.find(_request_id);
			if(_iter != vnx_queue_vnx_self_test.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_vnx_self_test.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 9: {
			const auto _iter = vnx_queue_login.find(_request_id);
			if(_iter != vnx_queue_login.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_login.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 10: {
			const auto _iter = vnx_queue_enable_import.find(_request_id);
			if(_iter != vnx_queue_enable_import.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_enable_import.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 11: {
			const auto _iter = vnx_queue_disable_import.find(_request_id);
			if(_iter != vnx_queue_disable_import.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_disable_import.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 12: {
			const auto _iter = vnx_queue_enable_export.find(_request_id);
			if(_iter != vnx_queue_enable_export.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_enable_export.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 13: {
			const auto _iter = vnx_queue_disable_export.find(_request_id);
			if(_iter != vnx_queue_disable_export.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_disable_export.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 14: {
			const auto _iter = vnx_queue_enable_forward.find(_request_id);
			if(_iter != vnx_queue_enable_forward.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_enable_forward.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 15: {
			const auto _iter = vnx_queue_disable_forward.find(_request_id);
			if(_iter != vnx_queue_disable_forward.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_disable_forward.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 16: {
			const auto _iter = vnx_queue_enable_tunnel.find(_request_id);
			if(_iter != vnx_queue_enable_tunnel.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_enable_tunnel.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 17: {
			const auto _iter = vnx_queue_disable_tunnel.find(_request_id);
			if(_iter != vnx_queue_disable_tunnel.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_disable_tunnel.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 18: {
			const auto _iter = vnx_queue_wait_on_connect.find(_request_id);
			if(_iter != vnx_queue_wait_on_connect.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_wait_on_connect.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 19: {
			const auto _iter = vnx_queue_wait_on_disconnect.find(_request_id);
			if(_iter != vnx_queue_wait_on_disconnect.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_wait_on_disconnect.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 20: {
			const auto _iter = vnx_queue_on_connect.find(_request_id);
			if(_iter != vnx_queue_on_connect.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_on_connect.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 21: {
			const auto _iter = vnx_queue_on_disconnect.find(_request_id);
			if(_iter != vnx_queue_on_disconnect.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_on_disconnect.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 22: {
			const auto _iter = vnx_queue_on_remote_connect.find(_request_id);
			if(_iter != vnx_queue_on_remote_connect.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_on_remote_connect.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 23: {
			const auto _iter = vnx_queue_on_login.find(_request_id);
			if(_iter != vnx_queue_on_login.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_on_login.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 24: {
			const auto _iter = vnx_queue_on_remote_login.find(_request_id);
			if(_iter != vnx_queue_on_remote_login.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_on_remote_login.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
	}
	return _index;
}

int32_t BaseProxyAsyncClient::vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) {
	std::unique_lock<std::mutex> _lock(vnx_mutex);
	const auto _iter = vnx_pending.find(_request_id);
	if(_iter == vnx_pending.end()) {
		throw std::runtime_error("BaseProxyAsyncClient: received unknown return");
	}
	const auto _index = _iter->second;
	vnx_pending.erase(_iter);
	switch(_index) {
		case 0: {
			const auto _iter = vnx_queue_vnx_get_config_object.find(_request_id);
			if(_iter == vnx_queue_vnx_get_config_object.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_get_config_object.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::Object>());
				} else {
					throw std::logic_error("BaseProxyAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 1: {
			const auto _iter = vnx_queue_vnx_get_config.find(_request_id);
			if(_iter == vnx_queue_vnx_get_config.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_get_config.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::Variant>());
				} else {
					throw std::logic_error("BaseProxyAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 2: {
			const auto _iter = vnx_queue_vnx_set_config_object.find(_request_id);
			if(_iter == vnx_queue_vnx_set_config_object.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_set_config_object.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 3: {
			const auto _iter = vnx_queue_vnx_set_config.find(_request_id);
			if(_iter == vnx_queue_vnx_set_config.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_set_config.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 4: {
			const auto _iter = vnx_queue_vnx_get_type_code.find(_request_id);
			if(_iter == vnx_queue_vnx_get_type_code.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_get_type_code.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::TypeCode>());
				} else {
					throw std::logic_error("BaseProxyAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 5: {
			const auto _iter = vnx_queue_vnx_get_module_info.find(_request_id);
			if(_iter == vnx_queue_vnx_get_module_info.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_get_module_info.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<std::shared_ptr<const ::vnx::ModuleInfo>>());
				} else {
					throw std::logic_error("BaseProxyAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 6: {
			const auto _iter = vnx_queue_vnx_restart.find(_request_id);
			if(_iter == vnx_queue_vnx_restart.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_restart.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 7: {
			const auto _iter = vnx_queue_vnx_stop.find(_request_id);
			if(_iter == vnx_queue_vnx_stop.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_stop.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 8: {
			const auto _iter = vnx_queue_vnx_self_test.find(_request_id);
			if(_iter == vnx_queue_vnx_self_test.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_vnx_self_test.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<vnx::bool_t>());
				} else {
					throw std::logic_error("BaseProxyAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 9: {
			const auto _iter = vnx_queue_login.find(_request_id);
			if(_iter == vnx_queue_login.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_login.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ProxyInterface_login_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<std::shared_ptr<const ::vnx::Session>>());
				} else {
					throw std::logic_error("BaseProxyAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 10: {
			const auto _iter = vnx_queue_enable_import.find(_request_id);
			if(_iter == vnx_queue_enable_import.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_enable_import.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 11: {
			const auto _iter = vnx_queue_disable_import.find(_request_id);
			if(_iter == vnx_queue_disable_import.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_disable_import.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 12: {
			const auto _iter = vnx_queue_enable_export.find(_request_id);
			if(_iter == vnx_queue_enable_export.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_enable_export.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 13: {
			const auto _iter = vnx_queue_disable_export.find(_request_id);
			if(_iter == vnx_queue_disable_export.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_disable_export.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 14: {
			const auto _iter = vnx_queue_enable_forward.find(_request_id);
			if(_iter == vnx_queue_enable_forward.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_enable_forward.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 15: {
			const auto _iter = vnx_queue_disable_forward.find(_request_id);
			if(_iter == vnx_queue_disable_forward.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_disable_forward.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 16: {
			const auto _iter = vnx_queue_enable_tunnel.find(_request_id);
			if(_iter == vnx_queue_enable_tunnel.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_enable_tunnel.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 17: {
			const auto _iter = vnx_queue_disable_tunnel.find(_request_id);
			if(_iter == vnx_queue_disable_tunnel.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_disable_tunnel.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 18: {
			const auto _iter = vnx_queue_wait_on_connect.find(_request_id);
			if(_iter == vnx_queue_wait_on_connect.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_wait_on_connect.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ProxyInterface_wait_on_connect_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::Hash64>());
				} else {
					throw std::logic_error("BaseProxyAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 19: {
			const auto _iter = vnx_queue_wait_on_disconnect.find(_request_id);
			if(_iter == vnx_queue_wait_on_disconnect.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_wait_on_disconnect.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::ProxyInterface_wait_on_disconnect_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::Hash64>());
				} else {
					throw std::logic_error("BaseProxyAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 20: {
			const auto _iter = vnx_queue_on_connect.find(_request_id);
			if(_iter == vnx_queue_on_connect.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_on_connect.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 21: {
			const auto _iter = vnx_queue_on_disconnect.find(_request_id);
			if(_iter == vnx_queue_on_disconnect.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_on_disconnect.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 22: {
			const auto _iter = vnx_queue_on_remote_connect.find(_request_id);
			if(_iter == vnx_queue_on_remote_connect.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_on_remote_connect.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 23: {
			const auto _iter = vnx_queue_on_login.find(_request_id);
			if(_iter == vnx_queue_on_login.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_on_login.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 24: {
			const auto _iter = vnx_queue_on_remote_login.find(_request_id);
			if(_iter == vnx_queue_on_remote_login.end()) {
				throw std::runtime_error("BaseProxyAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_on_remote_login.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		default:
			if(_index >= 0) {
				throw std::logic_error("BaseProxyAsyncClient: invalid callback index");
			}
	}
	return _index;
}


} // namespace vnx
