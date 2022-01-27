
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <vnx/NoSuchService.hxx>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 NoSuchMethod::VNX_TYPE_HASH(0x6e811245e86c2629ull);
const vnx::Hash64 NoSuchMethod::VNX_CODE_HASH(0x858eed7d12425930ull);

vnx::Hash64 NoSuchMethod::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string NoSuchMethod::get_type_name() const {
	return "vnx.NoSuchMethod";
}

const vnx::TypeCode* NoSuchMethod::get_type_code() const {
	return vnx::vnx_native_type_code_NoSuchMethod;
}

std::shared_ptr<NoSuchMethod> NoSuchMethod::create() {
	return std::make_shared<NoSuchMethod>();
}

std::shared_ptr<vnx::Value> NoSuchMethod::clone() const {
	return std::make_shared<NoSuchMethod>(*this);
}

void NoSuchMethod::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void NoSuchMethod::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void NoSuchMethod::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_NoSuchMethod;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, what);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, dst_mac);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, method);
	_visitor.type_end(*_type_code);
}

void NoSuchMethod::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.NoSuchMethod\"";
	_out << ", \"what\": "; vnx::write(_out, what);
	_out << ", \"dst_mac\": "; vnx::write(_out, dst_mac);
	_out << ", \"method\": "; vnx::write(_out, method);
	_out << "}";
}

void NoSuchMethod::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object NoSuchMethod::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.NoSuchMethod";
	_object["what"] = what;
	_object["dst_mac"] = dst_mac;
	_object["method"] = method;
	return _object;
}

void NoSuchMethod::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "dst_mac") {
			_entry.second.to(dst_mac);
		} else if(_entry.first == "method") {
			_entry.second.to(method);
		} else if(_entry.first == "what") {
			_entry.second.to(what);
		}
	}
}

vnx::Variant NoSuchMethod::get_field(const std::string& _name) const {
	if(_name == "what") {
		return vnx::Variant(what);
	}
	if(_name == "dst_mac") {
		return vnx::Variant(dst_mac);
	}
	if(_name == "method") {
		return vnx::Variant(method);
	}
	return vnx::Variant();
}

void NoSuchMethod::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "what") {
		_value.to(what);
	} else if(_name == "dst_mac") {
		_value.to(dst_mac);
	} else if(_name == "method") {
		_value.to(method);
	}}

/// \private
std::ostream& operator<<(std::ostream& _out, const NoSuchMethod& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, NoSuchMethod& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* NoSuchMethod::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> NoSuchMethod::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.NoSuchMethod";
	type_code->type_hash = vnx::Hash64(0x6e811245e86c2629ull);
	type_code->code_hash = vnx::Hash64(0x858eed7d12425930ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::vnx::NoSuchMethod);
	type_code->parents.resize(2);
	type_code->parents[0] = ::vnx::NoSuchService::static_get_type_code();
	type_code->parents[1] = ::vnx::Exception::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<NoSuchMethod>(); };
	type_code->fields.resize(3);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "what";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "dst_mac";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "method";
		field.code = {32};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::NoSuchMethod& value, const TypeCode* type_code, const uint16_t* code) {
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
			case 0: vnx::read(in, value.what, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.dst_mac, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.method, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::NoSuchMethod& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_NoSuchMethod;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::NoSuchMethod>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.what, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.dst_mac, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.method, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::vnx::NoSuchMethod& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::NoSuchMethod& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::NoSuchMethod& value) {
	value.accept(visitor);
}

} // vnx
