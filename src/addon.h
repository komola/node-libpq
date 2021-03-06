#ifndef NODE_LIBPQ_ADDON
#define NODE_LIBPQ_ADDON

#include <node.h>
#include <nan.h>
#include <libpq-fe.h>
#include <pg_config.h>

#if PG_VERSION_NUM > 90000
#define ESCAPE_SUPPORTED
#endif

#if PG_VERSION_NUM >= 93000
#define MORE_ERROR_FIELDS_SUPPORTED
#endif

#include "connection.h"
#include "connect-async-worker.h"

//#define LOG(msg) printf("%s\n", msg);
//#define TRACEF(format, arg) printf(format, arg);

#define LOG(msg) ;
#define TRACEF(format, arg) ;

#define TRACE(msg) LOG(msg);
#define THIS() ObjectWrap::Unwrap<Connection>(args.This());

#endif
