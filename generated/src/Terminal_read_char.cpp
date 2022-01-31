
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/Terminal_read_char.hxx>
#include <vnx/Terminal_read_char_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 Terminal_read_char::VNX_TYPE_HASH(0xbba4b21472683454ull);
const vnx::Hash64 Terminal_read_char::VNX_CODE_HASH(0x88eeb8ebf74e707dull);

vnx::Hash64 Terminal_read_char::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Terminal_read_char::get_type_name() const {
	return "vnx.Terminal.read_char";
}

const vnx::TypeCode* Terminal_read_char::get_type_code() const {
	return vnx::vnx_native_type_code_Terminal_read_char;
}

std::shared_ptr<Terminal_read_char> Terminal_read_char::create() {
	return std::make_shared<Terminal_read_char>();
}

std::shared_ptr<vnx::Value> Terminal_read_char::clone() const {
	return std::make_shared<Terminal_read_char>(*this);
}

void Terminal_read_char::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Terminal_read_char::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Terminal_read_char::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_Terminal_read_char;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, c);
	_visitor.type_end(*_type_code);
}

void Terminal_read_char::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.Terminal.read_char\"";
	_out << ", \"c\": "; vnx::write(_out, c);
	_out << "}";
}

void Terminal_read_char::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Terminal_read_char::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.Terminal.read_char";
	_object["c"] = c;
	return _object;
}

void Terminal_read_char::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "c") {
			_entry.second.to(c);
		}
	}
}

vnx::Variant Terminal_read_char::get_field(const std::string& _name) const {
	if(_name == "c") {
		return vnx::Variant(c);
	}
	return vnx::Variant();
}

void Terminal_read_char::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "c") {
		_value.to(c);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Terminal_read_char& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Terminal_read_char& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Terminal_read_char::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Terminal_read_char::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.Terminal.read_char";
	type_code->type_hash = vnx::Hash64(0xbba4b21472683454ull);
	type_code->code_hash = vnx::Hash64(0x88eeb8ebf74e707dull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::vnx::Terminal_read_char);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Terminal_read_char>(); };
	type_code->return_type = ::vnx::Terminal_read_char_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 1;
		field.name = "c";
		field.code = {5};
	}
	type_code->permission = "vnx.permission_e.LOCAL";
	type_code->build();
	return type_code;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::Terminal_read_char& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.c, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::Terminal_read_char& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_Terminal_read_char;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::Terminal_read_char>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(1);
	vnx::write_value(_buf + 0, value.c);
}

void read(std::istream& in, ::vnx::Terminal_read_char& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::Terminal_read_char& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::Terminal_read_char& value) {
	value.accept(visitor);
}

} // vnx
