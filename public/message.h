/*
 * message.h
 *
 *  Created on: 2012-4-1
 *      Author: lixingyi
 */

#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <sstream>

#include "game_packet.h"
#include "game_common.pb.h"
#include "game_client.pb.h"

using namespace protocols::common ;

enum
{
    CSMSG_INIT_CONNECTION_REQ = MSG_ACTION_INIT_CONNECTION << 2 | MSG_TYPE_REQUEST ,
    CSMSG_INIT_CONNECTION_REP = MSG_ACTION_INIT_CONNECTION << 2 | MSG_TYPE_RESPONSE ,


    CSMSG_HEARTBEAT_REQ = MSG_ACTION_HEARTBEAT << 2 | MSG_TYPE_REQUEST ,
    CSMSG_HEARTBEAT_REP = MSG_ACTION_HEARTBEAT << 2 | MSG_TYPE_RESPONSE ,
    CSMSG_HEARTBEAT_NOTIFY = MSG_ACTION_HEARTBEAT << 2 | MSG_TYPE_NOTIFY ,


    CSMSG_ACC_LOGIN_REQ = MSG_ACTION_ACC_LOGIN << 2 | MSG_TYPE_REQUEST ,
    CSMSG_ACC_LOGIN_REP = MSG_ACTION_ACC_LOGIN << 2 | MSG_TYPE_RESPONSE ,

    CSMSG_PLAYER_LOGIN_REQ = MSG_ACTION_PLAYER_LOGIN << 2  | MSG_TYPE_REQUEST ,
    CSMSG_PLAYER_LOGIN_REP = MSG_ACTION_PLAYER_LOGIN << 2 | MSG_TYPE_RESPONSE ,

    CSMSG_KICK_PLAYER_REQ = MSG_ACTION_KICK_PLAYER << 2 | MSG_TYPE_REQUEST,
    CSMSG_KICK_PLAYER_REP = MSG_ACTION_KICK_PLAYER << 2 | MSG_TYPE_RESPONSE ,
    CSMSG_KICK_PLAYER_NOTIFY = MSG_ACTION_KICK_PLAYER << 2 | MSG_TYPE_NOTIFY ,
};

enum
{
    //SSMSG_BROADCAST = MSG_MODULE_SERVER<< 12 | MSG_ACTION_BROADCAST << 2 | MSG_TYPE_NOTIFY ,
    //SSMSG_SYNC_POSITION =MSG_MODULE_SERVER<< 12 | MSG_ACTION_SYNC_POSITION << 2 | MSG_TYPE_NOTIFY ,

} ;

//typedef ss_packet<SSMSG_DATASATORE_REQ, DataStoreRequest> ss_datastore_request;

#endif
