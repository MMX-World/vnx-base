
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/GatewayBase.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <vnx/GatewayInterface_forward.hxx>
#include <vnx/GatewayInterface_forward_return.hxx>
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
#include <vnx/Request.hxx>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 GatewayBase::VNX_TYPE_HASH(0xe3980e0cfa2a352aull);
const vnx::Hash64 GatewayBase::VNX_CODE_HASH(0x539aea26b9f16f6cull);

GatewayBase::GatewayBase(const std::string& _vnx_name)
	:	Module::Module(_vnx_name)
{
	vnx::read_config(vnx_name + ".max_queue_ms", max_queue_ms);
	vnx::read_config(vnx_name + ".max_queue_size", max_queue_size);
}

vnx::Hash64 GatewayBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string GatewayBase::get_type_name() const {
	return "vnx.Gateway";
}

const vnx::TypeCode* GatewayBase::get_type_code() const {
	return vnx::vnx_native_type_code_GatewayBase;
}

void GatewayBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_GatewayBase;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, max_queue_ms);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, max_queue_size);
	_visitor.type_end(*_type_code);
}

void GatewayBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"max_queue_ms\": "; vnx::write(_out, max_queue_ms);
	_out << ", \"max_queue_size\": "; vnx::write(_out, max_queue_size);
	_out << "}";
}

void GatewayBase::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object GatewayBase::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.Gateway";
	_object["max_queue_ms"] = max_queue_ms;
	_object["max_queue_size"] = max_queue_size;
	return _object;
}

void GatewayBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "max_queue_ms") {
			_entry.second.to(max_queue_ms);
		} else if(_entry.first == "max_queue_size") {
			_entry.second.to(max_queue_size);
		}
	}
}

vnx::Variant GatewayBase::get_field(const std::string& _name) const {
	if(_name == "max_queue_ms") {
		return vnx::Variant(max_queue_ms);
	}
	if(_name == "max_queue_size") {
		return vnx::Variant(max_queue_size);
	}
	return vnx::Variant();
}

void GatewayBase::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "max_queue_ms") {
		_value.to(max_queue_ms);
	} else if(_name == "max_queue_size") {
		_value.to(max_queue_size);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const GatewayBase& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, GatewayBase& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* GatewayBase::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> GatewayBase::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.Gateway";
	type_code->type_hash = vnx::Hash64(0xe3980e0cfa2a352aull);
	type_code->code_hash = vnx::Hash64(0x539aea26b9f16f6cull);
	type_code->is_native = true;
	type_code->native_size = sizeof(::vnx::GatewayBase);
	type_code->methods.resize(10);
	type_code->methods[0] = ::vnx::ModuleInterface_vnx_get_config_object::static_get_type_code();
	type_code->methods[1] = ::vnx::ModuleInterface_vnx_get_config::static_get_type_code();
	type_code->methods[2] = ::vnx::ModuleInterface_vnx_set_config_object::static_get_type_code();
	type_code->methods[3] = ::vnx::ModuleInterface_vnx_set_config::static_get_type_code();
	type_code->methods[4] = ::vnx::ModuleInterface_vnx_get_type_code::static_get_type_code();
	type_code->methods[5] = ::vnx::ModuleInterface_vnx_get_module_info::static_get_type_code();
	type_code->methods[6] = ::vnx::ModuleInterface_vnx_restart::static_get_type_code();
	type_code->methods[7] = ::vnx::ModuleInterface_vnx_stop::static_get_type_code();
	type_code->methods[8] = ::vnx::ModuleInterface_vnx_self_test::static_get_type_code();
	type_code->methods[9] = ::vnx::GatewayInterface_forward::static_get_type_code();
	type_code->fields.resize(2);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "max_queue_ms";
		field.value = vnx::to_string(100);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 4;
		field.name = "max_queue_size";
		field.value = vnx::to_string(0);
		field.code = {7};
	}
	type_code->build();
	return type_code;
}

void GatewayBase::vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) {
	const auto* _type_code = _value->get_type_code();
	while(_type_code) {
		switch(_type_code->type_hash) {
			default:
				_type_code = _type_code->super;
		}
	}
	handle(std::static_pointer_cast<const vnx::Value>(_value));
}

std::shared_ptr<vnx::Value> GatewayBase::vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) {
	switch(_method->get_type_hash()) {
		case 0x17f58f68bf83abc0ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_config_object_return::create();
			_return_value->_ret_0 = vnx_get_config_object();
			return _return_value;
		}
		case 0xbbc7f1a01044d294ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_config_return::create();
			_return_value->_ret_0 = vnx_get_config(_args->name);
			return _return_value;
		}
		case 0xca30f814f17f322full: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config_object>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_set_config_object_return::create();
			vnx_set_config_object(_args->config);
			return _return_value;
		}
		case 0x362aac91373958b7ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_set_config_return::create();
			vnx_set_config(_args->name, _args->value);
			return _return_value;
		}
		case 0x305ec4d628960e5dull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_type_code_return::create();
			_return_value->_ret_0 = vnx_get_type_code();
			return _return_value;
		}
		case 0xf6d82bdf66d034a1ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_module_info_return::create();
			_return_value->_ret_0 = vnx_get_module_info();
			return _return_value;
		}
		case 0x9e95dc280cecca1bull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_restart>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_restart_return::create();
			vnx_restart();
			return _return_value;
		}
		case 0x7ab49ce3d1bfc0d2ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_stop>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_stop_return::create();
			vnx_stop();
			return _return_value;
		}
		case 0x6ce3775b41a42697ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_self_test_return::create();
			_return_value->_ret_0 = vnx_self_test();
			return _return_value;
		}
		case 0x2bb048616aefdcf6ull: {
			auto _args = std::static_pointer_cast<const ::vnx::GatewayInterface_forward>(_method);
			auto _return_value = ::vnx::GatewayInterface_forward_return::create();
			forward(_args->request);
			return _return_value;
		}
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : vnx::Hash64();
	_ex->method = _method->get_type_name();
	return _ex;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::GatewayBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.max_queue_ms, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.max_queue_size, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::GatewayBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_GatewayBase;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::GatewayBase>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.max_queue_ms);
	vnx::write_value(_buf + 4, value.max_queue_size);
}

void read(std::istream& in, ::vnx::GatewayBase& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::GatewayBase& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::GatewayBase& value) {
	value.accept(visitor);
}

} // vnx
