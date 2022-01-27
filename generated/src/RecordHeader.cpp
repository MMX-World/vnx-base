
// AUTO GENERATED by vnxcppcodegen

#include <vnx/package.hxx>
#include <vnx/RecordHeader.hxx>
#include <vnx/Value.h>
#include <vnx/record_topic_info_t.hxx>

#include <vnx/vnx.h>


namespace vnx {


const vnx::Hash64 RecordHeader::VNX_TYPE_HASH(0x38eef92562acfa98ull);
const vnx::Hash64 RecordHeader::VNX_CODE_HASH(0xaed25c4baeadcd3ull);

vnx::Hash64 RecordHeader::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string RecordHeader::get_type_name() const {
	return "vnx.RecordHeader";
}

const vnx::TypeCode* RecordHeader::get_type_code() const {
	return vnx::vnx_native_type_code_RecordHeader;
}

std::shared_ptr<RecordHeader> RecordHeader::create() {
	return std::make_shared<RecordHeader>();
}

std::shared_ptr<vnx::Value> RecordHeader::clone() const {
	return std::make_shared<RecordHeader>(*this);
}

void RecordHeader::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void RecordHeader::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void RecordHeader::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::vnx_native_type_code_RecordHeader;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, filename);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, header_size);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, block_size);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, begin_time);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, end_time);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, num_bytes);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, num_samples);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, num_samples_lost);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, markers);
	_visitor.type_field(_type_code->fields[9], 9); vnx::accept(_visitor, type_code_positions);
	_visitor.type_field(_type_code->fields[10], 10); vnx::accept(_visitor, topics);
	_visitor.type_end(*_type_code);
}

void RecordHeader::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.RecordHeader\"";
	_out << ", \"filename\": "; vnx::write(_out, filename);
	_out << ", \"header_size\": "; vnx::write(_out, header_size);
	_out << ", \"block_size\": "; vnx::write(_out, block_size);
	_out << ", \"begin_time\": "; vnx::write(_out, begin_time);
	_out << ", \"end_time\": "; vnx::write(_out, end_time);
	_out << ", \"num_bytes\": "; vnx::write(_out, num_bytes);
	_out << ", \"num_samples\": "; vnx::write(_out, num_samples);
	_out << ", \"num_samples_lost\": "; vnx::write(_out, num_samples_lost);
	_out << ", \"markers\": "; vnx::write(_out, markers);
	_out << ", \"type_code_positions\": "; vnx::write(_out, type_code_positions);
	_out << ", \"topics\": "; vnx::write(_out, topics);
	_out << "}";
}

void RecordHeader::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object RecordHeader::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.RecordHeader";
	_object["filename"] = filename;
	_object["header_size"] = header_size;
	_object["block_size"] = block_size;
	_object["begin_time"] = begin_time;
	_object["end_time"] = end_time;
	_object["num_bytes"] = num_bytes;
	_object["num_samples"] = num_samples;
	_object["num_samples_lost"] = num_samples_lost;
	_object["markers"] = markers;
	_object["type_code_positions"] = type_code_positions;
	_object["topics"] = topics;
	return _object;
}

void RecordHeader::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "begin_time") {
			_entry.second.to(begin_time);
		} else if(_entry.first == "block_size") {
			_entry.second.to(block_size);
		} else if(_entry.first == "end_time") {
			_entry.second.to(end_time);
		} else if(_entry.first == "filename") {
			_entry.second.to(filename);
		} else if(_entry.first == "header_size") {
			_entry.second.to(header_size);
		} else if(_entry.first == "markers") {
			_entry.second.to(markers);
		} else if(_entry.first == "num_bytes") {
			_entry.second.to(num_bytes);
		} else if(_entry.first == "num_samples") {
			_entry.second.to(num_samples);
		} else if(_entry.first == "num_samples_lost") {
			_entry.second.to(num_samples_lost);
		} else if(_entry.first == "topics") {
			_entry.second.to(topics);
		} else if(_entry.first == "type_code_positions") {
			_entry.second.to(type_code_positions);
		} else if(_entry.first == "type_codes") {
			_entry.second.to(type_code_positions);
		}
	}
}

