
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/ProxyInterface_disable_tunnel.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/ProxyInterface_disable_tunnel_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 ProxyInterface_disable_tunnel::VNX_TYPE_HASH(0xb9a7abaf9d00b54bull);
const vnx::Hash64 ProxyInterface_disable_tunnel::VNX_CODE_HASH(0x1d3295edb1fa0ed1ull);

vnx::Hash64 ProxyInterface_disable_tunnel::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ProxyInterface_disable_tunnel::get_type_name() const {
	return "vnx.ProxyInterface.disable_tunnel";
}

const vnx::TypeCode* ProxyInterface_disable_tunnel::get_type_code() const {
	return vnx::vnx_native_type_code_ProxyInterface_disable_tunnel;
}

std::shared_ptr<ProxyInterface_disable_tunnel> ProxyInterface_disable_tunnel::create() {
	return std::make_shared<ProxyInterface_disable_tunnel>();
}

std::shared_ptr<vnx::Value> ProxyInterface_disable_tunnel::clone() const {
	return std::make_shared<ProxyInterface_disable_tunnel>(*this);
}

void ProxyInterface_disable_tunnel::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ProxyInterface_disable_tunnel::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ProxyInterface_disable_tunnel::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_ProxyInterface_disable_tunnel;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, tunnel_addr);
	_visitor.type_end(*_type_code);
}

void ProxyInterface_disable_tunnel::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.ProxyInterface.disable_tunnel\"";
	_out << ", \"tunnel_addr\": "; vnx::write(_out, tunnel_addr);
	_out << "}";
}

void ProxyInterface_disable_tunnel::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ProxyInterface_disable_tunnel::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.ProxyInterface.disable_tunnel";
	_object["tunnel_addr"] = tunnel_addr;
	return _object;
}

void ProxyInterface_disable_tunnel::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "tunnel_addr") {
			_entry.second.to(tunnel_addr);
		}
	}
}

vnx::Variant ProxyInterface_disable_tunnel::get_field(const std::string& _name) const {
	if(_name == "tunnel_addr") {
		return vnx::Variant(tunnel_addr);
	}
	return vnx::Variant();
}

void ProxyInterface_disable_tunnel::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "tunnel_addr") {
		_value.to(tunnel_addr);
	}}

/// \private
std::ostream& operator<<(std::ostream& _out, const ProxyInterface_disable_tunnel& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ProxyInterface_disable_tunnel& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ProxyInterface_disable_tunnel::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ProxyInterface_disable_tunnel::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.ProxyInterface.disable_tunnel";
	type_code->type_hash = vnx::Hash64(0xb9a7abaf9d00b54bull);
	type_code->code_hash = vnx::Hash64(0x1d3295edb1fa0ed1ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::vnx::ProxyInterface_disable_tunnel);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ProxyInterface_disable_tunnel>(); };
	type_code->return_type = ::vnx::ProxyInterface_disable_tunnel_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "tunnel_addr";
		field.code = {4};
	}
	type_code->permission = "vnx.permission_e.PROXY_FORWARD";
	type_code->build();
	return type_code;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::ProxyInterface_disable_tunnel& value, const TypeCode* type_code, const uint16_t* code) {
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
	in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.tunnel_addr, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::ProxyInterface_disable_tunnel& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_ProxyInterface_disable_tunnel;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::ProxyInterface_disable_tunnel>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.tunnel_addr, type_code, type_code->fields[0].code.data());
}

void read(std::istream& in, ::vnx::ProxyInterface_disable_tunnel& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::ProxyInterface_disable_tunnel& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::ProxyInterface_disable_tunnel& value) {
	value.accept(visitor);
}

} // vnx
