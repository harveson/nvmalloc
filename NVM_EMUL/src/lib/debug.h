#ifndef __DEBUG_H
#define __DEBUG_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "config.h"

#define FOREACH_DEBUG_MODULE(ACTION)                        \
	ACTION(all) /* special name that covers all modules */


#define ACTION(name)                                        \
	dbg_module_##name,

enum {
	FOREACH_DEBUG_MODULE(ACTION)
	dbg_module_count
};
#undef ACTION

#define DBG_CODE(code) DBG_##code

enum dbg_code {
	DBG_OFF = 0,
	DBG_CODE(CRITICAL) = 1, // Critical
	DBG_CODE(ERROR)    = 2, // Error
	DBG_CODE(WARNING)  = 3, // Warning
	DBG_CODE(INFO)     = 4, // Info
	DBG_CODE(DEBUG)    = 5, // Debugging
};

static char* dbg_code2str[] = {
	(char*) "OFF",
	(char*) "CRITICAL",
	(char*) "ERROR",
	(char*) "WARNING",
	(char*) "INFO",
	(char*) "DEBUG",
};

static const int dbg_terminate_level = DBG_ERROR;
static const int dbg_stderr_level = DBG_WARNING;

extern int         dbg_modules[];
extern int         dbg_level;
extern int         dbg_verbose;
extern const char* dbg_identifier;

#define DBG_MODULE(name) dbg_module_##name

#ifndef NDEBUG

#define DBG_LOG(level, format, ...)                                            \
  do {                                                                         \
    FILE* ferr = stdout;                                                       \
    if (DBG_CODE(level) && (DBG_CODE(level) <= dbg_level ||                    \
                  DBG_CODE(level) <= dbg_terminate_level))                     \
    {                                                                          \
      if (DBG_CODE(level) <= dbg_stderr_level) {                               \
        ferr=stderr;                                                           \
      }                                                                        \
      if (dbg_verbose) {                                                       \
        fprintf(ferr, "[%s] %s in %s <%s,%d>: " format,                        \
                dbg_identifier,                                                \
                dbg_code2str[DBG_CODE(level)],                                 \
                __FUNCTION__, __FILE__, __LINE__, ##__VA_ARGS__);              \
      } else {                                                                 \
        fprintf(ferr, "[%s] %s: " format,                                      \
                dbg_identifier,                                                \
                dbg_code2str[DBG_CODE(level)],                                 \
                ##__VA_ARGS__);                                                \
      }                                                                        \
      if (DBG_CODE(level) <= dbg_terminate_level) {                            \
        exit(-1);                                                              \
      }	                                                                       \
    }			                                                               \
  } while(0);


#define DBG_LOG2(level, module, format, ...)                                   \
  do {                                                                         \
    FILE* ferr = stdout;                                                       \
    if (DBG_CODE(level) &&                                                     \
	    (dbg_modules[module] || dbg_modules[dbg_module_all] ||                 \
		 DBG_CODE(level) <= dbg_terminate_level) &&                            \
	    (DBG_CODE(level) <= dbg_level ||                                       \
         DBG_CODE(level) <= dbg_terminate_level))                              \
    {                                                                          \
      if (DBG_CODE(level) <= dbg_stderr_level) {                               \
        ferr=stderr;                                                           \
      }                                                                        \
 	  fprintf(ferr, "[%s] %s in %s <%s,%d>: " format,                          \
              dbg_identifier,                                                  \
              dbg_code2str[DBG_CODE(level)],                                   \
              __FUNCTION__, __FILE__, __LINE__, ##__VA_ARGS__);                \
      if (DBG_CODE(level) <= dbg_terminate_level) {                            \
        exit(-1);                                                              \
      }	                                                                       \
    }			                                                               \
  } while(0);

#else /* NDEBUG */

#define DBG_LOG(level, format, ...)
#define DBG_LOG2(level, module, format, ...)

#endif /* NDEBUG */


#define VERIFY(condition)                                                      \
  do {                                                                         \
    if (!(condition)) {                                                        \
      fprintf(stderr, "Assumption \"%s\"\nFailed in file %s: at line:%i\n",    \
              #condition,__FILE__,__LINE__);                                   \
      dbg_log (DBG_CRITICAL, #condition);}                                     \
  } while (0);


int dbg_init(config_t* dbg_cfg, int level, const char* identifier);
void dbg_backtrace (void);
void dbg_set_level(int level);

#endif // __DEBUG_H
