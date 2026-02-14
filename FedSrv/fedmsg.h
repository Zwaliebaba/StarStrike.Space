// Comment Field
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
// Allegiance Assert from %1:%n%n%2%n%3%n%n%4%5
//
#define SRVDBG_ASSERT                    0x00000000L

//
// MessageId: SRVDBG_EXCEPTION
//
// MessageText:
//
// Allegiance Exception from %1:%n%n%2%n%n%3%4
//
#define SRVDBG_EXCEPTION                 0x00000001L

//
// MessageId: SRVDBG_ABORT
//
// MessageText:
//
// Allegiance Abort from %1:%n%n%2%n%n%3%4
//
#define SRVDBG_ABORT                     0x00000002L

//
// MessageId: SRVDBG_NOTIFYABORT
//
// MessageText:
//
// Allegiance NotifyAbort from %1:%n%n%2%n%n%3%4
//
#define SRVDBG_NOTIFYABORT               0x00000003L

//
// MessageId: SRVDBG_ERROR
//
// MessageText:
//
// Allegiance Error from %1:%n%n%2%n%3%n%n%4%5
//
#define SRVDBG_ERROR                     0x000003E8L

//
// MessageId: SRVDBG_WARNING
//
// MessageText:
//
// Allegiance Warning from %1:%n%n%2%n%3%n%n%4%5
//
#define SRVDBG_WARNING                   0x000007D0L

//
// MessageId: SRVDBG_INFO
//
// MessageText:
//
// Allegiance Information from %1:%n%n%2%n%3%n%n%4%5
//
#define SRVDBG_INFO                      0x00000BB8L

//
// MessageId: SRVDBG_CANTCREATEARTMONITOR
//
// MessageText:
//
// Allegiance Information from %1:%nArt File Not Found%n%2%n%3%n%4
//
#define SRVDBG_CANTCREATEARTMONITOR      0x000003EAL

//
// MessageId: SRVDBG_ARTFILESCHANGED
//
// MessageText:
//
// Allegiance Information from %1:%nArt Change Monitor Creation%n%2%n%3%n%4
//
#define SRVDBG_ARTFILESCHANGED           0x00000BB9L

