#ifndef _generate_h_server_mail 
#define _generate_h_server_mail 
#include "sql_binder.h"
class server_mail : public sql_binder 
{
public:
    server_mail();
    void clear_dirty(){ memset(dirty,0,sizeof(dirty)); } ;
    bool is_dirty() const
    {
        for(int i=0;i<FIELD_COUNT;++i) {if(dirty[i]) return true;} ;
        return false ;
    } ;
    void load(const char** data);
    void load(const vector<string>& data);
    int sql_insert(char* buf,int size) const;
    int sql_replace(char* buf,int size) const;
    int sql_update(char* buf,int size) const;
    int sql_query(char* buf,int size) const;
    int sql_delete(char* buf,int size) const;
protected:
    int sql_key(char* buf,int size) const;
    int sql_data(char* buf,int size,bool check_dirty=true) const;
public:
    int32_t get_server_id() const { return server_id;} ; 
    void set_server_id(int32_t value) { if(server_id!= value){dirty[0] = 1; server_id = value;} } ; 
    int sql_server_id(char* buf,int size) const{return snprintf(buf,size,"server_id='%ld'",(int64_t)server_id);}

    int32_t get_server_mail_id() const { return server_mail_id;} ; 
    void set_server_mail_id(int32_t value) { if(server_mail_id!= value){dirty[1] = 1; server_mail_id = value;} } ; 
    int sql_server_mail_id(char* buf,int size) const{return snprintf(buf,size,"server_mail_id='%ld'",(int64_t)server_mail_id);}

    const string& get_server_mail_info() const { return server_mail_info;} ; 
    void set_server_mail_info(const string& value) { if(server_mail_info!= value){dirty[2] = 1; server_mail_info.assign(value);} }; 
    void set_server_mail_info(const char* value) { if(strcmp(server_mail_info.c_str(),value)!=0) {dirty[2] = 1; server_mail_info.assign(value);} }; 
    int sql_server_mail_info(char* buf,int size) const{return snprintf(buf,size,"server_mail_info='%s'",server_mail_info.c_str());}

private:
    //data member
    int32_t server_id ; 
    int32_t server_mail_id ; 
    string server_mail_info ; 
private:
    //dirty flag for update
    enum { FIELD_COUNT = 3 } ; 
    int8_t dirty[FIELD_COUNT] ; 
};
#endif
