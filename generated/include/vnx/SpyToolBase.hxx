
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_SpyToolBase_HXX_
#define INCLUDE_vnx_SpyToolBase_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Module.h>
#include <vnx/TopicInfoList.hxx>


namespace vnx {

class SpyToolBase : public ::vnx::Module {
public:
	
	std::string proxy_name;
	std::string topic_expr;
	vnx::bool_t exact_match = true;
	vnx::bool_t only_once = false;
	vnx::bool_t header_only = false;
	vnx::bool_t pretty_print = true;
	vnx::bool_t show_resend = false;
	int32_t max_list_size = 1000;
	int32_t max_queue_ms = 100;
	::vnx::Hash64 receive_tunnel;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x908abf18434bf596ull;
	
	SpyToolBase(const std::string& _vnx_name);
	
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
	
	friend std::ostream& operator<<(std::ostream& _out, const SpyToolBase& _value);
	friend std::istream& operator>>(std::istream& _in, SpyToolBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	using Super::handle;
	
	virtual void handle(std::shared_ptr<const ::vnx::TopicInfoList> _value) {}
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};

template<typename T>
void SpyToolBase::accept_generic(T& _visitor) const {
	_visitor.template type_begin<SpyToolBase>(10);
	_visitor.type_field("proxy_name", 0); _visitor.accept(proxy_name);
	_visitor.type_field("topic_expr", 1); _visitor.accept(topic_expr);
	_visitor.type_field("exact_match", 2); _visitor.accept(exact_match);
	_visitor.type_field("only_once", 3); _visitor.accept(only_once);
	_visitor.type_field("header_only", 4); _visitor.accept(header_only);
	_visitor.type_field("pretty_print", 5); _visitor.accept(pretty_print);
	_visitor.type_field("show_resend", 6); _visitor.accept(show_resend);
	_visitor.type_field("max_list_size", 7); _visitor.accept(max_list_size);
	_visitor.type_field("max_queue_ms", 8); _visitor.accept(max_queue_ms);
	_visitor.type_field("receive_tunnel", 9); _visitor.accept(receive_tunnel);
	_visitor.template type_end<SpyToolBase>(10);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_SpyToolBase_HXX_
