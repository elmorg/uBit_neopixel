#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2016 // UTC year
#define YOTTA_BUILD_MONTH 8 // UTC month 1-12
#define YOTTA_BUILD_DAY 18 // UTC day 1-31
#define YOTTA_BUILD_HOUR 18 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 8 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 4 // UTC second 0-61
#define YOTTA_BUILD_UUID 023299ac-6f20-4abe-914b-ae482d7ace7a // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID d7f0d9dc95ccbb87b91887c75727fdf0df67e8f4 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION d7f0d9d // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
