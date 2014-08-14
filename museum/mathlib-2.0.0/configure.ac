
AC_REVISION([$Id: configure.ac,v 1.7 2006/03/22 13:44:03 goualard Exp $])
AC_INIT(src/MathLib.h)
dnl AC_PREREQ(2.13)


MATHLIB_MAJOR_VERSION=2
MATHLIB_MINOR_VERSION=0
MATHLIB_PATCH_VERSION=0
MATHLIB_RPM_RELEASE=1
MATHLIB_VERSION=${MATHLIB_MAJOR_VERSION}.${MATHLIB_MINOR_VERSION}.${MATHLIB_PATCH_VERSION}

AC_SUBST(MATHLIB_MAJOR_VERSION)
AC_SUBST(MATHLIB_MINOR_VERSION)
AC_SUBST(MATHLIB_MICRO_VERSION)
AC_SUBST(MATHLIB_RPM_RELEASE)


dnl options
AC_ARG_WITH(xlc,[ --with-xlc	Under AIX, use the xlc even if gcc exists])

AM_CONFIG_HEADER(src/mathlib_configuration.h)
AM_INIT_AUTOMAKE([mathlib],${MATHLIB_VERSION})

dnl AC_PROG_MAKE_SET

dnl Determines the kind of architecture to use
AC_CANONICAL_HOST

case "$host$" in
i?86-*-linux*)
	AC_DEFINE(MATHLIB_LINUX,1,
	          [Define this if your system is a linux based ix86 or compatible])
	;;
i?86-*-cygwin*)
	AC_DEFINE(MATHLIB_CYGWIN,1,
	          [Define this if your system is a cygwin based ix86 or compatible])
	;;
rs6000-* | powerpc-*)
	AC_DEFINE(MATHLIB_AIX,1,
	          [Define this if your system is AIX based])
	;;
*-sun-*)
	AC_DEFINE(MATHLIB_SUN,1,
	          [Define this if your system is SUN based])
	;;
*)
	AC_MSG_ERROR(Sorry, this system is not yet supported by mathlib)
esac


CFLAGS="-g0 -O2"

dnl Checks for programs.
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LIBTOOL

AC_OUTPUT([Makefile src/Makefile mathlib.spec])
