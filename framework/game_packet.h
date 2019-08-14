/*
 * game_packet.h
 *
 *  Created on: 2012-4-1
 *      Author: gxl
 */

#ifndef GAME_PACKET_H_
#define GAME_PACKET_H_

#include <sstream>
#include <exception>
#include "packet.h"
#include "aliased_buf.h"
#include "battle_up.pb.h"

struct ss_head
{
    uint32_t length ;  // pay load length
} __attribute__((packed)) ;

#define MAX_PACKET_SIZE 655350

// PT => packet_type , func_id in proto
// BT = Body type , battle_up_msg | battle_down_msg
template<int32_t PT,typename BT>
class ss_packet : public xlnet::packet
{
public:
    enum{ packet_type = PT ,} ;
    typedef BT body_type ;

public:
	  ss_packet() {}
    virtual int get_type() { return packet_type ; } ;

    // data => buffer start
    // size => buffer size
    // return size to send, include header
    virtual int encode(char* data, int size)
    {
        if(size < (int)sizeof(ss_head) ) return -1 ;
        aliased_buf sbuf(data + sizeof(ss_head), size - sizeof(ss_head)) ;
        std::ostream output(&sbuf) ;
        try
        {
            if(!body.SerializeToOstream(&output) || output.tellp() < 0 ) return -1 ;
        }
        catch(const std::exception& ex)
        {
            return -2 ;
        }
        
        uint32_t payload_size = output.tellp();
        size = sizeof(ss_head) + payload_size ;
        if(size >= MAX_PACKET_SIZE ) return -3 ;
        
        ss_head* head = (ss_head*)data ;
        head->length = hton_int32(payload_size) ;
        return size ;

    }

    // data => buffer data start
    // size => recv size
    // return -> pay size
    virtual int decode(const char* data,int size)
    {
        if(size < (int)sizeof(ss_head) ) return -1 ;
        ss_head* head = (ss_head*)data ;

        uint32_t pay_size = ntoh_int32(head->length) ;
        
        aliased_buf sbuf((char*)data +sizeof(ss_head), pay_size) ;

        std::istream input(&sbuf) ;
        try
        {
            if(!body.ParseFromIstream(&input) ) return -2 ;
        }
        catch(const std::exception& ex)
        {
            return -3 ;
        }
        
        return pay_size ;
    }

    virtual int encode_size()
    {
        int need_size = (int)sizeof(ss_head) + body.ByteSize() ;
        if( need_size >= MAX_PACKET_SIZE) return -1 ;
        return need_size ;
    }

    virtual int decode_size(const char* data,int size)
    {
        ss_head* tmp = (ss_head*)data ;
        return  ntoh_int32(tmp->length) ;

    }

public:
    body_type body ;
};


class null_body
{
public:
    static bool  ParseFromIstream(std::istream* input) { return true ; } ;
    static bool  SerializeToOstream(std::ostream* output) { return true ; } ;
    static int ByteSize() { return 0 ; } ;
    static int encode(char* data,int size) { return 0 ;} ;
    static int decode(const char* data,int size) { return 0 ; } ;
    static int encode_size() {return 0 ; } ;
}  ;


#endif /* GAME_PACKET_H_ */
