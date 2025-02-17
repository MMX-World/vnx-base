
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/PlayerAsyncClient.hxx>
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
#include <vnx/Player_get_info.hxx>
#include <vnx/Player_get_info_return.hxx>
#include <vnx/Player_pause.hxx>
#include <vnx/Player_pause_return.hxx>
#include <vnx/Player_play.hxx>
#include <vnx/Player_play_return.hxx>
#include <vnx/Player_seek_by_count.hxx>
#include <vnx/Player_seek_by_count_return.hxx>
#include <vnx/Player_seek_by_time.hxx>
#include <vnx/Player_seek_by_time_return.hxx>
#include <vnx/Player_seek_to_position.hxx>
#include <vnx/Player_seek_to_position_return.hxx>
#include <vnx/Player_seek_to_time.hxx>
#include <vnx/Player_seek_to_time_return.hxx>
#include <vnx/Player_set_speed.hxx>
#include <vnx/Player_set_speed_return.hxx>
#include <vnx/Player_stop.hxx>
#include <vnx/Player_stop_return.hxx>
#include <vnx/Player_toggle.hxx>
#include <vnx/Player_toggle_return.hxx>
#include <vnx/RecordHeader.hxx>
#include <vnx/TopicPtr.hpp>

#include <vnx/Generic.hxx>
#include <vnx/vnx.h>


