AC_INIT([httpd], [1.0], [jrichardson@ncsasports.org])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AM_PROG_CC_C_O
AM_PATH_CHECK(,[have_check="yes"],
              AC_MSG_WARN([Check not found; cannot run unit tests!])
              [have_check="no"])
AM_CONDITIONAL(HAVE_CHECK, test x"$have_check" = "xyes")
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
                 Makefile
                 src/Makefile
                 test/Makefile
                 ])
AC_OUTPUT
