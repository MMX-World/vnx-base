
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_Return_HXX_
#define INCLUDE_vnx_Return_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Message.hxx>
#include <vnx/Request.hxx>
#include <vnx/Value.h>


namespace vnx {

class Return : public ::vnx::Message {
public:
	
	uint64_t request_id = 0;
	::vnx::Hash64 src_mac;
	std::shared_ptr<const ::vnx::Value> value;
	
	typedef ::vnx::Message Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x941aec28b3f42d7dull;
	
	Return() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<const ::vnx::Return> create_overflow_return(std::shared_ptr<const ::vnx::Request> request = nullptr);
	static std::shared_ptr<const ::vnx::Return> create_no_such_service_return(std::shared_ptr<const ::vnx::Request> request = nullptr);
	static std::shared_ptr<const ::vnx::Return> create_permission_denied_return(std::shared_ptr<const ::vnx::Request> request = nullptr);
	
	static std::shared_ptr<Return> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const Return& _value);
	friend std::istream& operator>>(std::istream& _in, Return& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void Return::accept_generic(T& _visitor) const {
	_visitor.template type_begin<Return>(6);
	_visitor.type_field("stream", 0); _visitor.accept(stream);
	_visitor.type_field("flags", 1); _visitor.accept(flags);
	_visitor.type_field("hop_count", 2); _visitor.accept(hop_count);
	_visitor.type_field("request_id", 3); _visitor.accept(request_id);
	_visitor.type_field("src_mac", 4); _visitor.accept(src_mac);
	_visitor.type_field("value", 5); _visitor.accept(value);
	_visitor.template type_end<Return>(6);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_Return_HXX_
