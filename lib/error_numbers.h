// The contents of this file are subject to the BOINC Public License
// Version 1.0 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://boinc.berkeley.edu/license_1.0.txt
// 
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
// License for the specific language governing rights and limitations
// under the License. 
// 
// The Original Code is the Berkeley Open Infrastructure for Network Computing. 
// 
// The Initial Developer of the Original Code is the SETI@home project.
// Portions created by the SETI@home project are Copyright (C) 2002
// University of California at Berkeley. All Rights Reserved. 
// 
// Contributor(s):
//

// NOTE:  add new errors to the end of the list and don't change
// old error numbers to avoid confusion between versions
//
#define BOINC_SUCCESS       0
#define ERR_SELECT          -100
#define ERR_MALLOC          -101
#define ERR_READ            -102
#define ERR_WRITE           -103
#define ERR_FREAD           -104
#define ERR_FWRITE          -105
#define ERR_IO              -106
#define ERR_CONNECT         -107
#define ERR_FOPEN           -108
#define ERR_RENAME          -109
#define ERR_UNLINK          -110
#define ERR_OPENDIR         -111
#define ERR_XML_PARSE       -112
    // Unexpected XML tag or XML format
#define ERR_GETHOSTBYNAME   -113
    // Couldn't resolve hostname
#define ERR_GIVEUP_DOWNLOAD -114
    // too much time has elapsed without progress on file xfer,
    // or we got a 404 (not found) status code from server
#define ERR_GIVEUP_UPLOAD   -115
#define ERR_NULL            -116
    // unexpected NULL pointer
#define ERR_NEG             -117
    // unexpected negative value
#define ERR_BUFFER_OVERFLOW -118
    // caught buffer overflow
#define ERR_MD5_FAILED      -119
    // MD5 checksum failed for a file
#define ERR_RSA_FAILED      -120
    // RSA key check failed for a file
#define ERR_OPEN            -121
#define ERR_DUP2            -122
#define ERR_NO_SIGNATURE    -123
#define ERR_THREAD          -124
    // Error creating a thread
#define ERR_SIGNAL_CATCH    -125
#define ERR_QUIT_REQUEST    -126
    // The app exited due to user request and should be restarted later
#define ERR_UPLOAD_TRANSIENT    -127
#define ERR_UPLOAD_PERMANENT    -128
#define ERR_IDLE_PERIOD     -129
    // can't start work because of user prefs
#define ERR_ALREADY_ATTACHED    -130
#define ERR_FILE_TOO_BIG    -131
    // an output file was bigger than max_nbytes
#define ERR_GETRUSAGE       -132
    // getrusage failed
#define ERR_BENCHMARK_FAILED -133
#define ERR_BAD_HEX_FORMAT  -134
    // hex-format key data is bad
#define ERR_USER_REJECTED   -135
    // user rejected executable file
#define ERR_DB_NOT_FOUND    -136
    // no rows found in lookup()
#define ERR_DB_NOT_UNIQUE   -137
    // not unique in lookup()
#define ERR_DB_CANT_CONNECT -138
#define ERR_GETS            -139
    // gets() or fgets()
#define ERR_SCANF           -140
    // scanf() or fscanf()
#define ERR_STRCHR          -141
#define ERR_STRSTR          -142
#define ERR_READDIR         -143
#define ERR_SHMGET          -144
#define ERR_SHMCTL          -145
#define ERR_SHMAT           -146
#define ERR_FORK            -147
#define ERR_EXEC            -148
#define ERR_NOT_EXITED      -149
    // a process didn't exit that was supposed to
#define ERR_NOT_IMPLEMENTED -150
    // a system call not implemented on this platform
#define ERR_GETHOSTNAME     -151
#define ERR_NETOPEN         -152
#define ERR_SOCKET          -153
#define ERR_FCNTL           -154
#define ERR_AUTHENTICATOR   -155
    // scheduler request host ID doesn't match authenticator
#define ERR_SCHED_SHMEM     -156
    // sched shmem has bad contents
#define ERR_ASYNCSELECT     -157
#define ERR_BAD_RESULT_STATE    -158
#define ERR_DB_CANT_INIT    -159
#define ERR_NOT_UNIQUE		-160
	// state files had redundant entries
#define ERR_NOT_FOUND		-161
	// inconsistent client state
#define ERR_NO_EXIT_STATUS	-162
	// exit_status not found in scheduler request 
#define ERR_FILE_MISSING    -163
#define ERR_NESTED_UNHANDLED_EXCEPTION_DETECTED  -164
#define ERR_SEMGET          -165
#define ERR_SEMCTL          -166
#define ERR_SEMOP           -167
#define ERR_FTOK            -168
#define ERR_SOCKS_UNKNOWN_FAILURE -169
#define ERR_SOCKS_REQUEST_FAILED  -170
#define ERR_SOCKS_BAD_USER_PASS   -171
#define ERR_SOCKS_UNKNOWN_SERVER_VERSION -172
#define ERR_SOCKS_UNSUPPORTED     -173
#define ERR_SOCKS_CANT_REACH_HOST -174
#define ERR_SOCKS_CONN_REFUSED    -175
#define ERR_TIMER_INIT            -176
#define ERR_RSC_LIMIT_EXCEEDED  -177
#define ERR_INVALID_PARAM   -178
#define ERR_SIGNAL_OP       -179
#define ERR_BIND            -180
#define ERR_LISTEN          -181
#define ERR_TIMEOUT         -182
#define ERR_PROJECT_DOWN    -183
#define ERR_HTTP_ERROR      -184
#define ERR_RESULT_START    -185
#define ERR_RESULT_DOWNLOAD -186
#define ERR_RESULT_UPLOAD   -187
#define ERR_INVALID_URL     -189
#define ERR_MAJOR_VERSION   -190
#define ERR_NO_OPTION       -191
#define ERR_MKDIR           -192
