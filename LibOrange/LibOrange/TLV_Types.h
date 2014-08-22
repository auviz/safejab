/*
 *  TLV_Types.h
 *  TalkToOscar
 *
 *  Created by Alex Nichol on 3/23/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#define TLV_MULTICONN_FLAGS 74
#define TLV_FEEDBAG_RIGHTS_QUERY_TAGS_FLAGS 11

// OSERVICE_RESPONSE_TAGS
#define TLV_GROUP_ID 13
#define TLV_RECONNECT_HERE 5
#define TLV_LOGIN_COOKIE 6
#define TLV_SSL_CERTNAME 141
#define TLV_SSL_STATE 142

// used in an ICBM message
#define TLV_ICBM__TAGS_IM_DATA 2
#define TLV_ICBM__TAGS_REQUEST_HOST_ACK 3
#define TLV_ICBM__TAGS_AUTO_RESPONSE 4
#define TLV_ICBM__TAGS_STORE 6
#define TLV_ICBM__IM_DATA_TAGS_IM_CAPABILITIES 0x0501
#define TLV_ICBM__IM_DATA_TAGS_IM_TEXT 0x0101

// FEEDBAG_RIGHTS_REPLY
#define TLV_FEEDBAG_RIGHTS_MAX_ITEM_ATTRS 3
#define TLV_FEEDBAG_RIGHTS_MAX_CLIENT_ITEMS 5
#define TLV_FEEDBAG_RIGHTS_MAX_ITEM_NAME_LEN 6
#define TLV_FEEDBAG_RIGHTS_MAX_RECENT_BUDDIES 7
#define TLV_FEEDBAG_RIGHTS_MAX_BUDDIES_PER_GROUP 12
#define TLV_FEEDBAG_RIGHTS_MAX_MEGA_BOTS 13
#define TLV_FEEDBAG_RIGHTS_MAX_SMART_GROUPS 14

#define TLV_BUDDY__RIGHTS_QUERY_TAGS_FLAGS 5

#define TLV_NICK_FLAGS 1
#define TLV_BART_INFO 29
#define TLV_CAPS 13
#define TLV_CAPABILITIES 5

#define TLV_RECENT_BUDDY 106

#define TLV_IDLE_TIME 4

#define TLV_UNAVAILABLE_DATA 4

#define TLV_ERROR_TEXT 27

#define TLV_PD_MODE 202
#define TLV_PD_MASK 203
#define TLV_PD_FLAGS 204

// Rendezvous Tags
#define TLV_RV_DATA 5
#define TLV_RV_CHANNEL 1
#define TLV_RV_IP_ADDR 2
#define TLV_RV_PROPOSER_IP_ADDR 3
#define TLV_RV_VERIFIED_IP_ADDR 4
#define TLV_RV_PORT 5
#define TLV_RV_DOWNLOAD_URL 6
#define TLV_RV_VERIFIED_DOWNLOAD_URL 8
#define TLV_RV_SEQUENCE_NUM 10
#define TLV_RV_CANCEL_REASON 11
#define TLV_RV_INVITATION 12
#define TLV_RV_INVITE_MINE_CHARSET 13
#define TLV_RV_INVITE_MIME_LANG 14
#define TLV_RV_REQUEST_HOST_CHECK 15
#define TLV_RV_REQUEST_USE_ARS 16
#define TLV_RV_REQUEST_SECURE 17
#define TLV_RV_MAX_PROTOCOL_VERSION 18
#define TLV_RV_MIN_PROTOCOL_VERSION 19
#define TLV_RV_COUNTER_REASON 20
#define TLV_RV_INVITE_MIME_TYPE 21
#define TLV_RV_IP_ADDR_XOR 22
#define TLV_RV_PORT_XOR 23
#define TLV_RV_ADDR_LIST 24
#define TLV_RV_SESSION_ID 25
#define TLV_RV_ROLLOVER_ID 26
#define TLV_RV_SERVICE_DATA 10001
#define TLV_RV_FILENAME_ENCODING 10002
