
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_OverflowException_HXX_
#define INCLUDE_vnx_OverflowException_HXX_

#include <vnx/package.hxx>
#include <vnx/Exception.hxx>
#include <vnx/Hash64.hpp>


namespace vnx {

class OverflowException : public ::vnx::Exception {
public:
	
	::vnx::Hash64 dst_mac;
	
	typedef ::vnx::Exception Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xba120fc8b6c0e004ull;
	
	OverflowException() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<OverflowException> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const OverflowException& _value);
	friend std::istream& operator>>(std::istream& _in, OverflowException& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void OverflowException::accept_generic(T& _visitor) const {
	_visitor.template type_begin<OverflowException>(2);
	_visitor.type_field("what", 0); _visitor.accept(what);
	_visitor.type_field("dst_mac", 1); _visitor.accept(dst_mac);
	_visitor.template type_end<OverflowException>(2);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_OverflowException_HXX_
