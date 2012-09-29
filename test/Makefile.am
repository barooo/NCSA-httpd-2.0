TESTS = test_httpd
check_PROGRAMS = test_httpd
test_httpd_SOURCES = test_httpd.c $(top_builddir)/src/httpd.h
test_httpd_LDADD = -L$(top_builddir)/lib @CHECK_LIBS@
test_httpd_CFLAGS = -I$(top_srcdir)/lib -I$(top_srcdir)/src