vnx::Variant RecordHeader::get_field(const std::string& _name) const {
	if(_name == "filename") {
		return vnx::Variant(filename);
	}
	if(_name == "header_size") {
		return vnx::Variant(header_size);
	}
	if(_name == "block_size") {
		return vnx::Variant(block_size);
	}
	if(_name == "begin_time") {
		return vnx::Variant(begin_time);
	}
	if(_name == "end_time") {
		return vnx::Variant(end_time);
	}
	if(_name == "num_bytes") {
		return vnx::Variant(num_bytes);
	}
	if(_name == "num_samples") {
		return vnx::Variant(num_samples);
	}
	if(_name == "num_samples_lost") {
		return vnx::Variant(num_samples_lost);
	}
	if(_name == "markers") {
		return vnx::Variant(markers);
	}
	if(_name == "type_code_positions") {
		return vnx::Variant(type_code_positions);
	}
	if(_name == "topics") {
		return vnx::Variant(topics);
	}
	return vnx::Variant();
}

void RecordHeader::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "filename") {
		_value.to(filename);
	} else if(_name == "header_size") {
		_value.to(header_size);
	} else if(_name == "block_size") {
		_value.to(block_size);
	} else if(_name == "begin_time") {
		_value.to(begin_time);
	} else if(_name == "end_time") {
		_value.to(end_time);
	} else if(_name == "num_bytes") {
		_value.to(num_bytes);
	} else if(_name == "num_samples") {
		_value.to(num_samples);
	} else if(_name == "num_samples_lost") {
		_value.to(num_samples_lost);
	} else if(_name == "markers") {
		_value.to(markers);
	} else if(_name == "type_code_positions") {
		_value.to(type_code_positions);
	} else if(_name == "topics") {
		_value.to(topics);
	}}

/// \private
std::ostream& operator<<(std::ostream& _out, const RecordHeader& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, RecordHeader& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* RecordHeader::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> RecordHeader::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.RecordHeader";
	type_code->type_hash = vnx::Hash64(0x38eef92562acfa98ull);
	type_code->code_hash = vnx::Hash64(0xaed25c4baeadcd3ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::vnx::RecordHeader);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<RecordHeader>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::vnx::record_topic_info_t::static_get_type_code();
	type_code->fields.resize(11);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "filename";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 4;
		field.name = "header_size";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 4;
		field.name = "block_size";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 8;
		field.name = "begin_time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 8;
		field.name = "end_time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 8;
		field.name = "num_bytes";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[6];
		field.data_size = 8;
		field.name = "num_samples";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[7];
		field.data_size = 8;
		field.name = "num_samples_lost";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[8];
		field.is_extended = true;
		field.name = "markers";
		field.code = {12, 8};
	}
	{
		auto& field = type_code->fields[9];
		field.is_extended = true;
		field.name = "type_code_positions";
		field.code = {12, 8};
	}
	{
		auto& field = type_code->fields[10];
		field.is_extended = true;
		field.name = "topics";
		field.code = {12, 19, 0};
	}
	type_code->alias_map["type_codes"] = "type_code_positions";
	type_code->build();
	return type_code;
}


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::RecordHeader& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.header_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.block_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.begin_time, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.end_time, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.num_bytes, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[6]) {
			vnx::read_value(_buf + _field->offset, value.num_samples, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[7]) {
			vnx::read_value(_buf + _field->offset, value.num_samples_lost, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.filename, type_code, _field->code.data()); break;
			case 8: vnx::read(in, value.markers, type_code, _field->code.data()); break;
			case 9: vnx::read(in, value.type_code_positions, type_code, _field->code.data()); break;
			case 10: vnx::read(in, value.topics, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::RecordHeader& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::vnx_native_type_code_RecordHeader;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::RecordHeader>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(48);
	vnx::write_value(_buf + 0, value.header_size);
	vnx::write_value(_buf + 4, value.block_size);
	vnx::write_value(_buf + 8, value.begin_time);
	vnx::write_value(_buf + 16, value.end_time);
	vnx::write_value(_buf + 24, value.num_bytes);
	vnx::write_value(_buf + 32, value.num_samples);
	vnx::write_value(_buf + 40, value.num_samples_lost);
	vnx::write(out, value.filename, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.markers, type_code, type_code->fields[8].code.data());
	vnx::write(out, value.type_code_positions, type_code, type_code->fields[9].code.data());
	vnx::write(out, value.topics, type_code, type_code->fields[10].code.data());
}

void read(std::istream& in, ::vnx::RecordHeader& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::RecordHeader& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::RecordHeader& value) {
	value.accept(visitor);
}

} // vnx
