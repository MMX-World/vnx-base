
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/Player_set_speed.hxx>
#include <vnx/Player_set_speed_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 Player_set_speed::VNX_TYPE_HASH(0xadab13bfccf029a7ull);
const vnx::Hash64 Player_set_speed::VNX_CODE_HASH(0x49631d0b3f764bf6ull);

vnx::Hash64 Player_set_speed::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Player_set_speed::get_type_name() const {
	return "vnx.Player.set_speed";
}

const vnx::TypeCode* Player_set_speed::get_type_code() const {
	return vnx::vnx_native_type_code_Player_set_speed;
}

std::shared_ptr<Player_set_speed> Player_set_speed::create() {
	return std::make_shared<Player_set_speed>();
}

std::shared_ptr<vnx::Value> Player_set_speed::clone() const {
	return std::make_shared<Player_set_speed>(*this);
}

void Player_set_speed::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Player_set_speed::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Player_set_speed::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_Player_set_speed;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, speed);
	_visitor.type_end(*_type_code);
}

void Player_set_speed::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.Player.set_speed\"";
	_out << ", \"speed\": "; vnx::write(_out, speed);
	_out << "}";
}

void Player_set_speed::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Player_set_speed::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.Player.set_speed";
	_object["speed"] = speed;
	return _object;
}

void Player_set_speed::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "speed") {
			_entry.second.to(speed);
		}
	}
}

vnx::Variant Player_set_speed::get_field(const std::string& _name) const {
	if(_name == "speed") {
		return vnx::Variant(speed);
	}
	return vnx::Variant();
}

void Player_set_speed::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "speed") {
		_value.to(speed);
	}}

/// \private
std::ostream& operator<<(std::ostream& _out, const Player_set_speed& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Player_set_speed& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Player_set_speed::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Player_set_speed::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.Player.set_speed";
	type_code->type_hash = vnx::Hash64(0xadab13bfccf029a7ull);
	type_code->code_hash = vnx::Hash64(0x49631d0b3f764bf6ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::vnx::Player_set_speed);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Player_set_speed>(); };
	type_code->return_type = ::vnx::Player_set_speed_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "speed";
		field.code = {10};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::Player_set_speed& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.speed, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::Player_set_speed& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_Player_set_speed;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::Player_set_speed>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.speed);
}

void read(std::istream& in, ::vnx::Player_set_speed& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::Player_set_speed& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::Player_set_speed& value) {
	value.accept(visitor);
}

} // vnx
