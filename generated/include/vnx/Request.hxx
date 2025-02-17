
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_Request_HXX_
#define INCLUDE_vnx_Request_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Message.hxx>
#include <vnx/Value.h>


namespace vnx {

class Request : public ::vnx::Message {
public:
	
	::vnx::Hash64 src_mac;
	::vnx::Hash64 dst_mac;
	::vnx::Hash64 session;
	uint64_t request_id = 0;
	std::shared_ptr<const ::vnx::Value> method;
	
	typedef ::vnx::Message Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x2838ef2ae539a080ull;
	
	Request() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<Request> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const Request& _value);
	friend std::istream& operator>>(std::istream& _in, Request& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void Request::accept_generic(T& _visitor) const {
	_visitor.template type_begin<Request>(8);
	_visitor.type_field("stream", 0); _visitor.accept(stream);
	_visitor.type_field("flags", 1); _visitor.accept(flags);
	_visitor.type_field("hop_count", 2); _visitor.accept(hop_count);
	_visitor.type_field("src_mac", 3); _visitor.accept(src_mac);
	_visitor.type_field("dst_mac", 4); _visitor.accept(dst_mac);
	_visitor.type_field("session", 5); _visitor.accept(session);
	_visitor.type_field("request_id", 6); _visitor.accept(request_id);
	_visitor.type_field("method", 7); _visitor.accept(method);
	_visitor.template type_end<Request>(8);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_Request_HXX_
