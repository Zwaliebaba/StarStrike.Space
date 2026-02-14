//////////////////////////////////////////////////////////////////////////////
//
// SENTMSG.MSG - error constants and error strings for SENTINAL
//
// Copyright (C) 1998 Microsoft Corporation
// All Rights Reserved.
//
//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: SRVDBG_ASSERT
//
// MessageText:
//
// Sentinal Assert from %1:%n%n%2%n%3%n%n%4%5
//
#define SRVDBG_ASSERT                    0x00000000L

//
// MessageId: SRVDBG_EXCEPTION
//
// MessageText:
//
// Sentinal Exception from %1:%n%n%2%n%n%3%4
//
#define SRVDBG_EXCEPTION                 0x00000001L

//
// MessageId: SRVDBG_ABORT
//
// MessageText:
//
// Sentinal Abort from %1:%n%n%2%n%n%3%4
//
#define SRVDBG_ABORT                     0x00000002L

//
// MessageId: SRVDBG_NOTIFYABORT
//
// MessageText:
//
// Sentinal NotifyAbort from %1:%n%n%2%n%n%3%4
//
#define SRVDBG_NOTIFYABORT               0x00000003L

//
// MessageId: SRVDBG_ERROR
//
// MessageText:
//
// Sentinal Error from %1:%n%n%2%n%3%n%n%4%5
//
#define SRVDBG_ERROR                     0x000003E8L

//
// MessageId: SRVDBG_WARNING
//
// MessageText:
//
// Sentinal Warning from %1:%n%n%2%n%3%n%n%4%5
//
#define SRVDBG_WARNING                   0x000007D0L

//
// MessageId: SRVDBG_INFO
//
// MessageText:
//
// Sentinal Information from %1:%n%n%2%n%3%n%n%4%5
//
#define SRVDBG_INFO                      0x00000BB8L

//
// MessageId: SERVICE_ERROR
//
// MessageText:
//
// %1%n%n%2%n%3
//
#define SERVICE_ERROR                    0xC0000FA0L

//
// MessageId: SERVICE_DOWN
//
// MessageText:
//
// %1%n%n%2%n%3
//
#define SERVICE_DOWN                     0xC0000FA1L

//
// MessageId: SERVICE_RESTART
//
// MessageText:
//
// %1%n%n%2%n%3
//
#define SERVICE_RESTART                  0xC0000FA2L

//
// MessageId: SERVICE_WARNING
//
// MessageText:
//
// %1%n%n%2%n%3
//
#define SERVICE_WARNING                  0x80000FA3L

//
// MessageId: SERVICE_INFO
//
// MessageText:
//
// %1%n%n%2%n%3
//
#define SERVICE_INFO                     0x40000FA4L

//
// MessageId: SENTINAL_INTERNETOPENURL
//
// MessageText:
//
// Sentinal Information from %1:%n%2%nInternetOpenUrl failed with %3
//
#define SENTINAL_INTERNETOPENURL         0xC0002329L

//
// MessageId: SENTINAL_INTERNETGETLASTRESPONSEINFO
//
// MessageText:
//
// Sentinal Information from %1:%n%2%nInternetGetLastResponseInfo failed with %3
//
#define SENTINAL_INTERNETGETLASTRESPONSEINFO 0xC000232AL

//
// MessageId: SENTINAL_GENERAL_FAILURE
//
// MessageText:
//
// Sentinal Information from %1:%n%nError: %2
//
#define SENTINAL_GENERAL_FAILURE         0xC000232BL

//
// MessageId: SENTINAL_MONITORED_SERVER_DOWN
//
// MessageText:
//
// Sentinal Information from %1:%n%nMonitored Server Failure%nServer: %3%nError: %4
//
#define SENTINAL_MONITORED_SERVER_DOWN   0xC000232CL

//
// MessageId: 0xC0002733L (No symbolic name defined)
//
// MessageText:
//
// WSAEWOULDBLOCK
//


