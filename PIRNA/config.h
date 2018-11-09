/* config.h.  Generated from config.in by configure.  */
/* config.in.  Generated from configure.ac by autoheader.  */

/* #define __SGI 1 */
/* #define __SUNOS 1 */
/* #define __LINUX 1 */
#ifndef Config_H
#define Config_H


#include <stdio.h>

struct Struc{
	Struc(double e, char c, int x1, int x2) {
		energy =e;
		Case = c;
		k1= x1;
		k2 = x2;
	}
	Struc() {}
	double energy;
	char Case;
	unsigned int k1;
	unsigned int k2;
};

struct Candidate{
	Candidate() {
		k1= 0;	
		next = NULL;
	}
	Candidate(int x1) {
		k1= x1;	
		next = NULL;
	}
	Candidate(int x1, int x2) {
		k1= x1;
		k2 = x2;
		next = NULL;
	}
	unsigned int k1;
	unsigned int k2;
	Struc *st;
	Candidate *next;
};

/* Debug level */
typedef enum { OFF = 0, ERROR = 1, WARN = 2, INFO = 3, DEBUG = 4, ALL = 5} LOG_level;

/* */
typedef enum {SINGLE = 0, JOINT = 1} StructureType;

/* Type of penalty */
typedef enum {WHITE = 0, RED = 1, GREEN = 2} ColorType;

/* */
typedef enum {UP = 0, DOWN = 1} SequenceType;

/* Enable force constraints */
#define ENABLE_FORCE 0

/* Use the Apple OpenGL framework. */
/* #undef HAVE_APPLE_OPENGL_FRAMEWORK */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define if you have gd library. */
/* #undef HAVE_GD */

/* Define if GD supports gif. */
/* #undef HAVE_GD_GIF */

/* Define if GD supports jpeg. */
/* #undef HAVE_GD_JPEG */

/* Define if GD supports png. */
/* #undef HAVE_GD_PNG */

/* Define to 1 if you have the <ieeefp.h> header file. */
#define HAVE_IEEEFP_H 0

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Name of package */
#define PACKAGE "partition"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "hrc4@sfu.ca"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Partition"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Partition 3.1.6"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "partition"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.1.6"

/* Define to the necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "3.1.6"

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */
#endif
