
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_record_topic_info_t_HXX_
#define INCLUDE_vnx_record_topic_info_t_HXX_

#include <vnx/Type.h>
#include <vnx/package.hxx>


namespace vnx {

struct record_topic_info_t {
	
	
	std::string name;
	int64_t num_bytes = 0;
	int64_t num_samples = 0;
	int64_t num_samples_lost = 0;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x39c9255966eebda0ull;
	
	record_topic_info_t() {}
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	static std::shared_ptr<record_topic_info_t> create();
	std::shared_ptr<record_topic_info_t> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const record_topic_info_t& _value);
	friend std::istream& operator>>(std::istream& _in, record_topic_info_t& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void record_topic_info_t::accept_generic(T& _visitor) const {
	_visitor.template type_begin<record_topic_info_t>(4);
	_visitor.type_field("name", 0); _visitor.accept(name);
	_visitor.type_field("num_bytes", 1); _visitor.accept(num_bytes);
	_visitor.type_field("num_samples", 2); _visitor.accept(num_samples);
	_visitor.type_field("num_samples_lost", 3); _visitor.accept(num_samples_lost);
	_visitor.template type_end<record_topic_info_t>(4);
}


} // namespace vnx


namespace vnx {

template<>
struct is_equivalent<::vnx::record_topic_info_t> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_vnx_record_topic_info_t_HXX_
