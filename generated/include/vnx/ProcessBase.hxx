
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ProcessBase_HXX_
#define INCLUDE_vnx_ProcessBase_HXX_

#include <vnx/package.hxx>
#include <vnx/LogMsg.hxx>
#include <vnx/Module.h>
#include <vnx/ModuleInfo.hxx>
#include <vnx/ProcessInfo.hxx>
#include <vnx/TimeControl.hxx>
#include <vnx/TimeSync.hxx>
#include <vnx/TopicInfo.hxx>
#include <vnx/Variant.hpp>


namespace vnx {

class VNX_EXPORT ProcessBase : public ::vnx::Module {
public:
	
	int32_t log_file_level = 2;
	int32_t update_interval_ms = 500;
	uint32_t log_history_size = 10000;
	uint32_t error_history_size = 100;
	std::string log_file_name;
	std::string log_file_path;
	std::string log_file_name_suffix = "_%Y_%m_%d.txt";
	std::string log_file_entry_prefix = "%Y-%m-%d %H:%M:%S ";
	vnx::bool_t log_file_auto_restart = true;
	
	typedef ::vnx::Module Super;
	
	VNX_EXPORT static const vnx::Hash64 VNX_TYPE_HASH;
	VNX_EXPORT static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x149355fa43209cb1ull;
	
	ProcessBase(const std::string& _vnx_name);
	
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
	
	friend std::ostream& operator<<(std::ostream& _out, const ProcessBase& _value);
	friend std::istream& operator>>(std::istream& _in, ProcessBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	using Super::handle;
	
	virtual std::string get_name() const = 0;
	virtual ::vnx::TimeSync get_sync_time() const = 0;
	virtual std::vector<::vnx::TopicInfo> get_topic_info(const vnx::bool_t& include_domains) const = 0;
	virtual std::vector<::vnx::ModuleInfo> get_module_info() const = 0;
	virtual ::vnx::ProcessInfo get_process_info() const = 0;
	virtual ::vnx::Variant get_global_config(const std::string& key) const = 0;
	virtual void set_global_config(const std::string& key, const ::vnx::Variant& value) = 0;
	virtual void reload_config() = 0;
	virtual void pause_log() = 0;
	virtual void resume_log() = 0;
	virtual void set_debug(const int32_t& level) = 0;
	virtual void show_error_log() = 0;
	virtual void grep_log(const std::string& expr) = 0;
	virtual void journal_log(const std::string& expr) = 0;
	virtual void ungrep_log() = 0;
	virtual void trigger_shutdown() = 0;
	virtual void self_test_all_async(const vnx::request_id_t& _request_id) = 0;
	void self_test_all_async_return(const vnx::request_id_t& _request_id) const;
	virtual void handle(std::shared_ptr<const ::vnx::LogMsg> _value) {}
	virtual void handle(std::shared_ptr<const ::vnx::TimeControl> _value) {}
	virtual void handle(std::shared_ptr<const ::vnx::TimeSync> _value) {}
	virtual void handle(std::shared_ptr<const ::vnx::ModuleInfo> _value) {}
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};

template<typename T>
void ProcessBase::accept_generic(T& _visitor) const {
	_visitor.template type_begin<ProcessBase>(9);
	_visitor.type_field("log_file_level", 0); _visitor.accept(log_file_level);
	_visitor.type_field("update_interval_ms", 1); _visitor.accept(update_interval_ms);
	_visitor.type_field("log_history_size", 2); _visitor.accept(log_history_size);
	_visitor.type_field("error_history_size", 3); _visitor.accept(error_history_size);
	_visitor.type_field("log_file_name", 4); _visitor.accept(log_file_name);
	_visitor.type_field("log_file_path", 5); _visitor.accept(log_file_path);
	_visitor.type_field("log_file_name_suffix", 6); _visitor.accept(log_file_name_suffix);
	_visitor.type_field("log_file_entry_prefix", 7); _visitor.accept(log_file_entry_prefix);
	_visitor.type_field("log_file_auto_restart", 8); _visitor.accept(log_file_auto_restart);
	_visitor.template type_end<ProcessBase>(9);
}


} // namespace vnx


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_ProcessBase_HXX_
