#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT([mISDNuser], [2.0], [i4ldeveloper@isdn4linux.de])
AC_CONFIG_SRCDIR([tools/])
AC_CONFIG_HEADERS([include/config.h])

AM_INIT_AUTOMAKE(mISDNuser,2.0)

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_INSTALL

AC_CHECK_LIB([pthread], [pthread_create])

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h fcntl.h malloc.h netdb.h netinet/in.h stdlib.h string.h sys/ioctl.h sys/socket.h sys/time.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_PID_T
AC_TYPE_SIZE_T

LT_INIT

AC_ARG_ENABLE([example],
	[  --enable-example   Include example programs],
	[case "${enableval}" in
		yes) example=true ;;
		no)  example=false ;;
		*) AC_MSG_ERROR([bad value ${enableval} for --enable-example]) ;;
	  esac],
	  [example=false])
                         	
AM_CONDITIONAL([OPT_EXAMPLE], [test "x$example" = xtrue])

AC_ARG_ENABLE([gui],
	[  --enable-gui   Include GUI programs],
	[case "${enableval}" in
		yes) gui=true ;;
		no)  gui=false ;;
		*) AC_MSG_ERROR([bad value ${enableval} for --enable-example]) ;;
	  esac],
	  [gui=false])
                         	
AM_CONDITIONAL([OPT_GUI], [test "x$gui" = xtrue])

if $gui
then
	AC_CHECK_LIB(QtCore, [qt_addObject])
	AC_ARG_VAR(QMAKE, [QT make helper])
	AC_CHECK_TOOL(QMAKE, qmake,[NotFound],)
	if test x$QMAKE = xNotFound
	then
		AC_MSG_ERROR([qmake not found])
		
	fi
fi

# Checks for library functions.
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_CHECK_FUNCS([gethostbyname gettimeofday inet_ntoa memset select socket strcasecmp strchr strdup strerror strstr strtol])

AC_CHECK_FILE(.git/objects,
		[git_repo=true],
		[git_repo=false]
	)

AM_CONDITIONAL([GIT_REPO], [test "x$git_repo" = xtrue])
	


AC_CONFIG_FILES([Makefile
                 include/Makefile
                 lib/Makefile
                 bridge/Makefile
                 l1oip/Makefile
                 tools/Makefile
                 example/Makefile
                 guitools/Makefile
                 guitools/qmisdnwatch/Makefile
               ])

AC_OUTPUT