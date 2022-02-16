
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_UnixEndpoint_HXX_
#define INCLUDE_vnx_UnixEndpoint_HXX_

#include <vnx/package.hxx>
#include <vnx/Endpoint.hxx>


namespace vnx {

class VNX_EXPORT UnixEndpoint : public ::vnx::Endpoint {
public:
	
	std::string domain_path;
	
	typedef ::vnx::Endpoint Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x8007f4ae5d6628e5ull;
	
	UnixEndpoint() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<const ::vnx::UnixEndpoint> create_ex(const std::string& domain_path = "");
	static std::shared_ptr<const ::vnx::UnixEndpoint> from_url(const std::string& url = "");
	virtual int32_t open() const override;
	virtual void close(const int32_t& socket = 0) const;
	virtual void bind(const int32_t& socket = 0) const override;
	virtual void connect(const int32_t& socket = 0) const override;
	virtual void listen(const int32_t& socket = 0) const override;
	virtual void set_options(const int32_t& socket = 0) const;
	virtual int32_t accept(const int32_t& socket = 0) const override;
	virtual std::string to_url() const override;
	
	static std::shared_ptr<UnixEndpoint> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const UnixEndpoint& _value);
	friend std::istream& operator>>(std::istream& _in, UnixEndpoint& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void UnixEndpoint::accept_generic(T& _visitor) const {
	_visitor.template type_begin<UnixEndpoint>(5);
	_visitor.type_field("send_buffer_size", 0); _visitor.accept(send_buffer_size);
	_visitor.type_field("receive_buffer_size", 1); _visitor.accept(receive_buffer_size);
	_visitor.type_field("listen_queue_size", 2); _visitor.accept(listen_queue_size);
	_visitor.type_field("non_blocking", 3); _visitor.accept(non_blocking);
	_visitor.type_field("domain_path", 4); _visitor.accept(domain_path);
	_visitor.template type_end<UnixEndpoint>(5);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_UnixEndpoint_HXX_
