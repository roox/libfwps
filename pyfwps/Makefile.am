if HAVE_PYTHON
AM_CFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCSTRING_CPPFLAGS@ \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCDATA_CPPFLAGS@ \
	@LIBCLOCALE_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBFGUID_CPPFLAGS@

pyexec_LTLIBRARIES = pyfwps.la

pyfwps_la_SOURCES = \
	pyfwps.c pyfwps.h \
	pyfwps_codepage.c pyfwps_codepage.h \
	pyfwps_error.c pyfwps_error.h \
	pyfwps_guid.c pyfwps_guid.h \
	pyfwps_integer.c pyfwps_integer.h \
	pyfwps_libcerror.h \
	pyfwps_libclocale.h \
	pyfwps_libcstring.h \
	pyfwps_libfguid.h \
	pyfwps_libfwps.h \
	pyfwps_python.h \
	pyfwps_storage.c pyfwps_storage.h \
	pyfwps_unused.h

pyfwps_la_LIBADD = \
	@LIBCSTRING_LIBADD@ \
	@LIBCERROR_LIBADD@ \
	../libfwps/libfwps.la \
	@LIBCDATA_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBFGUID_LIBADD@

pyfwps_la_CPPFLAGS = $(PYTHON_CPPFLAGS)
pyfwps_la_LDFLAGS  = -module -avoid-version $(PYTHON_LDFLAGS)

endif

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