namespace vnx {

PlayerAsyncClient::PlayerAsyncClient(const std::string& service_name)
	:	AsyncClient::AsyncClient(vnx::Hash64(service_name))
{
}

PlayerAsyncClient::PlayerAsyncClient(vnx::Hash64 service_addr)
	:	AsyncClient::AsyncClient(service_addr)
{
}

uint64_t PlayerAsyncClient::vnx_get_config_object(const std::function<void(const ::vnx::Object&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::vnx_get_config(const std::string& name, const std::function<void(const ::vnx::Variant&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::vnx_set_config_object(const ::vnx::Object& config, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::vnx_set_config(const std::string& name, const ::vnx::Variant& value, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::vnx_get_type_code(const std::function<void(const ::vnx::TypeCode&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::vnx_get_module_info(const std::function<void(std::shared_ptr<const ::vnx::ModuleInfo>)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::vnx_restart(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::vnx_stop(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::vnx_self_test(const std::function<void(const vnx::bool_t&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
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

uint64_t PlayerAsyncClient::get_info(const std::function<void(const ::vnx::RecordHeader&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_get_info::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 9;
		vnx_queue_get_info[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::play(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_play::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 10;
		vnx_queue_play[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::pause(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_pause::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 11;
		vnx_queue_pause[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::toggle(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_toggle::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 12;
		vnx_queue_toggle[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::stop(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_stop::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 13;
		vnx_queue_stop[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::set_speed(const vnx::float64_t& speed, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_set_speed::create();
	_method->speed = speed;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 14;
		vnx_queue_set_speed[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::seek_by_count(const int64_t& delta_count, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_seek_by_count::create();
	_method->delta_count = delta_count;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 15;
		vnx_queue_seek_by_count[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::seek_by_time(const int64_t& delta_us, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_seek_by_time::create();
	_method->delta_us = delta_us;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 16;
		vnx_queue_seek_by_time[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::seek_to_position(const vnx::float64_t& position, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_seek_to_position::create();
	_method->position = position;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 17;
		vnx_queue_seek_to_position[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlayerAsyncClient::seek_to_time(const int64_t& time_us, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::vnx::Player_seek_to_time::create();
	_method->time_us = time_us;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 18;
		vnx_queue_seek_to_time[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

int32_t PlayerAsyncClient::vnx_purge_request(uint64_t _request_id, const vnx::exception& _ex) {
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
			const auto _iter = vnx_queue_get_info.find(_request_id);
			if(_iter != vnx_queue_get_info.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_get_info.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 10: {
			const auto _iter = vnx_queue_play.find(_request_id);
			if(_iter != vnx_queue_play.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_play.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 11: {
			const auto _iter = vnx_queue_pause.find(_request_id);
			if(_iter != vnx_queue_pause.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_pause.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 12: {
			const auto _iter = vnx_queue_toggle.find(_request_id);
			if(_iter != vnx_queue_toggle.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_toggle.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 13: {
			const auto _iter = vnx_queue_stop.find(_request_id);
			if(_iter != vnx_queue_stop.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_stop.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 14: {
			const auto _iter = vnx_queue_set_speed.find(_request_id);
			if(_iter != vnx_queue_set_speed.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_set_speed.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 15: {
			const auto _iter = vnx_queue_seek_by_count.find(_request_id);
			if(_iter != vnx_queue_seek_by_count.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_seek_by_count.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 16: {
			const auto _iter = vnx_queue_seek_by_time.find(_request_id);
			if(_iter != vnx_queue_seek_by_time.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_seek_by_time.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 17: {
			const auto _iter = vnx_queue_seek_to_position.find(_request_id);
			if(_iter != vnx_queue_seek_to_position.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_seek_to_position.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 18: {
			const auto _iter = vnx_queue_seek_to_time.find(_request_id);
			if(_iter != vnx_queue_seek_to_time.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_seek_to_time.erase(_iter);
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

int32_t PlayerAsyncClient::vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) {
	std::unique_lock<std::mutex> _lock(vnx_mutex);
	const auto _iter = vnx_pending.find(_request_id);
	if(_iter == vnx_pending.end()) {
		throw std::runtime_error("PlayerAsyncClient: received unknown return");
	}
	const auto _index = _iter->second;
	vnx_pending.erase(_iter);
	switch(_index) {
		case 0: {
			const auto _iter = vnx_queue_vnx_get_config_object.find(_request_id);
			if(_iter == vnx_queue_vnx_get_config_object.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
					throw std::logic_error("PlayerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 1: {
			const auto _iter = vnx_queue_vnx_get_config.find(_request_id);
			if(_iter == vnx_queue_vnx_get_config.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
					throw std::logic_error("PlayerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 2: {
			const auto _iter = vnx_queue_vnx_set_config_object.find(_request_id);
			if(_iter == vnx_queue_vnx_set_config_object.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
					throw std::logic_error("PlayerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 5: {
			const auto _iter = vnx_queue_vnx_get_module_info.find(_request_id);
			if(_iter == vnx_queue_vnx_get_module_info.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
					throw std::logic_error("PlayerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 6: {
			const auto _iter = vnx_queue_vnx_restart.find(_request_id);
			if(_iter == vnx_queue_vnx_restart.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
				throw std::runtime_error("PlayerAsyncClient: callback not found");
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
					throw std::logic_error("PlayerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 9: {
			const auto _iter = vnx_queue_get_info.find(_request_id);
			if(_iter == vnx_queue_get_info.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_get_info.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::vnx::Player_get_info_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<::vnx::RecordHeader>());
				} else {
					throw std::logic_error("PlayerAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 10: {
			const auto _iter = vnx_queue_play.find(_request_id);
			if(_iter == vnx_queue_play.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_play.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 11: {
			const auto _iter = vnx_queue_pause.find(_request_id);
			if(_iter == vnx_queue_pause.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_pause.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 12: {
			const auto _iter = vnx_queue_toggle.find(_request_id);
			if(_iter == vnx_queue_toggle.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_toggle.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 13: {
			const auto _iter = vnx_queue_stop.find(_request_id);
			if(_iter == vnx_queue_stop.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_stop.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 14: {
			const auto _iter = vnx_queue_set_speed.find(_request_id);
			if(_iter == vnx_queue_set_speed.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_set_speed.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 15: {
			const auto _iter = vnx_queue_seek_by_count.find(_request_id);
			if(_iter == vnx_queue_seek_by_count.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_seek_by_count.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 16: {
			const auto _iter = vnx_queue_seek_by_time.find(_request_id);
			if(_iter == vnx_queue_seek_by_time.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_seek_by_time.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 17: {
			const auto _iter = vnx_queue_seek_to_position.find(_request_id);
			if(_iter == vnx_queue_seek_to_position.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_seek_to_position.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 18: {
			const auto _iter = vnx_queue_seek_to_time.find(_request_id);
			if(_iter == vnx_queue_seek_to_time.end()) {
				throw std::runtime_error("PlayerAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_seek_to_time.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		default:
			if(_index >= 0) {
				throw std::logic_error("PlayerAsyncClient: invalid callback index");
			}
	}
	return _index;
}


} // namespace vnx
