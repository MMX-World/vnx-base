
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ProxyInterface_enable_tunnel_HXX_
#define INCLUDE_vnx_ProxyInterface_enable_tunnel_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Value.h>


namespace vnx {

class ProxyInterface_enable_tunnel : public ::vnx::Value {
public:
	
	::vnx::Hash64 tunnel_addr;
	int32_t max_queue_ms = 0;
	int32_t max_queue_size = 0;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x205fdc566e482078ull;
	
	ProxyInterface_enable_tunnel() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<ProxyInterface_enable_tunnel> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const ProxyInterface_enable_tunnel& _value);
	friend std::istream& operator>>(std::istream& _in, ProxyInterface_enable_tunnel& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void ProxyInterface_enable_tunnel::accept_generic(T& _visitor) const {
	_visitor.template type_begin<ProxyInterface_enable_tunnel>(3);
	_visitor.type_field("tunnel_addr", 0); _visitor.accept(tunnel_addr);
	_visitor.type_field("max_queue_ms", 1); _visitor.accept(max_queue_ms);
	_visitor.type_field("max_queue_size", 2); _visitor.accept(max_queue_size);
	_visitor.template type_end<ProxyInterface_enable_tunnel>(3);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_ProxyInterface_enable_tunnel_HXX_
