
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/ModuleInterface_vnx_self_test.hxx>
#include <vnx/ModuleInterface_vnx_self_test_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 ModuleInterface_vnx_self_test::VNX_TYPE_HASH(0x6ce3775b41a42697ull);
const vnx::Hash64 ModuleInterface_vnx_self_test::VNX_CODE_HASH(0x78a523efb910c8aaull);

vnx::Hash64 ModuleInterface_vnx_self_test::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ModuleInterface_vnx_self_test::get_type_name() const {
	return "vnx.ModuleInterface.vnx_self_test";
}

const vnx::TypeCode* ModuleInterface_vnx_self_test::get_type_code() const {
	return vnx::vnx_native_type_code_ModuleInterface_vnx_self_test;
}

std::shared_ptr<ModuleInterface_vnx_self_test> ModuleInterface_vnx_self_test::create() {
	return std::make_shared<ModuleInterface_vnx_self_test>();
}

std::shared_ptr<vnx::Value> ModuleInterface_vnx_self_test::clone() const {
	return std::make_shared<ModuleInterface_vnx_self_test>(*this);
}

void ModuleInterface_vnx_self_test::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ModuleInterface_vnx_self_test::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ModuleInterface_vnx_self_test::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_ModuleInterface_vnx_self_test;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void ModuleInterface_vnx_self_test::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.ModuleInterface.vnx_self_test\"";
	_out << "}";
}

void ModuleInterface_vnx_self_test::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ModuleInterface_vnx_self_test::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.ModuleInterface.vnx_self_test";
	return _object;
}

void ModuleInterface_vnx_self_test::from_object(const vnx::Object& _object) {
}

vnx::Variant ModuleInterface_vnx_self_test::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void ModuleInterface_vnx_self_test::set_field(const std::string& _name, const vnx::Variant& _value) {
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ModuleInterface_vnx_self_test& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ModuleInterface_vnx_self_test& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ModuleInterface_vnx_self_test::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ModuleInterface_vnx_self_test::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.ModuleInterface.vnx_self_test";
	type_code->type_hash = vnx::Hash64(0x6ce3775b41a42697ull);
	type_code->code_hash = vnx::Hash64(0x78a523efb910c8aaull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::vnx::ModuleInterface_vnx_self_test);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ModuleInterface_vnx_self_test>(); };
	type_code->is_const = true;
	type_code->return_type = ::vnx::ModuleInterface_vnx_self_test_return::static_get_type_code();
	type_code->permission = "vnx.permission_e.SELF_TEST";
	type_code->build();
	return type_code;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::ModuleInterface_vnx_self_test& value, const TypeCode* type_code, const uint16_t* code) {
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
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::ModuleInterface_vnx_self_test& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_ModuleInterface_vnx_self_test;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::ModuleInterface_vnx_self_test>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::vnx::ModuleInterface_vnx_self_test& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::ModuleInterface_vnx_self_test& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::ModuleInterface_vnx_self_test& value) {
	value.accept(visitor);
}

} // vnx
