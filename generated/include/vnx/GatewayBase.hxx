
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_GatewayBase_HXX_
#define INCLUDE_vnx_GatewayBase_HXX_

#include <vnx/package.hxx>
#include <vnx/Module.h>
#include <vnx/Request.hxx>


namespace vnx {

class GatewayBase : public ::vnx::Module {
public:
	
	int32_t max_queue_ms = 100;
	int32_t max_queue_size = 0;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xe3980e0cfa2a352aull;
	
	GatewayBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const GatewayBase& _value);
	friend std::istream& operator>>(std::istream& _in, GatewayBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	using Super::handle;
	
	virtual void forward(std::shared_ptr<const ::vnx::Request> request) = 0;
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};

template<typename T>
void GatewayBase::accept_generic(T& _visitor) const {
	_visitor.template type_begin<GatewayBase>(2);
	_visitor.type_field("max_queue_ms", 0); _visitor.accept(max_queue_ms);
	_visitor.type_field("max_queue_size", 1); _visitor.accept(max_queue_size);
	_visitor.template type_end<GatewayBase>(2);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_GatewayBase_HXX_
