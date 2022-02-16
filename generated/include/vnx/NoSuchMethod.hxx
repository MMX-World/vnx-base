
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_NoSuchMethod_HXX_
#define INCLUDE_vnx_NoSuchMethod_HXX_

#include <vnx/package.hxx>
#include <vnx/NoSuchService.hxx>


namespace vnx {

class VNX_EXPORT NoSuchMethod : public ::vnx::NoSuchService {
public:
	
	std::string method;
	
	typedef ::vnx::NoSuchService Super;
	
	VNX_EXPORT static const vnx::Hash64 VNX_TYPE_HASH;
	VNX_EXPORT static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x6e811245e86c2629ull;
	
	NoSuchMethod() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<NoSuchMethod> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const NoSuchMethod& _value);
	friend std::istream& operator>>(std::istream& _in, NoSuchMethod& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void NoSuchMethod::accept_generic(T& _visitor) const {
	_visitor.template type_begin<NoSuchMethod>(3);
	_visitor.type_field("what", 0); _visitor.accept(what);
	_visitor.type_field("dst_mac", 1); _visitor.accept(dst_mac);
	_visitor.type_field("method", 2); _visitor.accept(method);
	_visitor.template type_end<NoSuchMethod>(3);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_NoSuchMethod_HXX_
