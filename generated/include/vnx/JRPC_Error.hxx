
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_JRPC_Error_HXX_
#define INCLUDE_vnx_JRPC_Error_HXX_

#include <vnx/package.hxx>
#include <vnx/Exception.hxx>
#include <vnx/Value.h>


namespace vnx {

class VNX_EXPORT JRPC_Error : public ::vnx::Value {
public:
	static const int32_t PARSE_ERROR = -32700;
	static const int32_t INVALID_REQUEST = -32600;
	static const int32_t METHOD_NOT_FOUND = -32601;
	static const int32_t INVALID_PARAMS = -32602;
	static const int32_t INTERNAL_ERROR = -32603;
	static const int32_t PERMISSION_DENIED = 403;
	static const int32_t EXCEPTION = 500;
	
	int32_t code = 0;
	std::string message;
	std::shared_ptr<const ::vnx::Exception> data;
	
	typedef ::vnx::Value Super;
	
	VNX_EXPORT static const vnx::Hash64 VNX_TYPE_HASH;
	VNX_EXPORT static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x4da8afba21c28c82ull;
	
	JRPC_Error() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<JRPC_Error> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const JRPC_Error& _value);
	friend std::istream& operator>>(std::istream& _in, JRPC_Error& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void JRPC_Error::accept_generic(T& _visitor) const {
	_visitor.template type_begin<JRPC_Error>(3);
	_visitor.type_field("code", 0); _visitor.accept(code);
	_visitor.type_field("message", 1); _visitor.accept(message);
	_visitor.type_field("data", 2); _visitor.accept(data);
	_visitor.template type_end<JRPC_Error>(3);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_JRPC_Error_HXX_
