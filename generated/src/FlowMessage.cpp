
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/FlowMessage.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Message.hxx>

#include <vnx/vnx.h>


namespace vnx {

const uint16_t FlowMessage::OPEN;
const uint16_t FlowMessage::PING;
const uint16_t FlowMessage::CLOSE;

const vnx::Hash64 FlowMessage::VNX_TYPE_HASH(0x496b887fb39119c2ull);
const vnx::Hash64 FlowMessage::VNX_CODE_HASH(0x6a4eaa76764b3c3bull);

vnx::Hash64 FlowMessage::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string FlowMessage::get_type_name() const {
	return "vnx.FlowMessage";
}

const vnx::TypeCode* FlowMessage::get_type_code() const {
	return vnx::vnx_native_type_code_FlowMessage;
}

std::shared_ptr<FlowMessage> FlowMessage::create() {
	return std::make_shared<FlowMessage>();
}

std::shared_ptr<vnx::Value> FlowMessage::clone() const {
	return std::make_shared<FlowMessage>(*this);
}

void FlowMessage::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void FlowMessage::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void FlowMessage::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_FlowMessage;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, stream);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, flags);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, hop_count);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, src_mac);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, dst_mac);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, flow_code);
	_visitor.type_end(*_type_code);
}

void FlowMessage::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.FlowMessage\"";
	_out << ", \"stream\": "; vnx::write(_out, stream);
	_out << ", \"flags\": "; vnx::write(_out, flags);
	_out << ", \"hop_count\": "; vnx::write(_out, hop_count);
	_out << ", \"src_mac\": "; vnx::write(_out, src_mac);
	_out << ", \"dst_mac\": "; vnx::write(_out, dst_mac);
	_out << ", \"flow_code\": "; vnx::write(_out, flow_code);
	_out << "}";
}

void FlowMessage::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object FlowMessage::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.FlowMessage";
	_object["stream"] = stream;
	_object["flags"] = flags;
	_object["hop_count"] = hop_count;
	_object["src_mac"] = src_mac;
	_object["dst_mac"] = dst_mac;
	_object["flow_code"] = flow_code;
	return _object;
}

void FlowMessage::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "dst_mac") {
			_entry.second.to(dst_mac);
		} else if(_entry.first == "flags") {
			_entry.second.to(flags);
		} else if(_entry.first == "flow_code") {
			_entry.second.to(flow_code);
		} else if(_entry.first == "hop_count") {
			_entry.second.to(hop_count);
		} else if(_entry.first == "src_mac") {
			_entry.second.to(src_mac);
		} else if(_entry.first == "stream") {
			_entry.second.to(stream);
		}
	}
}

vnx::Variant FlowMessage::get_field(const std::string& _name) const {
	if(_name == "stream") {
		return vnx::Variant(stream);
	}
	if(_name == "flags") {
		return vnx::Variant(flags);
	}
	if(_name == "hop_count") {
		return vnx::Variant(hop_count);
	}
	if(_name == "src_mac") {
		return vnx::Variant(src_mac);
	}
	if(_name == "dst_mac") {
		return vnx::Variant(dst_mac);
	}
	if(_name == "flow_code") {
		return vnx::Variant(flow_code);
	}
	return vnx::Variant();
}

void FlowMessage::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "stream") {
		_value.to(stream);
	} else if(_name == "flags") {
		_value.to(flags);
	} else if(_name == "hop_count") {
		_value.to(hop_count);
	} else if(_name == "src_mac") {
		_value.to(src_mac);
	} else if(_name == "dst_mac") {
		_value.to(dst_mac);
	} else if(_name == "flow_code") {
		_value.to(flow_code);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const FlowMessage& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, FlowMessage& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* FlowMessage::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> FlowMessage::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.FlowMessage";
	type_code->type_hash = vnx::Hash64(0x496b887fb39119c2ull);
	type_code->code_hash = vnx::Hash64(0x6a4eaa76764b3c3bull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::vnx::FlowMessage);
	type_code->parents.resize(1);
	type_code->parents[0] = ::vnx::Message::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<FlowMessage>(); };
	type_code->fields.resize(6);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "stream";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 2;
		field.name = "flags";
		field.code = {2};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 2;
		field.name = "hop_count";
		field.code = {2};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "src_mac";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "dst_mac";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 2;
		field.name = "flow_code";
		field.code = {2};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::FlowMessage& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.flags, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.hop_count, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.flow_code, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.stream, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.src_mac, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.dst_mac, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::FlowMessage& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_FlowMessage;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::FlowMessage>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(6);
	vnx::write_value(_buf + 0, value.flags);
	vnx::write_value(_buf + 2, value.hop_count);
	vnx::write_value(_buf + 4, value.flow_code);
	vnx::write(out, value.stream, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.src_mac, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.dst_mac, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::vnx::FlowMessage& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::FlowMessage& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::FlowMessage& value) {
	value.accept(visitor);
}

} // vnx
