all: bin/cpp.exe  \
     bin/g++.exe  \
	   bin/cc1.exe

clean:
	 find \( -name '*.o' -o -name '*.exe' -o -name '*.a' \)  -exec rm {} \;


SOME_DEFINES=                                                       \
  -DDEFAULT_TARGET_VERSION=\"4.7.0\"                                \
  -DDEFAULT_TARGET_MACHINE=\"i686-pc-mingw32\"                      \
  -DCONFIGURE_SPECS="\"\""                                          \
  -DSTANDARD_EXEC_PREFIX=\"/usr/local/lib/gcc/\"                    \
  -DSTANDARD_LIBEXEC_PREFIX=\"/usr/local/libexec/gcc/\"             \
  -DSTANDARD_BINDIR_PREFIX=\"/usr/local/bin/\"                      \
  -DSTANDARD_STARTFILE_PREFIX=\"../../../\"                         \
  -DTOOLDIR_BASE_PREFIX=\"../../../../\"

DBASEVER=-DBASEVER="\"4.7.0\""
DPREFIX=-DPREFIX=\"/usr/local/\"

# "Standard" definitions:
DEFS=-D__USE_MINGW_ACCESS -DIN_GCC -DHAVE_CONFIG_H

# libcommon-target          {

  #  c -> o {

FCOMMON_TARGET=-D__USE_MINGW_ACCESS -DIN_GCC -DHAVE_CONFIG_H -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include

o/gcc/i386-common.o:                 $(SRCROOT)/gcc/common/config/i386/i386-common.c
	gcc $(FCOMMON_TARGET) -c $^ -o $@

o/gcc/prefix.o:                      $(SRCROOT)/gcc/prefix.c
	gcc $(FCOMMON_TARGET) $(DPREFIX) -c $^ -o $@

o/gcc/params.o:                      $(SRCROOT)/gcc/params.c
	gcc $(FCOMMON_TARGET) -c $^ -o $@

o/gcc/opts.o:                        $(SRCROOT)/gcc/opts.c
	gcc $(FCOMMON_TARGET) -c $^ -o $@

o/gcc/opts-common.o:                 $(SRCROOT)/gcc/opts-common.c
	gcc $(FCOMMON_TARGET) -c $^ -o $@

o/gcc/options.o:                     gcc/options.c
	gcc $(FCOMMON_TARGET) -c $^ -o $@

o/gcc/vec.o:                         $(SRCROOT)/gcc/vec.c
	gcc $(FCOMMON_TARGET) -c $^ -o $@

o/gcc/hooks.o:                       $(SRCROOT)/gcc/hooks.c
	gcc $(FCOMMON_TARGET) -c $^ -o $@

o/gcc/common-targhooks.o:            $(SRCROOT)/gcc/common/common-targhooks.c
	gcc $(FCOMMON_TARGET) -c $^ -o $@

	# }

o/gcc/libcommon-target.a: o/gcc/i386-common.o                \
                          o/gcc/prefix.o                     \
                          o/gcc/params.o                     \
                          o/gcc/opts.o                       \
                          o/gcc/opts-common.o                \
                          o/gcc/options.o                    \
                          o/gcc/vec.o                        \
                          o/gcc/hooks.o                      \
                          o/gcc/common-targhooks.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

# }

# libcommon                 {

  #  c -> o {

F_COMMON=-D__USE_MINGW_ACCESS -DIN_GCC -DHAVE_CONFIG_H -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include

o/gcc/diagnostic.o:                  $(SRCROOT)/gcc/diagnostic.c
	gcc $(F_COMMON) -c $^ -o $@

o/gcc/pretty-print.o:                $(SRCROOT)/gcc/pretty-print.c
	gcc $(F_COMMON) -c $^ -o $@

o/gcc/intl.o:                        $(SRCROOT)/gcc/intl.c
	gcc $(F_COMMON) -DLOCALEDIR=\"/usr/local/share/locale\" -c $^ -o $@

o/gcc/input.o:                       $(SRCROOT)/gcc/input.c
	gcc $(F_COMMON) -c $^ -o $@

o/gcc/version.o:                     $(SRCROOT)/gcc/version.c
	gcc $(F_COMMON) $(DBASEVER) -DBUGURL="\"<http://gcc.gnu.org/bugs.html>\"" -DPKGVERSION="\"(GCC) \"" -DDATESTAMP="\"\"" -DDEVPHASE="\"\"" -DREVISION="\"\""     -c $^ -o $@

	# }

o/gcc/libcommon.a:               o/gcc/diagnostic.o                 \
                                 o/gcc/pretty-print.o               \
                                 o/gcc/intl.o                       \
                                 o/gcc/input.o                      \
                                 o/gcc/version.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

# }

# libcpp                    {

  #  c -> o {

F_CPP=-D__USE_MINGW_ACCESS -Ilibcpp -I$(SRCROOT)/include -I$(SRCROOT)/libcpp -I$(SRCROOT)/libcpp/include  -Igcc

o/libcpp/charset.o:                  $(SRCROOT)/libcpp/charset.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/directives.o::               $(SRCROOT)/libcpp/directives.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/directives-only.o:          $(SRCROOT)/libcpp/directives-only.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/errors.o:                   $(SRCROOT)/libcpp/errors.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/expr.o:                     $(SRCROOT)/libcpp/expr.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/files.o:                    $(SRCROOT)/libcpp/files.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/identifiers.o:              $(SRCROOT)/libcpp/identifiers.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/init.o:                     $(SRCROOT)/libcpp/init.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/lex.o:                      $(SRCROOT)/libcpp/lex.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/line-map.o:                 $(SRCROOT)/libcpp/line-map.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/macro.o:                    $(SRCROOT)/libcpp/macro.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/mkdeps.o:                   $(SRCROOT)/libcpp/mkdeps.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/pch.o:                      $(SRCROOT)/libcpp/pch.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/symtab.o:                   $(SRCROOT)/libcpp/symtab.c
	gcc  $(F_CPP) -c $^ -o $@

o/libcpp/traditional.o:              $(SRCROOT)/libcpp/traditional.c
	gcc  $(F_CPP) -c $^ -o $@

	# }

  #  o -> a {

o/libcpp/libcpp.a:               o/libcpp/charset.o                 \
                                 o/libcpp/directives.o              \
                                 o/libcpp/directives-only.o         \
                                 o/libcpp/errors.o                  \
                                 o/libcpp/expr.o                    \
                                 o/libcpp/files.o                   \
                                 o/libcpp/identifiers.o             \
                                 o/libcpp/init.o                    \
                                 o/libcpp/lex.o                     \
                                 o/libcpp/line-map.o                \
                                 o/libcpp/macro.o                   \
                                 o/libcpp/mkdeps.o                  \
                                 o/libcpp/pch.o                     \
                                 o/libcpp/symtab.o                  \
                                 o/libcpp/traditional.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

  # }

# }

# libiberty                 {

  #  c -> o {

F_IBERTY=-D__USE_MINGW_ACCESS -DHAVE_CONFIG_H -Igcc -I$(SRCROOT)/libiberty -I$(SRCROOT)/include

o/libiberty/alloca.o:                $(SRCROOT)/libiberty/alloca.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/argv.o:                  $(SRCROOT)/libiberty/argv.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/asprintf.o:              $(SRCROOT)/libiberty/asprintf.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/bcmp.o:                  $(SRCROOT)/libiberty/bcmp.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/bcopy.o:                 $(SRCROOT)/libiberty/bcopy.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/bzero.o:                 $(SRCROOT)/libiberty/bzero.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/choose-temp.o:           $(SRCROOT)/libiberty/choose-temp.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/concat.o:                $(SRCROOT)/libiberty/concat.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/cp-demangle.o:           $(SRCROOT)/libiberty/cp-demangle.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/cp-demint.o:             $(SRCROOT)/libiberty/cp-demint.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/cplus-dem.o:             $(SRCROOT)/libiberty/cplus-dem.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/crc32.o:                 $(SRCROOT)/libiberty/crc32.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/dyn-string.o:            $(SRCROOT)/libiberty/dyn-string.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/fdmatch.o:               $(SRCROOT)/libiberty/fdmatch.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/ffs.o:                   $(SRCROOT)/libiberty/ffs.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/fibheap.o:               $(SRCROOT)/libiberty/fibheap.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/filename_cmp.o:          $(SRCROOT)/libiberty/filename_cmp.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/floatformat.o:           $(SRCROOT)/libiberty/floatformat.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/fnmatch.o:               $(SRCROOT)/libiberty/fnmatch.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/fopen_unlocked.o:        $(SRCROOT)/libiberty/fopen_unlocked.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/getopt.o:                $(SRCROOT)/libiberty/getopt.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/getopt1.o:               $(SRCROOT)/libiberty/getopt1.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/getpwd.o:                $(SRCROOT)/libiberty/getpwd.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/getruntime.o:            $(SRCROOT)/libiberty/getruntime.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/hashtab.o:               $(SRCROOT)/libiberty/hashtab.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/hex.o:                   $(SRCROOT)/libiberty/hex.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/index.o:                 $(SRCROOT)/libiberty/index.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/insque.o:                $(SRCROOT)/libiberty/insque.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/lbasename.o:             $(SRCROOT)/libiberty/lbasename.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/lrealpath.o:             $(SRCROOT)/libiberty/lrealpath.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/make-relative-prefix.o:  $(SRCROOT)/libiberty/make-relative-prefix.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/make-temp-file.o:        $(SRCROOT)/libiberty/make-temp-file.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/md5.o:                   $(SRCROOT)/libiberty/md5.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/memmem.o:                $(SRCROOT)/libiberty/memmem.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/mempcpy.o:               $(SRCROOT)/libiberty/mempcpy.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/mkstemps.o:              $(SRCROOT)/libiberty/mkstemps.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/objalloc.o:              $(SRCROOT)/libiberty/objalloc.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/obstack.o:               $(SRCROOT)/libiberty/obstack.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/partition.o:             $(SRCROOT)/libiberty/partition.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/pexecute.o:              $(SRCROOT)/libiberty/pexecute.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/pex-common.o:            $(SRCROOT)/libiberty/pex-common.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/pex-one.o:               $(SRCROOT)/libiberty/pex-one.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/pex-win32.o:             $(SRCROOT)/libiberty/pex-win32.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/physmem.o:               $(SRCROOT)/libiberty/physmem.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/random.o:                $(SRCROOT)/libiberty/random.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/regex.o:                 $(SRCROOT)/libiberty/regex.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/rindex.o:                $(SRCROOT)/libiberty/rindex.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/safe-ctype.o:            $(SRCROOT)/libiberty/safe-ctype.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/setenv.o:                $(SRCROOT)/libiberty/setenv.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/setproctitle.o:          $(SRCROOT)/libiberty/setproctitle.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/sha1.o:                  $(SRCROOT)/libiberty/sha1.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/sigsetmask.o:            $(SRCROOT)/libiberty/sigsetmask.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/simple-object.o:         $(SRCROOT)/libiberty/simple-object.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/simple-object-coff.o:    $(SRCROOT)/libiberty/simple-object-coff.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/simple-object-elf.o:     $(SRCROOT)/libiberty/simple-object-elf.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/simple-object-mach-o.o: $(SRCROOT)/libiberty/simple-object-mach-o.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/sort.o:                  $(SRCROOT)/libiberty/sort.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/spaces.o:                $(SRCROOT)/libiberty/spaces.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/splay-tree.o:            $(SRCROOT)/libiberty/splay-tree.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/stack-limit.o:           $(SRCROOT)/libiberty/stack-limit.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/stpcpy.o:                $(SRCROOT)/libiberty/stpcpy.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/stpncpy.o:               $(SRCROOT)/libiberty/stpncpy.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/strerror.o:              $(SRCROOT)/libiberty/strerror.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/strsignal.o:             $(SRCROOT)/libiberty/strsignal.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/strndup.o:               $(SRCROOT)/libiberty/strndup.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/strverscmp.o:            $(SRCROOT)/libiberty/strverscmp.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/timeval-utils.o:         $(SRCROOT)/libiberty/timeval-utils.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/unlink-if-ordinary.o:    $(SRCROOT)/libiberty/unlink-if-ordinary.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/vasprintf.o:             $(SRCROOT)/libiberty/vasprintf.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/vfork.o:                 $(SRCROOT)/libiberty/vfork.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/waitpid.o:               $(SRCROOT)/libiberty/waitpid.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/xatexit.o:               $(SRCROOT)/libiberty/xatexit.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/xexit.o:                 $(SRCROOT)/libiberty/xexit.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/xmalloc.o:               $(SRCROOT)/libiberty/xmalloc.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/xmemdup.o:               $(SRCROOT)/libiberty/xmemdup.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/xstrdup.o:               $(SRCROOT)/libiberty/xstrdup.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/xstrerror.o:             $(SRCROOT)/libiberty/xstrerror.c
	gcc  $(F_IBERTY) -c $^ -o $@

o/libiberty/xstrndup.o:              $(SRCROOT)/libiberty/xstrndup.c
	gcc  $(F_IBERTY) -c $^ -o $@

  # }

	#  o -> a {

o/libiberty/libiberty.a: o/libiberty/alloca.o               \
                         o/libiberty/argv.o                 \
                         o/libiberty/asprintf.o             \
                         o/libiberty/bcmp.o                 \
                         o/libiberty/bcopy.o                \
                         o/libiberty/bzero.o                \
                         o/libiberty/choose-temp.o          \
                         o/libiberty/concat.o               \
                         o/libiberty/cp-demangle.o          \
                         o/libiberty/cp-demint.o            \
                         o/libiberty/cplus-dem.o            \
                         o/libiberty/crc32.o                \
                         o/libiberty/dyn-string.o           \
                         o/libiberty/fdmatch.o              \
                         o/libiberty/ffs.o                  \
                         o/libiberty/fibheap.o              \
                         o/libiberty/filename_cmp.o         \
                         o/libiberty/floatformat.o          \
                         o/libiberty/fnmatch.o              \
                         o/libiberty/fopen_unlocked.o       \
                         o/libiberty/getopt.o               \
                         o/libiberty/getopt1.o              \
                         o/libiberty/getpwd.o               \
                         o/libiberty/getruntime.o           \
                         o/libiberty/hashtab.o              \
                         o/libiberty/hex.o                  \
                         o/libiberty/index.o                \
                         o/libiberty/insque.o               \
                         o/libiberty/lbasename.o            \
                         o/libiberty/lrealpath.o            \
                         o/libiberty/make-relative-prefix.o \
                         o/libiberty/make-temp-file.o       \
                         o/libiberty/md5.o                  \
                         o/libiberty/memmem.o               \
                         o/libiberty/mempcpy.o              \
                         o/libiberty/mkstemps.o             \
                         o/libiberty/objalloc.o             \
                         o/libiberty/obstack.o              \
                         o/libiberty/partition.o            \
                         o/libiberty/pexecute.o             \
                         o/libiberty/pex-common.o           \
                         o/libiberty/pex-one.o              \
                         o/libiberty/pex-win32.o            \
                         o/libiberty/physmem.o              \
                         o/libiberty/random.o               \
                         o/libiberty/regex.o                \
                         o/libiberty/rindex.o               \
                         o/libiberty/safe-ctype.o           \
                         o/libiberty/setenv.o               \
                         o/libiberty/setproctitle.o         \
                         o/libiberty/sha1.o                 \
                         o/libiberty/sigsetmask.o           \
                         o/libiberty/simple-object.o        \
                         o/libiberty/simple-object-coff.o   \
                         o/libiberty/simple-object-elf.o    \
                         o/libiberty/simple-object-mach-o.o \
                         o/libiberty/sort.o                 \
                         o/libiberty/spaces.o               \
                         o/libiberty/splay-tree.o           \
                         o/libiberty/stack-limit.o          \
                         o/libiberty/stpcpy.o               \
                         o/libiberty/stpncpy.o              \
                         o/libiberty/strerror.o             \
                         o/libiberty/strsignal.o            \
                         o/libiberty/strndup.o              \
                         o/libiberty/strverscmp.o           \
                         o/libiberty/timeval-utils.o        \
                         o/libiberty/unlink-if-ordinary.o   \
                         o/libiberty/vasprintf.o            \
                         o/libiberty/vfork.o                \
                         o/libiberty/waitpid.o              \
                         o/libiberty/xatexit.o              \
                         o/libiberty/xexit.o                \
                         o/libiberty/xmalloc.o              \
                         o/libiberty/xmemdup.o              \
                         o/libiberty/xstrdup.o              \
                         o/libiberty/xstrerror.o            \
                         o/libiberty/xstrndup.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

	# }

# }

# libdecnumber              {

  #  c -> o {

F_DECNUMBER=-D__USE_MINGW_ACCESS                        -Igcc -Ilibdecnumber -I$(SRCROOT)/libdecnumber

o/libdecnumber/decNumber.o:       $(SRCROOT)/libdecnumber/decNumber.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

o/libdecnumber/decContext.o:      $(SRCROOT)/libdecnumber/decContext.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

o/libdecnumber/decimal32.o:       $(SRCROOT)/libdecnumber/bid/decimal32.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

o/libdecnumber/decimal64.o:       $(SRCROOT)/libdecnumber/bid/decimal64.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

o/libdecnumber/decimal128.o:      $(SRCROOT)/libdecnumber/bid/decimal128.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

o/libdecnumber/bid2dpd_dpd2bid.o: $(SRCROOT)/libdecnumber/bid/bid2dpd_dpd2bid.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

o/libdecnumber/host-ieee32.o:     $(SRCROOT)/libdecnumber/bid/host-ieee32.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

o/libdecnumber/host-ieee64.o:     $(SRCROOT)/libdecnumber/bid/host-ieee64.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

o/libdecnumber/host-ieee128.o:    $(SRCROOT)/libdecnumber/bid/host-ieee128.c
	gcc  $(F_DECNUMBER) -c $^ -o $@

	# }

  #  o -> a {

o/libdecnumber/libdecnumber.a:   o/libdecnumber/decNumber.o         \
                                 o/libdecnumber/decContext.o        \
                                 o/libdecnumber/decimal32.o         \
                                 o/libdecnumber/decimal64.o         \
                                 o/libdecnumber/decimal128.o        \
                                 o/libdecnumber/bid2dpd_dpd2bid.o   \
                                 o/libdecnumber/host-ieee32.o       \
                                 o/libdecnumber/host-ieee64.o       \
                                 o/libdecnumber/host-ieee128.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

  # }

# }

# libbackend                {

	# c -> o  {

    # insn-*.c {

F_INSN=-DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include -Igcc -Igmp

o/gcc/insn-attrtab.o:                gcc/insn-attrtab.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-automata.o:               gcc/insn-automata.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-emit.o:                   gcc/insn-emit.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-extract.o:                gcc/insn-extract.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-modes.o:                  gcc/insn-modes.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-opinit.o:                 gcc/insn-opinit.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-output.o:                 gcc/insn-output.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-peep.o:                   gcc/insn-peep.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-preds.o:                  gcc/insn-preds.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-recog.o:                  gcc/insn-recog.c
	gcc $(F_INSN) -c $^ -o $@

o/gcc/insn-enums.o:                  gcc/insn-enums.c
	gcc $(F_INSN) -c $^ -o $@

	  # }

    # others {

D_GCC=-DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS
I_GCC=-I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include -Igcc -Igmp
F_GCC=$(D_GCC) $(I_GCC)

o/gcc/ggc-page.o:                    $(SRCROOT)/gcc/ggc-page.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/alias.o:                       $(SRCROOT)/gcc/alias.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/alloc-pool.o:                  $(SRCROOT)/gcc/alloc-pool.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/auto-inc-dec.o:                $(SRCROOT)/gcc/auto-inc-dec.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/bb-reorder.o:                  $(SRCROOT)/gcc/bb-reorder.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/bitmap.o:                      $(SRCROOT)/gcc/bitmap.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/bt-load.o:                     $(SRCROOT)/gcc/bt-load.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/builtins.o:                    $(SRCROOT)/gcc/builtins.c
	gcc $(F_GCC) -I$(SRCROOT)/mpfr/src -I$(SRCROOT)/mpc/src -c $^ -o $@

o/gcc/caller-save.o:                 $(SRCROOT)/gcc/caller-save.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/calls.o:                       $(SRCROOT)/gcc/calls.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfg.o:                         $(SRCROOT)/gcc/cfg.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfganal.o:                     $(SRCROOT)/gcc/cfganal.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfgbuild.o:                    $(SRCROOT)/gcc/cfgbuild.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfgcleanup.o:                  $(SRCROOT)/gcc/cfgcleanup.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfgexpand.o:                   $(SRCROOT)/gcc/cfgexpand.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfghooks.o:                    $(SRCROOT)/gcc/cfghooks.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfglayout.o:                   $(SRCROOT)/gcc/cfglayout.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfgloop.o:                     $(SRCROOT)/gcc/cfgloop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfgloopanal.o:                 $(SRCROOT)/gcc/cfgloopanal.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfgloopmanip.o:                $(SRCROOT)/gcc/cfgloopmanip.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cfgrtl.o:                      $(SRCROOT)/gcc/cfgrtl.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cgraph.o:                      $(SRCROOT)/gcc/cgraph.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cgraphbuild.o:                 $(SRCROOT)/gcc/cgraphbuild.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cgraphunit.o:                  $(SRCROOT)/gcc/cgraphunit.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/combine.o:                     $(SRCROOT)/gcc/combine.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/combine-stack-adj.o:           $(SRCROOT)/gcc/combine-stack-adj.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/compare-elim.o:                $(SRCROOT)/gcc/compare-elim.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/convert.o:                     $(SRCROOT)/gcc/convert.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/coverage.o:                    $(SRCROOT)/gcc/coverage.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cppbuiltin.o:                  $(SRCROOT)/gcc/cppbuiltin.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS $(DBASEVER) -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include -Igcc -Igmp -c $^ -o $@

o/gcc/cppdefault.o:                  $(SRCROOT)/gcc/cppdefault.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS -I$(SRCROOT)/gcc $(SOME_DEFINES) $(DPREFIX) -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include -Igcc -Igmp -c $^ -o $@

o/gcc/cprop.o:                       $(SRCROOT)/gcc/cprop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cse.o:                         $(SRCROOT)/gcc/cse.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/cselib.o:                      $(SRCROOT)/gcc/cselib.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/data-streamer.o:               $(SRCROOT)/gcc/data-streamer.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/data-streamer-in.o:            $(SRCROOT)/gcc/data-streamer-in.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/data-streamer-out.o:           $(SRCROOT)/gcc/data-streamer-out.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dbxout.o:                      $(SRCROOT)/gcc/dbxout.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dbgcnt.o:                      $(SRCROOT)/gcc/dbgcnt.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dce.o:                         $(SRCROOT)/gcc/dce.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ddg.o:                         $(SRCROOT)/gcc/ddg.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/debug.o:                       $(SRCROOT)/gcc/debug.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/df-core.o:                     $(SRCROOT)/gcc/df-core.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/df-problems.o:                 $(SRCROOT)/gcc/df-problems.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/df-scan.o:                     $(SRCROOT)/gcc/df-scan.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dfp.o:                         $(SRCROOT)/gcc/dfp.c
	gcc $(F_GCC) -I$(SRCROOT)/libdecnumber/bid -I$(SRCROOT)/libdecnumber -I$(SRCROOT)/libgcc -c $^ -o $@

o/gcc/dojump.o:                      $(SRCROOT)/gcc/dojump.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dominance.o:                   $(SRCROOT)/gcc/dominance.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/domwalk.o:                     $(SRCROOT)/gcc/domwalk.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/double-int.o:                  $(SRCROOT)/gcc/double-int.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dse.o:                         $(SRCROOT)/gcc/dse.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dwarf2asm.o:                   $(SRCROOT)/gcc/dwarf2asm.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dwarf2cfi.o:                   $(SRCROOT)/gcc/dwarf2cfi.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/dwarf2out.o:                   $(SRCROOT)/gcc/dwarf2out.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ebitmap.o:                     $(SRCROOT)/gcc/ebitmap.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/emit-rtl.o:                    $(SRCROOT)/gcc/emit-rtl.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/et-forest.o:                   $(SRCROOT)/gcc/et-forest.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/except.o:                      $(SRCROOT)/gcc/except.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/explow.o:                      $(SRCROOT)/gcc/explow.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/expmed.o:                      $(SRCROOT)/gcc/expmed.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/expr.o:                        $(SRCROOT)/gcc/expr.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/final.o:                       $(SRCROOT)/gcc/final.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/fixed-value.o:                 $(SRCROOT)/gcc/fixed-value.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/fold-const.o:                  $(SRCROOT)/gcc/fold-const.c
	gcc $(F_GCC) -I$(SRCROOT)/mpfr/src -I$(SRCROOT)/mpc/src -c $^ -o $@

o/gcc/function.o:                    $(SRCROOT)/gcc/function.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/fwprop.o:                      $(SRCROOT)/gcc/fwprop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gcse.o:                        $(SRCROOT)/gcc/gcse.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ggc-common.o:                  $(SRCROOT)/gcc/ggc-common.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gimple.o:                      $(SRCROOT)/gcc/gimple.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gimple-iterator.o:             $(SRCROOT)/gcc/gimple-iterator.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gimple-fold.o:                 $(SRCROOT)/gcc/gimple-fold.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gimple-low.o:                  $(SRCROOT)/gcc/gimple-low.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gimple-pretty-print.o:         $(SRCROOT)/gcc/gimple-pretty-print.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gimple-streamer-in.o:          $(SRCROOT)/gcc/gimple-streamer-in.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gimple-streamer-out.o:         $(SRCROOT)/gcc/gimple-streamer-out.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gimplify.o:                    $(SRCROOT)/gcc/gimplify.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/godump.o:                      $(SRCROOT)/gcc/godump.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graph.o:                       $(SRCROOT)/gcc/graph.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphds.o:                     $(SRCROOT)/gcc/graphds.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite.o:                    $(SRCROOT)/gcc/graphite.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-blocking.o:           $(SRCROOT)/gcc/graphite-blocking.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-clast-to-gimple.o:    $(SRCROOT)/gcc/graphite-clast-to-gimple.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-cloog-util.o:         $(SRCROOT)/gcc/graphite-cloog-util.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-dependences.o:        $(SRCROOT)/gcc/graphite-dependences.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-flattening.o:         $(SRCROOT)/gcc/graphite-flattening.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-interchange.o:        $(SRCROOT)/gcc/graphite-interchange.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-poly.o:               $(SRCROOT)/gcc/graphite-poly.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-ppl.o:                $(SRCROOT)/gcc/graphite-ppl.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-scop-detection.o:     $(SRCROOT)/gcc/graphite-scop-detection.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/graphite-sese-to-poly.o:       $(SRCROOT)/gcc/graphite-sese-to-poly.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/gtype-desc.o:                  gcc/gtype-desc.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/haifa-sched.o:                 $(SRCROOT)/gcc/haifa-sched.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/hw-doloop.o:                   $(SRCROOT)/gcc/hw-doloop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/hwint.o:                       $(SRCROOT)/gcc/hwint.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ifcvt.o:                       $(SRCROOT)/gcc/ifcvt.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ree.o:                         $(SRCROOT)/gcc/ree.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/incpath.o:                     $(SRCROOT)/gcc/incpath.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/init-regs.o:                   $(SRCROOT)/gcc/init-regs.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/integrate.o:                   $(SRCROOT)/gcc/integrate.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/internal-fn.o:                 $(SRCROOT)/gcc/internal-fn.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-cp.o:                      $(SRCROOT)/gcc/ipa-cp.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-split.o:                   $(SRCROOT)/gcc/ipa-split.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-inline.o:                  $(SRCROOT)/gcc/ipa-inline.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-inline-analysis.o:         $(SRCROOT)/gcc/ipa-inline-analysis.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-inline-transform.o:        $(SRCROOT)/gcc/ipa-inline-transform.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-prop.o:                    $(SRCROOT)/gcc/ipa-prop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-pure-const.o:              $(SRCROOT)/gcc/ipa-pure-const.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-reference.o:               $(SRCROOT)/gcc/ipa-reference.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-ref.o:                     $(SRCROOT)/gcc/ipa-ref.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa-utils.o:                   $(SRCROOT)/gcc/ipa-utils.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ipa.o:                         $(SRCROOT)/gcc/ipa.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ira.o:                         $(SRCROOT)/gcc/ira.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ira-build.o:                   $(SRCROOT)/gcc/ira-build.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ira-costs.o:                   $(SRCROOT)/gcc/ira-costs.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ira-conflicts.o:               $(SRCROOT)/gcc/ira-conflicts.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ira-color.o:                   $(SRCROOT)/gcc/ira-color.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ira-emit.o:                    $(SRCROOT)/gcc/ira-emit.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/ira-lives.o:                   $(SRCROOT)/gcc/ira-lives.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/jump.o:                        $(SRCROOT)/gcc/jump.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/langhooks.o:                   $(SRCROOT)/gcc/langhooks.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lcm.o:                         $(SRCROOT)/gcc/lcm.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lists.o:                       $(SRCROOT)/gcc/lists.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/loop-doloop.o:                 $(SRCROOT)/gcc/loop-doloop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/loop-init.o:                   $(SRCROOT)/gcc/loop-init.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/loop-invariant.o:              $(SRCROOT)/gcc/loop-invariant.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/loop-iv.o:                     $(SRCROOT)/gcc/loop-iv.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/loop-unroll.o:                 $(SRCROOT)/gcc/loop-unroll.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/loop-unswitch.o:               $(SRCROOT)/gcc/loop-unswitch.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lower-subreg.o:                $(SRCROOT)/gcc/lower-subreg.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-cgraph.o:                  $(SRCROOT)/gcc/lto-cgraph.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-streamer.o:                $(SRCROOT)/gcc/lto-streamer.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-streamer-in.o:             $(SRCROOT)/gcc/lto-streamer-in.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-streamer-out.o:            $(SRCROOT)/gcc/lto-streamer-out.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-section-in.o:              $(SRCROOT)/gcc/lto-section-in.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-section-out.o:             $(SRCROOT)/gcc/lto-section-out.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-symtab.o:                  $(SRCROOT)/gcc/lto-symtab.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-opts.o:                    $(SRCROOT)/gcc/lto-opts.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/lto-compress.o:                $(SRCROOT)/gcc/lto-compress.c
	gcc $(F_GCC) -I$(SRCROOT)/zlib -c $^ -o $@

o/gcc/matrix-reorg.o:                $(SRCROOT)/gcc/matrix-reorg.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/mcf.o:                         $(SRCROOT)/gcc/mcf.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/mode-switching.o:              $(SRCROOT)/gcc/mode-switching.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/modulo-sched.o:                $(SRCROOT)/gcc/modulo-sched.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/omega.o:                       $(SRCROOT)/gcc/omega.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/omp-low.o:                     $(SRCROOT)/gcc/omp-low.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/optabs.o:                      $(SRCROOT)/gcc/optabs.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/options-save.o:                gcc/options-save.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/opts-global.o:                 $(SRCROOT)/gcc/opts-global.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/passes.o:                      $(SRCROOT)/gcc/passes.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/plugin.o:                      $(SRCROOT)/gcc/plugin.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/pointer-set.o:                 $(SRCROOT)/gcc/pointer-set.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/postreload-gcse.o:             $(SRCROOT)/gcc/postreload-gcse.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/postreload.o:                  $(SRCROOT)/gcc/postreload.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/predict.o:                     $(SRCROOT)/gcc/predict.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/print-rtl.o:                   $(SRCROOT)/gcc/print-rtl.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/print-tree.o:                  $(SRCROOT)/gcc/print-tree.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/profile.o:                     $(SRCROOT)/gcc/profile.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/real.o:                        $(SRCROOT)/gcc/real.c
	gcc $(F_GCC) -I$(SRCROOT)/mpfr/src -I$(SRCROOT)/mpc/src -c $^ -o $@

o/gcc/realmpfr.o:                    $(SRCROOT)/gcc/realmpfr.c
	gcc $(F_GCC) -I$(SRCROOT)/mpfr/src -I$(SRCROOT)/mpc/src -c $^ -o $@

o/gcc/recog.o:                       $(SRCROOT)/gcc/recog.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/reg-stack.o:                   $(SRCROOT)/gcc/reg-stack.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/regcprop.o:                    $(SRCROOT)/gcc/regcprop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/reginfo.o:                     $(SRCROOT)/gcc/reginfo.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/regmove.o:                     $(SRCROOT)/gcc/regmove.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/regrename.o:                   $(SRCROOT)/gcc/regrename.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/regstat.o:                     $(SRCROOT)/gcc/regstat.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/reload.o:                      $(SRCROOT)/gcc/reload.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/reload1.o:                     $(SRCROOT)/gcc/reload1.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/reorg.o:                       $(SRCROOT)/gcc/reorg.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/resource.o:                    $(SRCROOT)/gcc/resource.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/rtl-error.o:                   $(SRCROOT)/gcc/rtl-error.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/rtl.o:                         $(SRCROOT)/gcc/rtl.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/rtlanal.o:                     $(SRCROOT)/gcc/rtlanal.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/rtlhooks.o:                    $(SRCROOT)/gcc/rtlhooks.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sbitmap.o:                     $(SRCROOT)/gcc/sbitmap.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sched-deps.o:                  $(SRCROOT)/gcc/sched-deps.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sched-ebb.o:                   $(SRCROOT)/gcc/sched-ebb.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sched-rgn.o:                   $(SRCROOT)/gcc/sched-rgn.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sched-vis.o:                   $(SRCROOT)/gcc/sched-vis.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sdbout.o:                      $(SRCROOT)/gcc/sdbout.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sel-sched-ir.o:                $(SRCROOT)/gcc/sel-sched-ir.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sel-sched-dump.o:              $(SRCROOT)/gcc/sel-sched-dump.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sel-sched.o:                   $(SRCROOT)/gcc/sel-sched.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sese.o:                        $(SRCROOT)/gcc/sese.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/simplify-rtx.o:                $(SRCROOT)/gcc/simplify-rtx.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sparseset.o:                   $(SRCROOT)/gcc/sparseset.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/sreal.o:                       $(SRCROOT)/gcc/sreal.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/stack-ptr-mod.o:               $(SRCROOT)/gcc/stack-ptr-mod.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/statistics.o:                  $(SRCROOT)/gcc/statistics.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/stmt.o:                        $(SRCROOT)/gcc/stmt.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/stor-layout.o:                 $(SRCROOT)/gcc/stor-layout.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/store-motion.o:                $(SRCROOT)/gcc/store-motion.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/streamer-hooks.o:              $(SRCROOT)/gcc/streamer-hooks.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/stringpool.o:                  $(SRCROOT)/gcc/stringpool.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/target-globals.o:              $(SRCROOT)/gcc/target-globals.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/targhooks.o:                   $(SRCROOT)/gcc/targhooks.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/timevar.o:                     $(SRCROOT)/gcc/timevar.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/toplev.o:                      $(SRCROOT)/gcc/toplev.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS -DTARGET_NAME=\"i686-pc-mingw32\" -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include -Igcc -Igmp -I$(SRCROOT)/mpfr/src -I$(SRCROOT)/mpc/src -c $^ -o $@

o/gcc/tracer.o:                      $(SRCROOT)/gcc/tracer.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/trans-mem.o:                   $(SRCROOT)/gcc/trans-mem.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-affine.o:                 $(SRCROOT)/gcc/tree-affine.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-call-cdce.o:              $(SRCROOT)/gcc/tree-call-cdce.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-cfg.o:                    $(SRCROOT)/gcc/tree-cfg.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-cfgcleanup.o:             $(SRCROOT)/gcc/tree-cfgcleanup.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-chrec.o:                  $(SRCROOT)/gcc/tree-chrec.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-complex.o:                $(SRCROOT)/gcc/tree-complex.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-data-ref.o:               $(SRCROOT)/gcc/tree-data-ref.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-dfa.o:                    $(SRCROOT)/gcc/tree-dfa.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-diagnostic.o:             $(SRCROOT)/gcc/tree-diagnostic.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-dump.o:                   $(SRCROOT)/gcc/tree-dump.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-eh.o:                     $(SRCROOT)/gcc/tree-eh.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-emutls.o:                 $(SRCROOT)/gcc/tree-emutls.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-if-conv.o:                $(SRCROOT)/gcc/tree-if-conv.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-inline.o:                 $(SRCROOT)/gcc/tree-inline.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-into-ssa.o:               $(SRCROOT)/gcc/tree-into-ssa.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-iterator.o:               $(SRCROOT)/gcc/tree-iterator.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-loop-distribution.o:      $(SRCROOT)/gcc/tree-loop-distribution.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-nested.o:                 $(SRCROOT)/gcc/tree-nested.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-nomudflap.o:              $(SRCROOT)/gcc/tree-nomudflap.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-nrv.o:                    $(SRCROOT)/gcc/tree-nrv.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-object-size.o:            $(SRCROOT)/gcc/tree-object-size.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-optimize.o:               $(SRCROOT)/gcc/tree-optimize.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-outof-ssa.o:              $(SRCROOT)/gcc/tree-outof-ssa.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-parloops.o:               $(SRCROOT)/gcc/tree-parloops.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-phinodes.o:               $(SRCROOT)/gcc/tree-phinodes.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-predcom.o:                $(SRCROOT)/gcc/tree-predcom.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-pretty-print.o:           $(SRCROOT)/gcc/tree-pretty-print.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-profile.o:                $(SRCROOT)/gcc/tree-profile.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-scalar-evolution.o:       $(SRCROOT)/gcc/tree-scalar-evolution.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-sra.o:                    $(SRCROOT)/gcc/tree-sra.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-switch-conversion.o:      $(SRCROOT)/gcc/tree-switch-conversion.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-address.o:            $(SRCROOT)/gcc/tree-ssa-address.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-alias.o:              $(SRCROOT)/gcc/tree-ssa-alias.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-ccp.o:                $(SRCROOT)/gcc/tree-ssa-ccp.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-coalesce.o:           $(SRCROOT)/gcc/tree-ssa-coalesce.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-copy.o:               $(SRCROOT)/gcc/tree-ssa-copy.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-copyrename.o:         $(SRCROOT)/gcc/tree-ssa-copyrename.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-dce.o:                $(SRCROOT)/gcc/tree-ssa-dce.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-dom.o:                $(SRCROOT)/gcc/tree-ssa-dom.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-dse.o:                $(SRCROOT)/gcc/tree-ssa-dse.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-forwprop.o:           $(SRCROOT)/gcc/tree-ssa-forwprop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-ifcombine.o:          $(SRCROOT)/gcc/tree-ssa-ifcombine.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-live.o:               $(SRCROOT)/gcc/tree-ssa-live.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop-ch.o:            $(SRCROOT)/gcc/tree-ssa-loop-ch.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop-im.o:            $(SRCROOT)/gcc/tree-ssa-loop-im.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop-ivcanon.o:       $(SRCROOT)/gcc/tree-ssa-loop-ivcanon.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop-ivopts.o:        $(SRCROOT)/gcc/tree-ssa-loop-ivopts.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop-manip.o:         $(SRCROOT)/gcc/tree-ssa-loop-manip.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop-niter.o:         $(SRCROOT)/gcc/tree-ssa-loop-niter.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop-prefetch.o:      $(SRCROOT)/gcc/tree-ssa-loop-prefetch.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop-unswitch.o:      $(SRCROOT)/gcc/tree-ssa-loop-unswitch.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-loop.o:               $(SRCROOT)/gcc/tree-ssa-loop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-math-opts.o:          $(SRCROOT)/gcc/tree-ssa-math-opts.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-operands.o:           $(SRCROOT)/gcc/tree-ssa-operands.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-phiopt.o:             $(SRCROOT)/gcc/tree-ssa-phiopt.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-phiprop.o:            $(SRCROOT)/gcc/tree-ssa-phiprop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-pre.o:                $(SRCROOT)/gcc/tree-ssa-pre.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-propagate.o:          $(SRCROOT)/gcc/tree-ssa-propagate.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-reassoc.o:            $(SRCROOT)/gcc/tree-ssa-reassoc.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-sccvn.o:              $(SRCROOT)/gcc/tree-ssa-sccvn.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-sink.o:               $(SRCROOT)/gcc/tree-ssa-sink.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-strlen.o:             $(SRCROOT)/gcc/tree-ssa-strlen.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-structalias.o:        $(SRCROOT)/gcc/tree-ssa-structalias.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-tail-merge.o:         $(SRCROOT)/gcc/tree-ssa-tail-merge.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-ter.o:                $(SRCROOT)/gcc/tree-ssa-ter.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-threadedge.o:         $(SRCROOT)/gcc/tree-ssa-threadedge.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-threadupdate.o:       $(SRCROOT)/gcc/tree-ssa-threadupdate.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-uncprop.o:            $(SRCROOT)/gcc/tree-ssa-uncprop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa-uninit.o:             $(SRCROOT)/gcc/tree-ssa-uninit.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssa.o:                    $(SRCROOT)/gcc/tree-ssa.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-ssanames.o:               $(SRCROOT)/gcc/tree-ssanames.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-stdarg.o:                 $(SRCROOT)/gcc/tree-stdarg.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-streamer.o:               $(SRCROOT)/gcc/tree-streamer.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-streamer-in.o:            $(SRCROOT)/gcc/tree-streamer-in.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-streamer-out.o:           $(SRCROOT)/gcc/tree-streamer-out.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-tailcall.o:               $(SRCROOT)/gcc/tree-tailcall.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vect-generic.o:           $(SRCROOT)/gcc/tree-vect-generic.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vect-patterns.o:          $(SRCROOT)/gcc/tree-vect-patterns.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vect-data-refs.o:         $(SRCROOT)/gcc/tree-vect-data-refs.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vect-stmts.o:             $(SRCROOT)/gcc/tree-vect-stmts.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vect-loop.o:              $(SRCROOT)/gcc/tree-vect-loop.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vect-loop-manip.o:        $(SRCROOT)/gcc/tree-vect-loop-manip.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vect-slp.o:               $(SRCROOT)/gcc/tree-vect-slp.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vectorizer.o:             $(SRCROOT)/gcc/tree-vectorizer.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree-vrp.o:                    $(SRCROOT)/gcc/tree-vrp.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/tree.o:                        $(SRCROOT)/gcc/tree.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/value-prof.o:                  $(SRCROOT)/gcc/value-prof.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/var-tracking.o:                $(SRCROOT)/gcc/var-tracking.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/varasm.o:                      $(SRCROOT)/gcc/varasm.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/varpool.o:                     $(SRCROOT)/gcc/varpool.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/vmsdbgout.o:                   $(SRCROOT)/gcc/vmsdbgout.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/web.o:                         $(SRCROOT)/gcc/web.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/xcoffout.o:                    $(SRCROOT)/gcc/xcoffout.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/i386.o:                        $(SRCROOT)/gcc/config/i386/i386.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/winnt.o:                       $(SRCROOT)/gcc/config/i386/winnt.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/winnt-stubs.o:                 $(SRCROOT)/gcc/config/i386/winnt-stubs.c
	gcc $(F_GCC) -c $^ -o $@

o/gcc/host-mingw32.o:                $(SRCROOT)/gcc/config/i386/host-mingw32.c
	gcc $(F_GCC) -c $^ -o $@

  # }

  # }

 # o -> a  {

o/gcc/libbackend.a: o/gcc/insn-attrtab.o                \
                    o/gcc/insn-automata.o               \
                    o/gcc/insn-emit.o                   \
                    o/gcc/insn-extract.o                \
                    o/gcc/insn-modes.o                  \
                    o/gcc/insn-opinit.o                 \
                    o/gcc/insn-output.o                 \
                    o/gcc/insn-peep.o                   \
                    o/gcc/insn-preds.o                  \
                    o/gcc/insn-recog.o                  \
                    o/gcc/insn-enums.o                  \
                    o/gcc/ggc-page.o                    \
                    o/gcc/alias.o                       \
                    o/gcc/alloc-pool.o                  \
                    o/gcc/auto-inc-dec.o                \
                    o/gcc/bb-reorder.o                  \
                    o/gcc/bitmap.o                      \
                    o/gcc/bt-load.o                     \
                    o/gcc/builtins.o                    \
                    o/gcc/caller-save.o                 \
                    o/gcc/calls.o                       \
                    o/gcc/cfg.o                         \
                    o/gcc/cfganal.o                     \
                    o/gcc/cfgbuild.o                    \
                    o/gcc/cfgcleanup.o                  \
                    o/gcc/cfgexpand.o                   \
                    o/gcc/cfghooks.o                    \
                    o/gcc/cfglayout.o                   \
                    o/gcc/cfgloop.o                     \
                    o/gcc/cfgloopanal.o                 \
                    o/gcc/cfgloopmanip.o                \
                    o/gcc/cfgrtl.o                      \
                    o/gcc/cgraph.o                      \
                    o/gcc/cgraphbuild.o                 \
                    o/gcc/cgraphunit.o                  \
                    o/gcc/combine.o                     \
                    o/gcc/combine-stack-adj.o           \
                    o/gcc/compare-elim.o                \
                    o/gcc/convert.o                     \
                    o/gcc/coverage.o                    \
                    o/gcc/cppbuiltin.o                  \
                    o/gcc/cppdefault.o                  \
                    o/gcc/cprop.o                       \
                    o/gcc/cse.o                         \
                    o/gcc/cselib.o                      \
                    o/gcc/data-streamer.o               \
                    o/gcc/data-streamer-in.o            \
                    o/gcc/data-streamer-out.o           \
                    o/gcc/dbxout.o                      \
                    o/gcc/dbgcnt.o                      \
                    o/gcc/dce.o                         \
                    o/gcc/ddg.o                         \
                    o/gcc/debug.o                       \
                    o/gcc/df-core.o                     \
                    o/gcc/df-problems.o                 \
                    o/gcc/df-scan.o                     \
                    o/gcc/dfp.o                         \
                    o/gcc/dojump.o                      \
                    o/gcc/dominance.o                   \
                    o/gcc/domwalk.o                     \
                    o/gcc/double-int.o                  \
                    o/gcc/dse.o                         \
                    o/gcc/dwarf2asm.o                   \
                    o/gcc/dwarf2cfi.o                   \
                    o/gcc/dwarf2out.o                   \
                    o/gcc/ebitmap.o                     \
                    o/gcc/emit-rtl.o                    \
                    o/gcc/et-forest.o                   \
                    o/gcc/except.o                      \
                    o/gcc/explow.o                      \
                    o/gcc/expmed.o                      \
                    o/gcc/expr.o                        \
                    o/gcc/final.o                       \
                    o/gcc/fixed-value.o                 \
                    o/gcc/fold-const.o                  \
                    o/gcc/function.o                    \
                    o/gcc/fwprop.o                      \
                    o/gcc/gcse.o                        \
                    o/gcc/ggc-common.o                  \
                    o/gcc/gimple.o                      \
                    o/gcc/gimple-iterator.o             \
                    o/gcc/gimple-fold.o                 \
                    o/gcc/gimple-low.o                  \
                    o/gcc/gimple-pretty-print.o         \
                    o/gcc/gimple-streamer-in.o          \
                    o/gcc/gimple-streamer-out.o         \
                    o/gcc/gimplify.o                    \
                    o/gcc/godump.o                      \
                    o/gcc/graph.o                       \
                    o/gcc/graphds.o                     \
                    o/gcc/graphite.o                    \
                    o/gcc/graphite-blocking.o           \
                    o/gcc/graphite-clast-to-gimple.o    \
                    o/gcc/graphite-cloog-util.o         \
                    o/gcc/graphite-dependences.o        \
                    o/gcc/graphite-flattening.o         \
                    o/gcc/graphite-interchange.o        \
                    o/gcc/graphite-poly.o               \
                    o/gcc/graphite-ppl.o                \
                    o/gcc/graphite-scop-detection.o     \
                    o/gcc/graphite-sese-to-poly.o       \
                    o/gcc/gtype-desc.o                  \
                    o/gcc/haifa-sched.o                 \
                    o/gcc/hw-doloop.o                   \
                    o/gcc/hwint.o                       \
                    o/gcc/ifcvt.o                       \
                    o/gcc/ree.o                         \
                    o/gcc/incpath.o                     \
                    o/gcc/init-regs.o                   \
                    o/gcc/integrate.o                   \
                    o/gcc/internal-fn.o                 \
                    o/gcc/ipa-cp.o                      \
                    o/gcc/ipa-split.o                   \
                    o/gcc/ipa-inline.o                  \
                    o/gcc/ipa-inline-analysis.o         \
                    o/gcc/ipa-inline-transform.o        \
                    o/gcc/ipa-prop.o                    \
                    o/gcc/ipa-pure-const.o              \
                    o/gcc/ipa-reference.o               \
                    o/gcc/ipa-ref.o                     \
                    o/gcc/ipa-utils.o                   \
                    o/gcc/ipa.o                         \
                    o/gcc/ira.o                         \
                    o/gcc/ira-build.o                   \
                    o/gcc/ira-costs.o                   \
                    o/gcc/ira-conflicts.o               \
                    o/gcc/ira-color.o                   \
                    o/gcc/ira-emit.o                    \
                    o/gcc/ira-lives.o                   \
                    o/gcc/jump.o                        \
                    o/gcc/langhooks.o                   \
                    o/gcc/lcm.o                         \
                    o/gcc/lists.o                       \
                    o/gcc/loop-doloop.o                 \
                    o/gcc/loop-init.o                   \
                    o/gcc/loop-invariant.o              \
                    o/gcc/loop-iv.o                     \
                    o/gcc/loop-unroll.o                 \
                    o/gcc/loop-unswitch.o               \
                    o/gcc/lower-subreg.o                \
                    o/gcc/lto-cgraph.o                  \
                    o/gcc/lto-streamer.o                \
                    o/gcc/lto-streamer-in.o             \
                    o/gcc/lto-streamer-out.o            \
                    o/gcc/lto-section-in.o              \
                    o/gcc/lto-section-out.o             \
                    o/gcc/lto-symtab.o                  \
                    o/gcc/lto-opts.o                    \
                    o/gcc/lto-compress.o                \
                    o/gcc/matrix-reorg.o                \
                    o/gcc/mcf.o                         \
                    o/gcc/mode-switching.o              \
                    o/gcc/modulo-sched.o                \
                    o/gcc/omega.o                       \
                    o/gcc/omp-low.o                     \
                    o/gcc/optabs.o                      \
                    o/gcc/options-save.o                \
                    o/gcc/opts-global.o                 \
                    o/gcc/passes.o                      \
                    o/gcc/plugin.o                      \
                    o/gcc/pointer-set.o                 \
                    o/gcc/postreload-gcse.o             \
                    o/gcc/postreload.o                  \
                    o/gcc/predict.o                     \
                    o/gcc/print-rtl.o                   \
                    o/gcc/print-tree.o                  \
                    o/gcc/profile.o                     \
                    o/gcc/real.o                        \
                    o/gcc/realmpfr.o                    \
                    o/gcc/recog.o                       \
                    o/gcc/reg-stack.o                   \
                    o/gcc/regcprop.o                    \
                    o/gcc/reginfo.o                     \
                    o/gcc/regmove.o                     \
                    o/gcc/regrename.o                   \
                    o/gcc/regstat.o                     \
                    o/gcc/reload.o                      \
                    o/gcc/reload1.o                     \
                    o/gcc/reorg.o                       \
                    o/gcc/resource.o                    \
                    o/gcc/rtl-error.o                   \
                    o/gcc/rtl.o                         \
                    o/gcc/rtlanal.o                     \
                    o/gcc/rtlhooks.o                    \
                    o/gcc/sbitmap.o                     \
                    o/gcc/sched-deps.o                  \
                    o/gcc/sched-ebb.o                   \
                    o/gcc/sched-rgn.o                   \
                    o/gcc/sched-vis.o                   \
                    o/gcc/sdbout.o                      \
                    o/gcc/sel-sched-ir.o                \
                    o/gcc/sel-sched-dump.o              \
                    o/gcc/sel-sched.o                   \
                    o/gcc/sese.o                        \
                    o/gcc/simplify-rtx.o                \
                    o/gcc/sparseset.o                   \
                    o/gcc/sreal.o                       \
                    o/gcc/stack-ptr-mod.o               \
                    o/gcc/statistics.o                  \
                    o/gcc/stmt.o                        \
                    o/gcc/stor-layout.o                 \
                    o/gcc/store-motion.o                \
                    o/gcc/streamer-hooks.o              \
                    o/gcc/stringpool.o                  \
                    o/gcc/target-globals.o              \
                    o/gcc/targhooks.o                   \
                    o/gcc/timevar.o                     \
                    o/gcc/toplev.o                      \
                    o/gcc/tracer.o                      \
                    o/gcc/trans-mem.o                   \
                    o/gcc/tree-affine.o                 \
                    o/gcc/tree-call-cdce.o              \
                    o/gcc/tree-cfg.o                    \
                    o/gcc/tree-cfgcleanup.o             \
                    o/gcc/tree-chrec.o                  \
                    o/gcc/tree-complex.o                \
                    o/gcc/tree-data-ref.o               \
                    o/gcc/tree-dfa.o                    \
                    o/gcc/tree-diagnostic.o             \
                    o/gcc/tree-dump.o                   \
                    o/gcc/tree-eh.o                     \
                    o/gcc/tree-emutls.o                 \
                    o/gcc/tree-if-conv.o                \
                    o/gcc/tree-inline.o                 \
                    o/gcc/tree-into-ssa.o               \
                    o/gcc/tree-iterator.o               \
                    o/gcc/tree-loop-distribution.o      \
                    o/gcc/tree-nested.o                 \
                    o/gcc/tree-nomudflap.o              \
                    o/gcc/tree-nrv.o                    \
                    o/gcc/tree-object-size.o            \
                    o/gcc/tree-optimize.o               \
                    o/gcc/tree-outof-ssa.o              \
                    o/gcc/tree-parloops.o               \
                    o/gcc/tree-phinodes.o               \
                    o/gcc/tree-predcom.o                \
                    o/gcc/tree-pretty-print.o           \
                    o/gcc/tree-profile.o                \
                    o/gcc/tree-scalar-evolution.o       \
                    o/gcc/tree-sra.o                    \
                    o/gcc/tree-switch-conversion.o      \
                    o/gcc/tree-ssa-address.o            \
                    o/gcc/tree-ssa-alias.o              \
                    o/gcc/tree-ssa-ccp.o                \
                    o/gcc/tree-ssa-coalesce.o           \
                    o/gcc/tree-ssa-copy.o               \
                    o/gcc/tree-ssa-copyrename.o         \
                    o/gcc/tree-ssa-dce.o                \
                    o/gcc/tree-ssa-dom.o                \
                    o/gcc/tree-ssa-dse.o                \
                    o/gcc/tree-ssa-forwprop.o           \
                    o/gcc/tree-ssa-ifcombine.o          \
                    o/gcc/tree-ssa-live.o               \
                    o/gcc/tree-ssa-loop-ch.o            \
                    o/gcc/tree-ssa-loop-im.o            \
                    o/gcc/tree-ssa-loop-ivcanon.o       \
                    o/gcc/tree-ssa-loop-ivopts.o        \
                    o/gcc/tree-ssa-loop-manip.o         \
                    o/gcc/tree-ssa-loop-niter.o         \
                    o/gcc/tree-ssa-loop-prefetch.o      \
                    o/gcc/tree-ssa-loop-unswitch.o      \
                    o/gcc/tree-ssa-loop.o               \
                    o/gcc/tree-ssa-math-opts.o          \
                    o/gcc/tree-ssa-operands.o           \
                    o/gcc/tree-ssa-phiopt.o             \
                    o/gcc/tree-ssa-phiprop.o            \
                    o/gcc/tree-ssa-pre.o                \
                    o/gcc/tree-ssa-propagate.o          \
                    o/gcc/tree-ssa-reassoc.o            \
                    o/gcc/tree-ssa-sccvn.o              \
                    o/gcc/tree-ssa-sink.o               \
                    o/gcc/tree-ssa-strlen.o             \
                    o/gcc/tree-ssa-structalias.o        \
                    o/gcc/tree-ssa-tail-merge.o         \
                    o/gcc/tree-ssa-ter.o                \
                    o/gcc/tree-ssa-threadedge.o         \
                    o/gcc/tree-ssa-threadupdate.o       \
                    o/gcc/tree-ssa-uncprop.o            \
                    o/gcc/tree-ssa-uninit.o             \
                    o/gcc/tree-ssa.o                    \
                    o/gcc/tree-ssanames.o               \
                    o/gcc/tree-stdarg.o                 \
                    o/gcc/tree-streamer.o               \
                    o/gcc/tree-streamer-in.o            \
                    o/gcc/tree-streamer-out.o           \
                    o/gcc/tree-tailcall.o               \
                    o/gcc/tree-vect-generic.o           \
                    o/gcc/tree-vect-patterns.o          \
                    o/gcc/tree-vect-data-refs.o         \
                    o/gcc/tree-vect-stmts.o             \
                    o/gcc/tree-vect-loop.o              \
                    o/gcc/tree-vect-loop-manip.o        \
                    o/gcc/tree-vect-slp.o               \
                    o/gcc/tree-vectorizer.o             \
                    o/gcc/tree-vrp.o                    \
                    o/gcc/tree.o                        \
                    o/gcc/value-prof.o                  \
                    o/gcc/var-tracking.o                \
                    o/gcc/varasm.o                      \
                    o/gcc/varpool.o                     \
                    o/gcc/vmsdbgout.o                   \
                    o/gcc/web.o                         \
                    o/gcc/xcoffout.o                    \
                    o/gcc/i386.o                        \
                    o/gcc/winnt.o                       \
                    o/gcc/winnt-stubs.o                 \
                    o/gcc/host-mingw32.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

  # }

# }

# gcc Frontend.             {

F_GCC_FRONTEND=-DIN_GCC_FRONTEND -DIN_GCC -D__USE_MINGW_ACCESS -DHAVE_CONFIG_H -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include -Igmp

o/gcc/attribs.o:                     $(SRCROOT)/gcc/attribs.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/c-lang.o:                      $(SRCROOT)/gcc/c-lang.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/c-errors.o:                    $(SRCROOT)/gcc/c-errors.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/c-decl.o:                      $(SRCROOT)/gcc/c-decl.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/c-typeck.o:                    $(SRCROOT)/gcc/c-typeck.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/c-convert.o:                   $(SRCROOT)/gcc/c-convert.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/c-aux-info.o:                  $(SRCROOT)/gcc/c-aux-info.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/c-objc-common.o:               $(SRCROOT)/gcc/c-objc-common.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/c-parser.o:                    $(SRCROOT)/gcc/c-parser.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

o/gcc/tree-mudflap.o:                $(SRCROOT)/gcc/tree-mudflap.c
	gcc $(F_GCC_FRONTEND) -c $^ -o $@

  # c-family {

F_C_FAMILY=$(F_GCC_FRONTEND)

o/gcc/c-family/stub-objc.o:          $(SRCROOT)/gcc/c-family/stub-objc.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-common.o:           $(SRCROOT)/gcc/c-family/c-common.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-cppbuiltin.o:       $(SRCROOT)/gcc/c-family/c-cppbuiltin.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-dump.o:             $(SRCROOT)/gcc/c-family/c-dump.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-format.o:           $(SRCROOT)/gcc/c-family/c-format.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-gimplify.o:         $(SRCROOT)/gcc/c-family/c-gimplify.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-lex.o:              $(SRCROOT)/gcc/c-family/c-lex.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-omp.o:              $(SRCROOT)/gcc/c-family/c-omp.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-opts.o:             $(SRCROOT)/gcc/c-family/c-opts.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-pch.o:              $(SRCROOT)/gcc/c-family/c-pch.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-ppoutput.o:         $(SRCROOT)/gcc/c-family/c-ppoutput.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-pragma.o:           $(SRCROOT)/gcc/c-family/c-pragma.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-pretty-print.o:     $(SRCROOT)/gcc/c-family/c-pretty-print.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-semantics.o:        $(SRCROOT)/gcc/c-family/c-semantics.c
	gcc $(F_C_FAMILY) -c $^ -o $@

o/gcc/c-family/c-ada-spec.o:         $(SRCROOT)/gcc/c-family/c-ada-spec.c
	gcc $(F_C_FAMILY) -c $^ -o $@

  # }

F_OTHERS=$(F_GCC_FRONTEND)
o/gcc/i386-c.o:                      $(SRCROOT)/gcc/config/i386/i386-c.c
	gcc $(F_OTHERS) -c $^ -o $@

o/gcc/msformat-c.o:                  $(SRCROOT)/gcc/config/i386/msformat-c.c
	gcc $(F_OTHERS) -c $^ -o $@

o/gcc/default-c.o:                   $(SRCROOT)/gcc/config/default-c.c
	gcc $(F_OTHERS) -c $^ -o $@

o/gcc/cc1-checksum.o:                ./gcc/cc1-checksum.c
	gcc $(F_OTHERS) -c $^ -o $@

o/gcc/main.o:                        $(SRCROOT)/gcc/main.c
	gcc $(F_OTHERS) -c $^ -o $@

# }

# mpc                       {

  #  c -> o {

D_MPC=$(DEFS)
I_MPC=-Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/mpc/src -I$(SRCROOT)/mpfr/src -Igmp
F_MPC=$(D_MPC) $(I_MPC)

o/mpc/abs.o:                         $(SRCROOT)/mpc/src/abs.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/acos.o:                        $(SRCROOT)/mpc/src/acos.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/acosh.o:                       $(SRCROOT)/mpc/src/acosh.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/add.o:                         $(SRCROOT)/mpc/src/add.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/add_fr.o:                      $(SRCROOT)/mpc/src/add_fr.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/add_si.o:                      $(SRCROOT)/mpc/src/add_si.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/add_ui.o:                      $(SRCROOT)/mpc/src/add_ui.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/arg.o:                         $(SRCROOT)/mpc/src/arg.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/asin.o:                        $(SRCROOT)/mpc/src/asin.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/asinh.o:                       $(SRCROOT)/mpc/src/asinh.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/atan.o:                        $(SRCROOT)/mpc/src/atan.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/atanh.o:                       $(SRCROOT)/mpc/src/atanh.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/clear.o:                        $(SRCROOT)/mpc/src/clear.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/cmp.o:                         $(SRCROOT)/mpc/src/cmp.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/cmp_si_si.o:                   $(SRCROOT)/mpc/src/cmp_si_si.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/conj.o:                        $(SRCROOT)/mpc/src/conj.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/cosh.o:                        $(SRCROOT)/mpc/src/cosh.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/div_2exp.o:                    $(SRCROOT)/mpc/src/div_2exp.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/div.o:                         $(SRCROOT)/mpc/src/div.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/div_fr.o:                      $(SRCROOT)/mpc/src/div_fr.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/div_ui.o:                      $(SRCROOT)/mpc/src/div_ui.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/exp.o:                         $(SRCROOT)/mpc/src/exp.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/fma.o:                         $(SRCROOT)/mpc/src/fma.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/fr_div.o:                      $(SRCROOT)/mpc/src/fr_div.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/fr_sub.o:                      $(SRCROOT)/mpc/src/fr_sub.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/get.o:                         $(SRCROOT)/mpc/src/get.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/get_prec2.o:                   $(SRCROOT)/mpc/src/get_prec2.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/get_prec.o:                    $(SRCROOT)/mpc/src/get_prec.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/get_str.o:                     $(SRCROOT)/mpc/src/get_str.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/get_version.o:                 $(SRCROOT)/mpc/src/get_version.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/imag.o:                        $(SRCROOT)/mpc/src/imag.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/init2.o:                       $(SRCROOT)/mpc/src/init2.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/init3.o:                       $(SRCROOT)/mpc/src/init3.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/inp_str.o:                     $(SRCROOT)/mpc/src/inp_str.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/log.o:                         $(SRCROOT)/mpc/src/log.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/mem.o:                         $(SRCROOT)/mpc/src/mem.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/mul_2exp.o:                    $(SRCROOT)/mpc/src/mul_2exp.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/mul.o:                         $(SRCROOT)/mpc/src/mul.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/mul_fr.o:                      $(SRCROOT)/mpc/src/mul_fr.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/mul_i.o:                       $(SRCROOT)/mpc/src/mul_i.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/mul_si.o:                      $(SRCROOT)/mpc/src/mul_si.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/mul_ui.o:                      $(SRCROOT)/mpc/src/mul_ui.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/neg.o:                         $(SRCROOT)/mpc/src/neg.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/norm.o:                        $(SRCROOT)/mpc/src/norm.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/out_str.o:                     $(SRCROOT)/mpc/src/out_str.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/pow.o:                         $(SRCROOT)/mpc/src/pow.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/pow_fr.o:                      $(SRCROOT)/mpc/src/pow_fr.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/pow_ld.o:                      $(SRCROOT)/mpc/src/pow_ld.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/pow_d.o:                       $(SRCROOT)/mpc/src/pow_d.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/pow_si.o:                      $(SRCROOT)/mpc/src/pow_si.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/pow_ui.o:                      $(SRCROOT)/mpc/src/pow_ui.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/pow_z.o:                       $(SRCROOT)/mpc/src/pow_z.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/proj.o:                        $(SRCROOT)/mpc/src/proj.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/real.o:                        $(SRCROOT)/mpc/src/real.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/urandom.o:                     $(SRCROOT)/mpc/src/urandom.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/set.o:                         $(SRCROOT)/mpc/src/set.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/set_prec.o:                    $(SRCROOT)/mpc/src/set_prec.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/set_str.o:                     $(SRCROOT)/mpc/src/set_str.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/set_x.o:                       $(SRCROOT)/mpc/src/set_x.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/set_x_x.o:                     $(SRCROOT)/mpc/src/set_x_x.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/sin_cos.o:                     $(SRCROOT)/mpc/src/sin_cos.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/sinh.o:                        $(SRCROOT)/mpc/src/sinh.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/sqr.o:                         $(SRCROOT)/mpc/src/sqr.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/sqrt.o:                        $(SRCROOT)/mpc/src/sqrt.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/strtoc.o:                      $(SRCROOT)/mpc/src/strtoc.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/sub.o:                         $(SRCROOT)/mpc/src/sub.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/sub_fr.o:                      $(SRCROOT)/mpc/src/sub_fr.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/sub_ui.o:                      $(SRCROOT)/mpc/src/sub_ui.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/swap.o:                        $(SRCROOT)/mpc/src/swap.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/tan.o:                         $(SRCROOT)/mpc/src/tan.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/tanh.o:                        $(SRCROOT)/mpc/src/tanh.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/uceil_log2.o:                  $(SRCROOT)/mpc/src/uceil_log2.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/ui_div.o:                      $(SRCROOT)/mpc/src/ui_div.c
	gcc $(F_MPC) -c $^ -o $@

o/mpc/ui_ui_sub.o:                   $(SRCROOT)/mpc/src/ui_ui_sub.c
	gcc $(F_MPC) -c $^ -o $@


	# }

	#  o -> a {

o/mpc/libmpc.a: o/mpc/abs.o           \
                o/mpc/acos.o          \
                o/mpc/acosh.o         \
                o/mpc/add.o           \
                o/mpc/add_fr.o        \
                o/mpc/add_si.o        \
                o/mpc/add_ui.o        \
                o/mpc/arg.o           \
                o/mpc/asin.o          \
                o/mpc/asinh.o         \
                o/mpc/atan.o          \
                o/mpc/atanh.o         \
                o/mpc/clear.o         \
                o/mpc/cmp.o           \
                o/mpc/cmp_si_si.o     \
                o/mpc/conj.o          \
                o/mpc/cosh.o          \
                o/mpc/div_2exp.o      \
                o/mpc/div.o           \
                o/mpc/div_fr.o        \
                o/mpc/div_ui.o        \
                o/mpc/exp.o           \
                o/mpc/fma.o           \
                o/mpc/fr_div.o        \
                o/mpc/fr_sub.o        \
                o/mpc/get.o           \
                o/mpc/get_prec2.o     \
                o/mpc/get_prec.o      \
                o/mpc/get_str.o       \
                o/mpc/get_version.o   \
                o/mpc/imag.o          \
                o/mpc/init2.o         \
                o/mpc/init3.o         \
                o/mpc/inp_str.o       \
                o/mpc/log.o           \
                o/mpc/mem.o           \
                o/mpc/mul_2exp.o      \
                o/mpc/mul.o           \
                o/mpc/mul_fr.o        \
                o/mpc/mul_i.o         \
                o/mpc/mul_si.o        \
                o/mpc/mul_ui.o        \
                o/mpc/neg.o           \
                o/mpc/norm.o          \
                o/mpc/out_str.o       \
                o/mpc/pow.o           \
                o/mpc/pow_fr.o        \
                o/mpc/pow_ld.o        \
                o/mpc/pow_d.o         \
                o/mpc/pow_si.o        \
                o/mpc/pow_ui.o        \
                o/mpc/pow_z.o         \
                o/mpc/proj.o          \
                o/mpc/real.o          \
                o/mpc/urandom.o       \
                o/mpc/set.o           \
                o/mpc/set_prec.o      \
                o/mpc/set_str.o       \
                o/mpc/set_x.o         \
                o/mpc/set_x_x.o       \
                o/mpc/sin_cos.o       \
                o/mpc/sinh.o          \
                o/mpc/sqr.o           \
                o/mpc/sqrt.o          \
                o/mpc/strtoc.o        \
                o/mpc/sub.o           \
                o/mpc/sub_fr.o        \
                o/mpc/sub_ui.o        \
                o/mpc/swap.o          \
                o/mpc/tan.o           \
                o/mpc/tanh.o          \
                o/mpc/uceil_log2.o    \
                o/mpc/ui_div.o        \
                o/mpc/ui_ui_sub.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

  # }

# }

# mpfr                      {

  # c -> o  {

D_MPFR=-D__USE_MINGW_ACCESS -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DTIME_WITH_SYS_TIME=1 -DHAVE_LOCALE_H=1 -DHAVE_WCHAR_H=1 -DHAVE_STDARG=1 -DHAVE_SYS_TIME_H=1 -DHAVE_VA_COPY=1 -DHAVE_SETLOCALE=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_LONG_LONG=1 -DHAVE_INTMAX_T=1 -DMPFR_HAVE_INTMAX_MAX=1 -DMPFR_HAVE_FESETROUND=1 -DHAVE_DENORMS=1 -DHAVE_ROUND=1 -DHAVE_TRUNC=1 -DHAVE_FLOOR=1 -DHAVE_CEIL=1 -DHAVE_NEARBYINT=1 -DHAVE_LDOUBLE_IEEE_EXT_LITTLE=1 -DMPFR_USE_THREAD_SAFE=1 -DLT_OBJDIR=\".libs/\" -DHAVE_ATTRIBUTE_MODE=1 -DNPRINTF_J=1 -DNPRINTF_L=1 -DNPRINTF_T=1 -DHAVE___GMPN_ROOTREM=1 -DHAVE___GMPN_SBPI1_DIVAPPR_Q=1
I_MPFR=-Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/mpc/src -I$(SRCROOT)/mpfr/src -Igmp -Impfr
F_MPFR=$(D_MPFR) $(I_MPFR)

o/mpfr/exceptions.o:                 $(SRCROOT)/mpfr/src/exceptions.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/extract.o:                    $(SRCROOT)/mpfr/src/extract.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/uceil_exp2.o:                 $(SRCROOT)/mpfr/src/uceil_exp2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/uceil_log2.o:                 $(SRCROOT)/mpfr/src/uceil_log2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/ufloor_log2.o:                $(SRCROOT)/mpfr/src/ufloor_log2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/add.o:                        $(SRCROOT)/mpfr/src/add.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/add1.o:                       $(SRCROOT)/mpfr/src/add1.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/add_ui.o:                     $(SRCROOT)/mpfr/src/add_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/agm.o:                        $(SRCROOT)/mpfr/src/agm.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/clear.o:                      $(SRCROOT)/mpfr/src/clear.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cmp.o:                        $(SRCROOT)/mpfr/src/cmp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cmp_abs.o:                    $(SRCROOT)/mpfr/src/cmp_abs.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cmp_si.o:                     $(SRCROOT)/mpfr/src/cmp_si.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cmp_ui.o:                     $(SRCROOT)/mpfr/src/cmp_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/comparisons.o:                $(SRCROOT)/mpfr/src/comparisons.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/div_2exp.o:                   $(SRCROOT)/mpfr/src/div_2exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/div_2si.o:                    $(SRCROOT)/mpfr/src/div_2si.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/div_2ui.o:                    $(SRCROOT)/mpfr/src/div_2ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/div.o:                        $(SRCROOT)/mpfr/src/div.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/div_ui.o:                     $(SRCROOT)/mpfr/src/div_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/dump.o:                       $(SRCROOT)/mpfr/src/dump.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/eq.o:                         $(SRCROOT)/mpfr/src/eq.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/exp10.o:                      $(SRCROOT)/mpfr/src/exp10.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/exp2.o:                       $(SRCROOT)/mpfr/src/exp2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/exp3.o:                       $(SRCROOT)/mpfr/src/exp3.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/exp.o:                        $(SRCROOT)/mpfr/src/exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/frac.o:                       $(SRCROOT)/mpfr/src/frac.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/frexp.o:                      $(SRCROOT)/mpfr/src/frexp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_d.o:                      $(SRCROOT)/mpfr/src/get_d.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_exp.o:                    $(SRCROOT)/mpfr/src/get_exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_str.o:                    $(SRCROOT)/mpfr/src/get_str.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/init.o:                       $(SRCROOT)/mpfr/src/init.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/inp_str.o:                    $(SRCROOT)/mpfr/src/inp_str.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/isinteger.o:                  $(SRCROOT)/mpfr/src/isinteger.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/isinf.o:                      $(SRCROOT)/mpfr/src/isinf.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/isnan.o:                      $(SRCROOT)/mpfr/src/isnan.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/isnum.o:                      $(SRCROOT)/mpfr/src/isnum.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/const_log2.o:                 $(SRCROOT)/mpfr/src/const_log2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/log.o:                        $(SRCROOT)/mpfr/src/log.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/modf.o:                       $(SRCROOT)/mpfr/src/modf.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mul_2exp.o:                   $(SRCROOT)/mpfr/src/mul_2exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mul_2si.o:                    $(SRCROOT)/mpfr/src/mul_2si.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mul_2ui.o:                    $(SRCROOT)/mpfr/src/mul_2ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mul.o:                        $(SRCROOT)/mpfr/src/mul.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mul_ui.o:                     $(SRCROOT)/mpfr/src/mul_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/neg.o:                        $(SRCROOT)/mpfr/src/neg.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/next.o:                       $(SRCROOT)/mpfr/src/next.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/out_str.o:                    $(SRCROOT)/mpfr/src/out_str.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/printf.o:                     $(SRCROOT)/mpfr/src/printf.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/vasprintf.o:                  $(SRCROOT)/mpfr/src/vasprintf.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/const_pi.o:                   $(SRCROOT)/mpfr/src/const_pi.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/pow.o:                        $(SRCROOT)/mpfr/src/pow.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/pow_si.o:                     $(SRCROOT)/mpfr/src/pow_si.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/pow_ui.o:                     $(SRCROOT)/mpfr/src/pow_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/print_raw.o:                  $(SRCROOT)/mpfr/src/print_raw.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/print_rnd_mode.o:             $(SRCROOT)/mpfr/src/print_rnd_mode.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/reldiff.o:                    $(SRCROOT)/mpfr/src/reldiff.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/round_prec.o:                 $(SRCROOT)/mpfr/src/round_prec.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set.o:                        $(SRCROOT)/mpfr/src/set.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/setmax.o:                     $(SRCROOT)/mpfr/src/setmax.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/setmin.o:                     $(SRCROOT)/mpfr/src/setmin.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_d.o:                      $(SRCROOT)/mpfr/src/set_d.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_dfl_prec.o:               $(SRCROOT)/mpfr/src/set_dfl_prec.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_exp.o:                    $(SRCROOT)/mpfr/src/set_exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_rnd.o:                    $(SRCROOT)/mpfr/src/set_rnd.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_f.o:                      $(SRCROOT)/mpfr/src/set_f.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_prc_raw.o:                $(SRCROOT)/mpfr/src/set_prc_raw.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_prec.o:                   $(SRCROOT)/mpfr/src/set_prec.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_q.o:                      $(SRCROOT)/mpfr/src/set_q.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_si.o:                     $(SRCROOT)/mpfr/src/set_si.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_str.o:                    $(SRCROOT)/mpfr/src/set_str.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_str_raw.o:                $(SRCROOT)/mpfr/src/set_str_raw.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_ui.o:                     $(SRCROOT)/mpfr/src/set_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_z.o:                      $(SRCROOT)/mpfr/src/set_z.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sqrt.o:                       $(SRCROOT)/mpfr/src/sqrt.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sqrt_ui.o:                    $(SRCROOT)/mpfr/src/sqrt_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sub.o:                        $(SRCROOT)/mpfr/src/sub.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sub1.o:                       $(SRCROOT)/mpfr/src/sub1.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sub_ui.o:                     $(SRCROOT)/mpfr/src/sub_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/rint.o:                       $(SRCROOT)/mpfr/src/rint.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/ui_div.o:                     $(SRCROOT)/mpfr/src/ui_div.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/ui_sub.o:                     $(SRCROOT)/mpfr/src/ui_sub.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/urandom.o:                    $(SRCROOT)/mpfr/src/urandom.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/urandomb.o:                   $(SRCROOT)/mpfr/src/urandomb.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_z_exp.o:                  $(SRCROOT)/mpfr/src/get_z_exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/swap.o:                       $(SRCROOT)/mpfr/src/swap.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/factorial.o:                  $(SRCROOT)/mpfr/src/factorial.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cosh.o:                       $(SRCROOT)/mpfr/src/cosh.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sinh.o:                       $(SRCROOT)/mpfr/src/sinh.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/tanh.o:                       $(SRCROOT)/mpfr/src/tanh.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sinh_cosh.o:                  $(SRCROOT)/mpfr/src/sinh_cosh.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/acosh.o:                      $(SRCROOT)/mpfr/src/acosh.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/asinh.o:                      $(SRCROOT)/mpfr/src/asinh.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/atanh.o:                      $(SRCROOT)/mpfr/src/atanh.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/atan.o:                       $(SRCROOT)/mpfr/src/atan.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cmp2.o:                       $(SRCROOT)/mpfr/src/cmp2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/exp_2.o:                      $(SRCROOT)/mpfr/src/exp_2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/asin.o:                       $(SRCROOT)/mpfr/src/asin.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/const_euler.o:                $(SRCROOT)/mpfr/src/const_euler.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cos.o:                        $(SRCROOT)/mpfr/src/cos.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sin.o:                        $(SRCROOT)/mpfr/src/sin.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/tan.o:                        $(SRCROOT)/mpfr/src/tan.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fma.o:                        $(SRCROOT)/mpfr/src/fma.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fms.o:                        $(SRCROOT)/mpfr/src/fms.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/hypot.o:                      $(SRCROOT)/mpfr/src/hypot.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/log1p.o:                      $(SRCROOT)/mpfr/src/log1p.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/expm1.o:                      $(SRCROOT)/mpfr/src/expm1.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/log2.o:                       $(SRCROOT)/mpfr/src/log2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/log10.o:                      $(SRCROOT)/mpfr/src/log10.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/ui_pow.o:                     $(SRCROOT)/mpfr/src/ui_pow.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/ui_pow_ui.o:                  $(SRCROOT)/mpfr/src/ui_pow_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/minmax.o:                     $(SRCROOT)/mpfr/src/minmax.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/dim.o:                        $(SRCROOT)/mpfr/src/dim.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/signbit.o:                    $(SRCROOT)/mpfr/src/signbit.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/copysign.o:                   $(SRCROOT)/mpfr/src/copysign.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/setsign.o:                    $(SRCROOT)/mpfr/src/setsign.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/gmp_op.o:                     $(SRCROOT)/mpfr/src/gmp_op.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/init2.o:                      $(SRCROOT)/mpfr/src/init2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/acos.o:                       $(SRCROOT)/mpfr/src/acos.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sin_cos.o:                    $(SRCROOT)/mpfr/src/sin_cos.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_nan.o:                    $(SRCROOT)/mpfr/src/set_nan.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_inf.o:                    $(SRCROOT)/mpfr/src/set_inf.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_zero.o:                   $(SRCROOT)/mpfr/src/set_zero.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/powerof2.o:                   $(SRCROOT)/mpfr/src/powerof2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/gamma.o:                      $(SRCROOT)/mpfr/src/gamma.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_ld.o:                     $(SRCROOT)/mpfr/src/set_ld.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_ld.o:                     $(SRCROOT)/mpfr/src/get_ld.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cbrt.o:                       $(SRCROOT)/mpfr/src/cbrt.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/volatile.o:                   $(SRCROOT)/mpfr/src/volatile.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fits_sshort.o:                $(SRCROOT)/mpfr/src/fits_sshort.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fits_sint.o:                  $(SRCROOT)/mpfr/src/fits_sint.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fits_slong.o:                 $(SRCROOT)/mpfr/src/fits_slong.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fits_ushort.o:                $(SRCROOT)/mpfr/src/fits_ushort.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fits_uint.o:                  $(SRCROOT)/mpfr/src/fits_uint.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fits_ulong.o:                 $(SRCROOT)/mpfr/src/fits_ulong.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fits_uintmax.o:               $(SRCROOT)/mpfr/src/fits_uintmax.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/fits_intmax.o:                $(SRCROOT)/mpfr/src/fits_intmax.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_si.o:                     $(SRCROOT)/mpfr/src/get_si.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_ui.o:                     $(SRCROOT)/mpfr/src/get_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/zeta.o:                       $(SRCROOT)/mpfr/src/zeta.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cmp_d.o:                      $(SRCROOT)/mpfr/src/cmp_d.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/erf.o:                        $(SRCROOT)/mpfr/src/erf.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/inits.o:                      $(SRCROOT)/mpfr/src/inits.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/inits2.o:                     $(SRCROOT)/mpfr/src/inits2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/clears.o:                     $(SRCROOT)/mpfr/src/clears.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sgn.o:                        $(SRCROOT)/mpfr/src/sgn.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/check.o:                      $(SRCROOT)/mpfr/src/check.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sub1sp.o:                     $(SRCROOT)/mpfr/src/sub1sp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/version.o:                    $(SRCROOT)/mpfr/src/version.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mpn_exp.o:                    $(SRCROOT)/mpfr/src/mpn_exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mpfr-gmp.o:                   $(SRCROOT)/mpfr/src/mpfr-gmp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mp_clz_tab.o:                 $(SRCROOT)/mpfr/src/mp_clz_tab.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sum.o:                        $(SRCROOT)/mpfr/src/sum.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/add1sp.o:                     $(SRCROOT)/mpfr/src/add1sp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/free_cache.o:                 $(SRCROOT)/mpfr/src/free_cache.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/si_op.o:                      $(SRCROOT)/mpfr/src/si_op.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cmp_ld.o:                     $(SRCROOT)/mpfr/src/cmp_ld.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_ui_2exp.o:                $(SRCROOT)/mpfr/src/set_ui_2exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_si_2exp.o:                $(SRCROOT)/mpfr/src/set_si_2exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_uj.o:                     $(SRCROOT)/mpfr/src/set_uj.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_sj.o:                     $(SRCROOT)/mpfr/src/set_sj.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_sj.o:                     $(SRCROOT)/mpfr/src/get_sj.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_uj.o:                     $(SRCROOT)/mpfr/src/get_uj.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_z.o:                      $(SRCROOT)/mpfr/src/get_z.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/iszero.o:                     $(SRCROOT)/mpfr/src/iszero.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cache.o:                      $(SRCROOT)/mpfr/src/cache.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sqr.o:                        $(SRCROOT)/mpfr/src/sqr.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/int_ceil_log2.o:              $(SRCROOT)/mpfr/src/int_ceil_log2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/isqrt.o:                      $(SRCROOT)/mpfr/src/isqrt.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/strtofr.o:                    $(SRCROOT)/mpfr/src/strtofr.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/pow_z.o:                      $(SRCROOT)/mpfr/src/pow_z.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/logging.o:                    $(SRCROOT)/mpfr/src/logging.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mulders.o:                    $(SRCROOT)/mpfr/src/mulders.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_f.o:                      $(SRCROOT)/mpfr/src/get_f.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/round_p.o:                    $(SRCROOT)/mpfr/src/round_p.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/erfc.o:                       $(SRCROOT)/mpfr/src/erfc.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/atan2.o:                      $(SRCROOT)/mpfr/src/atan2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/subnormal.o:                  $(SRCROOT)/mpfr/src/subnormal.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/const_catalan.o:              $(SRCROOT)/mpfr/src/const_catalan.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/root.o:                       $(SRCROOT)/mpfr/src/root.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sec.o:                        $(SRCROOT)/mpfr/src/sec.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/csc.o:                        $(SRCROOT)/mpfr/src/csc.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/cot.o:                        $(SRCROOT)/mpfr/src/cot.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/eint.o:                       $(SRCROOT)/mpfr/src/eint.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sech.o:                       $(SRCROOT)/mpfr/src/sech.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/csch.o:                       $(SRCROOT)/mpfr/src/csch.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/coth.o:                       $(SRCROOT)/mpfr/src/coth.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/round_near_x.o:               $(SRCROOT)/mpfr/src/round_near_x.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/constant.o:                   $(SRCROOT)/mpfr/src/constant.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/abort_prec_max.o:             $(SRCROOT)/mpfr/src/abort_prec_max.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/stack_interface.o:            $(SRCROOT)/mpfr/src/stack_interface.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/lngamma.o:                    $(SRCROOT)/mpfr/src/lngamma.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/zeta_ui.o:                    $(SRCROOT)/mpfr/src/zeta_ui.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_d64.o:                    $(SRCROOT)/mpfr/src/set_d64.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_d64.o:                    $(SRCROOT)/mpfr/src/get_d64.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/jn.o:                         $(SRCROOT)/mpfr/src/jn.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/yn.o:                         $(SRCROOT)/mpfr/src/yn.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/rem1.o:                       $(SRCROOT)/mpfr/src/rem1.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_patches.o:                $(SRCROOT)/mpfr/src/get_patches.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/add_d.o:                      $(SRCROOT)/mpfr/src/add_d.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/sub_d.o:                      $(SRCROOT)/mpfr/src/sub_d.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/d_sub.o:                      $(SRCROOT)/mpfr/src/d_sub.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/mul_d.o:                      $(SRCROOT)/mpfr/src/mul_d.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/div_d.o:                      $(SRCROOT)/mpfr/src/div_d.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/d_div.o:                      $(SRCROOT)/mpfr/src/d_div.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/li2.o:                        $(SRCROOT)/mpfr/src/li2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/rec_sqrt.o:                   $(SRCROOT)/mpfr/src/rec_sqrt.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/min_prec.o:                   $(SRCROOT)/mpfr/src/min_prec.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/buildopt.o:                   $(SRCROOT)/mpfr/src/buildopt.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/digamma.o:                    $(SRCROOT)/mpfr/src/digamma.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/bernoulli.o:                  $(SRCROOT)/mpfr/src/bernoulli.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/isregular.o:                  $(SRCROOT)/mpfr/src/isregular.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_flt.o:                    $(SRCROOT)/mpfr/src/set_flt.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/get_flt.o:                    $(SRCROOT)/mpfr/src/get_flt.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/scale2.o:                     $(SRCROOT)/mpfr/src/scale2.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/set_z_exp.o:                  $(SRCROOT)/mpfr/src/set_z_exp.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/ai.o:                         $(SRCROOT)/mpfr/src/ai.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/gammaonethird.o:              $(SRCROOT)/mpfr/src/gammaonethird.c
	gcc $(F_MPFR) -c $^ -o $@

o/mpfr/grandom.o:                    $(SRCROOT)/mpfr/src/grandom.c
	gcc $(F_MPFR) -c $^ -o $@

  # }

  # 0 -> a  {

o/mpfr/libmpfr.a: o/mpfr/exceptions.o                  \
                  o/mpfr/extract.o                     \
                  o/mpfr/uceil_exp2.o                  \
                  o/mpfr/uceil_log2.o                  \
                  o/mpfr/ufloor_log2.o                 \
                  o/mpfr/add.o                         \
                  o/mpfr/add1.o                        \
                  o/mpfr/add_ui.o                      \
                  o/mpfr/agm.o                         \
                  o/mpfr/clear.o                       \
                  o/mpfr/cmp.o                         \
                  o/mpfr/cmp_abs.o                     \
                  o/mpfr/cmp_si.o                      \
                  o/mpfr/cmp_ui.o                      \
                  o/mpfr/comparisons.o                 \
                  o/mpfr/div_2exp.o                    \
                  o/mpfr/div_2si.o                     \
                  o/mpfr/div_2ui.o                     \
                  o/mpfr/div.o                         \
                  o/mpfr/div_ui.o                      \
                  o/mpfr/dump.o                        \
                  o/mpfr/eq.o                          \
                  o/mpfr/exp10.o                       \
                  o/mpfr/exp2.o                        \
                  o/mpfr/exp3.o                        \
                  o/mpfr/exp.o                         \
                  o/mpfr/frac.o                        \
                  o/mpfr/frexp.o                       \
                  o/mpfr/get_d.o                       \
                  o/mpfr/get_exp.o                     \
                  o/mpfr/get_str.o                     \
                  o/mpfr/init.o                        \
                  o/mpfr/inp_str.o                     \
                  o/mpfr/isinteger.o                   \
                  o/mpfr/isinf.o                       \
                  o/mpfr/isnan.o                       \
                  o/mpfr/isnum.o                       \
                  o/mpfr/const_log2.o                  \
                  o/mpfr/log.o                         \
                  o/mpfr/modf.o                        \
                  o/mpfr/mul_2exp.o                    \
                  o/mpfr/mul_2si.o                     \
                  o/mpfr/mul_2ui.o                     \
                  o/mpfr/mul.o                         \
                  o/mpfr/mul_ui.o                      \
                  o/mpfr/neg.o                         \
                  o/mpfr/next.o                        \
                  o/mpfr/out_str.o                     \
                  o/mpfr/printf.o                      \
                  o/mpfr/vasprintf.o                   \
                  o/mpfr/const_pi.o                    \
                  o/mpfr/pow.o                         \
                  o/mpfr/pow_si.o                      \
                  o/mpfr/pow_ui.o                      \
                  o/mpfr/print_raw.o                   \
                  o/mpfr/print_rnd_mode.o              \
                  o/mpfr/reldiff.o                     \
                  o/mpfr/round_prec.o                  \
                  o/mpfr/set.o                         \
                  o/mpfr/setmax.o                      \
                  o/mpfr/setmin.o                      \
                  o/mpfr/set_d.o                       \
                  o/mpfr/set_dfl_prec.o                \
                  o/mpfr/set_exp.o                     \
                  o/mpfr/set_rnd.o                     \
                  o/mpfr/set_f.o                       \
                  o/mpfr/set_prc_raw.o                 \
                  o/mpfr/set_prec.o                    \
                  o/mpfr/set_q.o                       \
                  o/mpfr/set_si.o                      \
                  o/mpfr/set_str.o                     \
                  o/mpfr/set_str_raw.o                 \
                  o/mpfr/set_ui.o                      \
                  o/mpfr/set_z.o                       \
                  o/mpfr/sqrt.o                        \
                  o/mpfr/sqrt_ui.o                     \
                  o/mpfr/sub.o                         \
                  o/mpfr/sub1.o                        \
                  o/mpfr/sub_ui.o                      \
                  o/mpfr/rint.o                        \
                  o/mpfr/ui_div.o                      \
                  o/mpfr/ui_sub.o                      \
                  o/mpfr/urandom.o                     \
                  o/mpfr/urandomb.o                    \
                  o/mpfr/get_z_exp.o                   \
                  o/mpfr/swap.o                        \
                  o/mpfr/factorial.o                   \
                  o/mpfr/cosh.o                        \
                  o/mpfr/sinh.o                        \
                  o/mpfr/tanh.o                        \
                  o/mpfr/sinh_cosh.o                   \
                  o/mpfr/acosh.o                       \
                  o/mpfr/asinh.o                       \
                  o/mpfr/atanh.o                       \
                  o/mpfr/atan.o                        \
                  o/mpfr/cmp2.o                        \
                  o/mpfr/exp_2.o                       \
                  o/mpfr/asin.o                        \
                  o/mpfr/const_euler.o                 \
                  o/mpfr/cos.o                         \
                  o/mpfr/sin.o                         \
                  o/mpfr/tan.o                         \
                  o/mpfr/fma.o                         \
                  o/mpfr/fms.o                         \
                  o/mpfr/hypot.o                       \
                  o/mpfr/log1p.o                       \
                  o/mpfr/expm1.o                       \
                  o/mpfr/log2.o                        \
                  o/mpfr/log10.o                       \
                  o/mpfr/ui_pow.o                      \
                  o/mpfr/ui_pow_ui.o                   \
                  o/mpfr/minmax.o                      \
                  o/mpfr/dim.o                         \
                  o/mpfr/signbit.o                     \
                  o/mpfr/copysign.o                    \
                  o/mpfr/setsign.o                     \
                  o/mpfr/gmp_op.o                      \
                  o/mpfr/init2.o                       \
                  o/mpfr/acos.o                        \
                  o/mpfr/sin_cos.o                     \
                  o/mpfr/set_nan.o                     \
                  o/mpfr/set_inf.o                     \
                  o/mpfr/set_zero.o                    \
                  o/mpfr/powerof2.o                    \
                  o/mpfr/gamma.o                       \
                  o/mpfr/set_ld.o                      \
                  o/mpfr/get_ld.o                      \
                  o/mpfr/cbrt.o                        \
                  o/mpfr/volatile.o                    \
                  o/mpfr/fits_sshort.o                 \
                  o/mpfr/fits_sint.o                   \
                  o/mpfr/fits_slong.o                  \
                  o/mpfr/fits_ushort.o                 \
                  o/mpfr/fits_uint.o                   \
                  o/mpfr/fits_ulong.o                  \
                  o/mpfr/fits_uintmax.o                \
                  o/mpfr/fits_intmax.o                 \
                  o/mpfr/get_si.o                      \
                  o/mpfr/get_ui.o                      \
                  o/mpfr/zeta.o            \
                  o/mpfr/cmp_d.o           \
                  o/mpfr/erf.o             \
                  o/mpfr/inits.o           \
                  o/mpfr/inits2.o          \
                  o/mpfr/clears.o          \
                  o/mpfr/sgn.o             \
                  o/mpfr/check.o           \
                  o/mpfr/sub1sp.o          \
                  o/mpfr/version.o         \
                  o/mpfr/mpn_exp.o         \
                  o/mpfr/mpfr-gmp.o        \
                  o/mpfr/mp_clz_tab.o      \
                  o/mpfr/sum.o             \
                  o/mpfr/add1sp.o          \
                  o/mpfr/free_cache.o      \
                  o/mpfr/si_op.o           \
                  o/mpfr/cmp_ld.o          \
                  o/mpfr/set_ui_2exp.o     \
                  o/mpfr/set_si_2exp.o     \
                  o/mpfr/set_uj.o          \
                  o/mpfr/set_sj.o          \
                  o/mpfr/get_sj.o          \
                  o/mpfr/get_uj.o          \
                  o/mpfr/get_z.o           \
                  o/mpfr/iszero.o          \
                  o/mpfr/cache.o           \
                  o/mpfr/sqr.o             \
                  o/mpfr/int_ceil_log2.o   \
                  o/mpfr/isqrt.o           \
                  o/mpfr/strtofr.o         \
                  o/mpfr/pow_z.o           \
                  o/mpfr/logging.o         \
                  o/mpfr/mulders.o         \
                  o/mpfr/get_f.o           \
                  o/mpfr/round_p.o         \
                  o/mpfr/erfc.o            \
                  o/mpfr/atan2.o           \
                  o/mpfr/subnormal.o       \
                  o/mpfr/const_catalan.o   \
                  o/mpfr/root.o            \
                  o/mpfr/sec.o             \
                  o/mpfr/csc.o             \
                  o/mpfr/cot.o             \
                  o/mpfr/eint.o            \
                  o/mpfr/sech.o            \
                  o/mpfr/csch.o            \
                  o/mpfr/coth.o            \
                  o/mpfr/round_near_x.o    \
                  o/mpfr/constant.o        \
                  o/mpfr/abort_prec_max.o  \
                  o/mpfr/stack_interface.o \
                  o/mpfr/lngamma.o         \
                  o/mpfr/zeta_ui.o         \
                  o/mpfr/set_d64.o         \
                  o/mpfr/get_d64.o         \
                  o/mpfr/jn.o              \
                  o/mpfr/yn.o              \
                  o/mpfr/rem1.o            \
                  o/mpfr/get_patches.o     \
                  o/mpfr/add_d.o           \
                  o/mpfr/sub_d.o           \
                  o/mpfr/d_sub.o           \
                  o/mpfr/mul_d.o           \
                  o/mpfr/div_d.o           \
                  o/mpfr/d_div.o           \
                  o/mpfr/li2.o             \
                  o/mpfr/rec_sqrt.o        \
                  o/mpfr/min_prec.o        \
                  o/mpfr/buildopt.o        \
                  o/mpfr/digamma.o         \
                  o/mpfr/bernoulli.o       \
                  o/mpfr/isregular.o       \
                  o/mpfr/set_flt.o         \
                  o/mpfr/get_flt.o         \
                  o/mpfr/scale2.o          \
                  o/mpfr/set_z_exp.o       \
                  o/mpfr/ai.o              \
                  o/mpfr/gammaonethird.o   \
                  o/mpfr/grandom.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

  # }

# }

# gmp                       {

GMP_DEFINES=-D__GMP_WITHIN_GMP -DNO_ASM -D__USE_MINGW_ACCESS

  # c -> o  {

D_GMP=$(GMP_DEFINES)
I_GMP=-Igmp
F_GMP=$(D_GMP) $(I_GMP)

o/gmp/assert.o:                      $(SRCROOT)/gmp/assert.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/compat.o:                      $(SRCROOT)/gmp/compat.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/errno.o:                       $(SRCROOT)/gmp/errno.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/extract-dbl.o:                 $(SRCROOT)/gmp/extract-dbl.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/invalid.o:                     $(SRCROOT)/gmp/invalid.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/memory.o:                      $(SRCROOT)/gmp/memory.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/mp_bpl.o:                      $(SRCROOT)/gmp/mp_bpl.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/mp_clz_tab.o:                  $(SRCROOT)/gmp/mp_clz_tab.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/mp_dv_tab.o:                   $(SRCROOT)/gmp/mp_dv_tab.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/mp_minv_tab.o:                 $(SRCROOT)/gmp/mp_minv_tab.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/mp_get_fns.o:                  $(SRCROOT)/gmp/mp_get_fns.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/mp_set_fns.o:                  $(SRCROOT)/gmp/mp_set_fns.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/rand.o:                        $(SRCROOT)/gmp/rand.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randclr.o:                     $(SRCROOT)/gmp/randclr.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randdef.o:                     $(SRCROOT)/gmp/randdef.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randiset.o:                    $(SRCROOT)/gmp/randiset.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randlc2s.o:                    $(SRCROOT)/gmp/randlc2s.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randlc2x.o:                    $(SRCROOT)/gmp/randlc2x.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randmt.o:                      $(SRCROOT)/gmp/randmt.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randmts.o:                     $(SRCROOT)/gmp/randmts.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/rands.o:                       $(SRCROOT)/gmp/rands.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randsd.o:                      $(SRCROOT)/gmp/randsd.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randsdui.o:                    $(SRCROOT)/gmp/randsdui.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randbui.o:                     $(SRCROOT)/gmp/randbui.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/randmui.o:                     $(SRCROOT)/gmp/randmui.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/version.o:                     $(SRCROOT)/gmp/version.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/nextprime.o:                   $(SRCROOT)/gmp/nextprime.c
	gcc $(F_GMP) -c $^ -o $@

o/gmp/tal-reent.o:                   $(SRCROOT)/gmp/tal-reent.c
	gcc $(F_GMP) -c $^ -o $@

	# }

  # mpf    {

D_MPF=$(GMP_DEFINES)
I_MPF=-Igmp -I$(SRCROOT)/gmp
F_MPF=$(D_MPF) $(I_MPF)

o/gmp/mpf/init.o:                    $(SRCROOT)/gmp/mpf/init.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/init2.o:                   $(SRCROOT)/gmp/mpf/init2.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/inits.o:                   $(SRCROOT)/gmp/mpf/inits.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set.o:                     $(SRCROOT)/gmp/mpf/set.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_ui.o:                  $(SRCROOT)/gmp/mpf/set_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_si.o:                  $(SRCROOT)/gmp/mpf/set_si.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_str.o:                 $(SRCROOT)/gmp/mpf/set_str.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_d.o:                   $(SRCROOT)/gmp/mpf/set_d.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_z.o:                   $(SRCROOT)/gmp/mpf/set_z.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/iset.o:                    $(SRCROOT)/gmp/mpf/iset.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/iset_ui.o:                 $(SRCROOT)/gmp/mpf/iset_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/iset_si.o:                 $(SRCROOT)/gmp/mpf/iset_si.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/iset_str.o:                $(SRCROOT)/gmp/mpf/iset_str.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/iset_d.o:                  $(SRCROOT)/gmp/mpf/iset_d.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/clear.o:                   $(SRCROOT)/gmp/mpf/clear.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/clears.o:                  $(SRCROOT)/gmp/mpf/clears.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/get_str.o:                 $(SRCROOT)/gmp/mpf/get_str.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/dump.o:                    $(SRCROOT)/gmp/mpf/dump.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/size.o:                    $(SRCROOT)/gmp/mpf/size.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/eq.o:                      $(SRCROOT)/gmp/mpf/eq.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/reldiff.o:                 $(SRCROOT)/gmp/mpf/reldiff.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/sqrt.o:                    $(SRCROOT)/gmp/mpf/sqrt.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/random2.o:                 $(SRCROOT)/gmp/mpf/random2.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/inp_str.o:                 $(SRCROOT)/gmp/mpf/inp_str.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/out_str.o:                 $(SRCROOT)/gmp/mpf/out_str.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/add.o:                     $(SRCROOT)/gmp/mpf/add.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/add_ui.o:                  $(SRCROOT)/gmp/mpf/add_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/sub.o:                     $(SRCROOT)/gmp/mpf/sub.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/sub_ui.o:                  $(SRCROOT)/gmp/mpf/sub_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/ui_sub.o:                  $(SRCROOT)/gmp/mpf/ui_sub.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/mul.o:                     $(SRCROOT)/gmp/mpf/mul.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/mul_ui.o:                  $(SRCROOT)/gmp/mpf/mul_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/div.o:                     $(SRCROOT)/gmp/mpf/div.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/div_ui.o:                  $(SRCROOT)/gmp/mpf/div_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/cmp.o:                     $(SRCROOT)/gmp/mpf/cmp.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/cmp_d.o:                   $(SRCROOT)/gmp/mpf/cmp_d.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/cmp_ui.o:                  $(SRCROOT)/gmp/mpf/cmp_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/cmp_si.o:                  $(SRCROOT)/gmp/mpf/cmp_si.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/mul_2exp.o:                $(SRCROOT)/gmp/mpf/mul_2exp.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/div_2exp.o:                $(SRCROOT)/gmp/mpf/div_2exp.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/abs.o:                     $(SRCROOT)/gmp/mpf/abs.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/neg.o:                     $(SRCROOT)/gmp/mpf/neg.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_q.o:                   $(SRCROOT)/gmp/mpf/set_q.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/get_d.o:                   $(SRCROOT)/gmp/mpf/get_d.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/get_d_2exp.o:              $(SRCROOT)/gmp/mpf/get_d_2exp.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_dfl_prec.o:            $(SRCROOT)/gmp/mpf/set_dfl_prec.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_prc.o:                 $(SRCROOT)/gmp/mpf/set_prc.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/set_prc_raw.o:             $(SRCROOT)/gmp/mpf/set_prc_raw.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/get_dfl_prec.o:            $(SRCROOT)/gmp/mpf/get_dfl_prec.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/get_prc.o:                 $(SRCROOT)/gmp/mpf/get_prc.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/ui_div.o:                  $(SRCROOT)/gmp/mpf/ui_div.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/sqrt_ui.o:                 $(SRCROOT)/gmp/mpf/sqrt_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/ceilfloor.o:               $(SRCROOT)/gmp/mpf/ceilfloor.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/trunc.o:                   $(SRCROOT)/gmp/mpf/trunc.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/pow_ui.o:                  $(SRCROOT)/gmp/mpf/pow_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/urandomb.o:                $(SRCROOT)/gmp/mpf/urandomb.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/swap.o:                    $(SRCROOT)/gmp/mpf/swap.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/fits_sint.o:               $(SRCROOT)/gmp/mpf/fits_sint.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/fits_slong.o:              $(SRCROOT)/gmp/mpf/fits_slong.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/fits_sshort.o:             $(SRCROOT)/gmp/mpf/fits_sshort.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/fits_uint.o:               $(SRCROOT)/gmp/mpf/fits_uint.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/fits_ulong.o:              $(SRCROOT)/gmp/mpf/fits_ulong.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/fits_ushort.o:             $(SRCROOT)/gmp/mpf/fits_ushort.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/get_si.o:                  $(SRCROOT)/gmp/mpf/get_si.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/get_ui.o:                  $(SRCROOT)/gmp/mpf/get_ui.c
	gcc $(F_MPF) -c $^ -o $@

o/gmp/mpf/int_p.o:                   $(SRCROOT)/gmp/mpf/int_p.c
	gcc $(F_MPF) -c $^ -o $@


  # }

  # mpz    {

D_MPZ=$(GMP_DEFINES)
I_MPZ=-Igmp -I$(SRCROOT)/gmp
F_MPZ=$(D_MPZ) $(I_MPZ)

o/gmp/mpz/abs.o:                    $(SRCROOT)/gmp/mpz/abs.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/add.o:                    $(SRCROOT)/gmp/mpz/add.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/add_ui.o:                 $(SRCROOT)/gmp/mpz/add_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/aorsmul.o:                $(SRCROOT)/gmp/mpz/aorsmul.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/aorsmul_i.o:              $(SRCROOT)/gmp/mpz/aorsmul_i.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/and.o:                    $(SRCROOT)/gmp/mpz/and.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/array_init.o:             $(SRCROOT)/gmp/mpz/array_init.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/bin_ui.o:                 $(SRCROOT)/gmp/mpz/bin_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/bin_uiui.o:               $(SRCROOT)/gmp/mpz/bin_uiui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cdiv_q.o:                 $(SRCROOT)/gmp/mpz/cdiv_q.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cdiv_q_ui.o:              $(SRCROOT)/gmp/mpz/cdiv_q_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cdiv_qr.o:                $(SRCROOT)/gmp/mpz/cdiv_qr.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cdiv_qr_ui.o:             $(SRCROOT)/gmp/mpz/cdiv_qr_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cdiv_r.o:                 $(SRCROOT)/gmp/mpz/cdiv_r.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cdiv_r_ui.o:              $(SRCROOT)/gmp/mpz/cdiv_r_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cdiv_ui.o:                $(SRCROOT)/gmp/mpz/cdiv_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cfdiv_q_2exp.o:           $(SRCROOT)/gmp/mpz/cfdiv_q_2exp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cfdiv_r_2exp.o:           $(SRCROOT)/gmp/mpz/cfdiv_r_2exp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/clear.o:                  $(SRCROOT)/gmp/mpz/clear.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/clears.o:                 $(SRCROOT)/gmp/mpz/clears.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/clrbit.o:                 $(SRCROOT)/gmp/mpz/clrbit.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cmp.o:                    $(SRCROOT)/gmp/mpz/cmp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cmp_d.o:                  $(SRCROOT)/gmp/mpz/cmp_d.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cmp_si.o:                 $(SRCROOT)/gmp/mpz/cmp_si.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cmp_ui.o:                 $(SRCROOT)/gmp/mpz/cmp_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cmpabs.o:                 $(SRCROOT)/gmp/mpz/cmpabs.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cmpabs_d.o:               $(SRCROOT)/gmp/mpz/cmpabs_d.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cmpabs_ui.o:              $(SRCROOT)/gmp/mpz/cmpabs_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/com.o:                    $(SRCROOT)/gmp/mpz/com.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/combit.o:                 $(SRCROOT)/gmp/mpz/combit.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cong.o:                   $(SRCROOT)/gmp/mpz/cong.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cong_2exp.o:              $(SRCROOT)/gmp/mpz/cong_2exp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/cong_ui.o:                $(SRCROOT)/gmp/mpz/cong_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/divexact.o:               $(SRCROOT)/gmp/mpz/divexact.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/divegcd.o:                $(SRCROOT)/gmp/mpz/divegcd.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/dive_ui.o:                $(SRCROOT)/gmp/mpz/dive_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/divis.o:                  $(SRCROOT)/gmp/mpz/divis.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/divis_ui.o:               $(SRCROOT)/gmp/mpz/divis_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/divis_2exp.o:             $(SRCROOT)/gmp/mpz/divis_2exp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/dump.o:                   $(SRCROOT)/gmp/mpz/dump.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/export.o:                 $(SRCROOT)/gmp/mpz/export.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fac_ui.o:                 $(SRCROOT)/gmp/mpz/fac_ui.c
	gcc $(F_MPZ) -Igmp/mpz -c $^ -o $@

o/gmp/mpz/fdiv_q.o:                 $(SRCROOT)/gmp/mpz/fdiv_q.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fdiv_q_ui.o:              $(SRCROOT)/gmp/mpz/fdiv_q_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fdiv_qr.o:                $(SRCROOT)/gmp/mpz/fdiv_qr.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fdiv_qr_ui.o:             $(SRCROOT)/gmp/mpz/fdiv_qr_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fdiv_r.o:                 $(SRCROOT)/gmp/mpz/fdiv_r.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fdiv_r_ui.o:              $(SRCROOT)/gmp/mpz/fdiv_r_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fdiv_ui.o:                $(SRCROOT)/gmp/mpz/fdiv_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fib_ui.o:                 $(SRCROOT)/gmp/mpz/fib_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fib2_ui.o:                $(SRCROOT)/gmp/mpz/fib2_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fits_sint.o:              $(SRCROOT)/gmp/mpz/fits_sint.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fits_slong.o:             $(SRCROOT)/gmp/mpz/fits_slong.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fits_sshort.o:            $(SRCROOT)/gmp/mpz/fits_sshort.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fits_uint.o:              $(SRCROOT)/gmp/mpz/fits_uint.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fits_ulong.o:             $(SRCROOT)/gmp/mpz/fits_ulong.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/fits_ushort.o:            $(SRCROOT)/gmp/mpz/fits_ushort.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/gcd.o:                    $(SRCROOT)/gmp/mpz/gcd.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/gcd_ui.o:                 $(SRCROOT)/gmp/mpz/gcd_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/gcdext.o:                 $(SRCROOT)/gmp/mpz/gcdext.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/get_d.o:                  $(SRCROOT)/gmp/mpz/get_d.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/get_d_2exp.o:             $(SRCROOT)/gmp/mpz/get_d_2exp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/get_si.o:                 $(SRCROOT)/gmp/mpz/get_si.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/get_str.o:                $(SRCROOT)/gmp/mpz/get_str.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/get_ui.o:                 $(SRCROOT)/gmp/mpz/get_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/getlimbn.o:               $(SRCROOT)/gmp/mpz/getlimbn.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/hamdist.o:                $(SRCROOT)/gmp/mpz/hamdist.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/import.o:                 $(SRCROOT)/gmp/mpz/import.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/init.o:                   $(SRCROOT)/gmp/mpz/init.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/init2.o:                  $(SRCROOT)/gmp/mpz/init2.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/inits.o:                  $(SRCROOT)/gmp/mpz/inits.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/inp_raw.o:                $(SRCROOT)/gmp/mpz/inp_raw.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/inp_str.o:                $(SRCROOT)/gmp/mpz/inp_str.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/invert.o:                 $(SRCROOT)/gmp/mpz/invert.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/ior.o:                    $(SRCROOT)/gmp/mpz/ior.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/iset.o:                   $(SRCROOT)/gmp/mpz/iset.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/iset_d.o:                 $(SRCROOT)/gmp/mpz/iset_d.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/iset_si.o:                $(SRCROOT)/gmp/mpz/iset_si.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/iset_str.o:               $(SRCROOT)/gmp/mpz/iset_str.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/iset_ui.o:                $(SRCROOT)/gmp/mpz/iset_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/jacobi.o:                 $(SRCROOT)/gmp/mpz/jacobi.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/kronsz.o:                 $(SRCROOT)/gmp/mpz/kronsz.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/kronuz.o:                 $(SRCROOT)/gmp/mpz/kronuz.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/kronzs.o:                 $(SRCROOT)/gmp/mpz/kronzs.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/kronzu.o:                 $(SRCROOT)/gmp/mpz/kronzu.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/lcm.o:                    $(SRCROOT)/gmp/mpz/lcm.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/lcm_ui.o:                 $(SRCROOT)/gmp/mpz/lcm_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/lucnum_ui.o:              $(SRCROOT)/gmp/mpz/lucnum_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/lucnum2_ui.o:             $(SRCROOT)/gmp/mpz/lucnum2_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/millerrabin.o:            $(SRCROOT)/gmp/mpz/millerrabin.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/mod.o:                    $(SRCROOT)/gmp/mpz/mod.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/mul.o:                    $(SRCROOT)/gmp/mpz/mul.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/mul_2exp.o:               $(SRCROOT)/gmp/mpz/mul_2exp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/mul_si.o:                 $(SRCROOT)/gmp/mpz/mul_si.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/mul_ui.o:                 $(SRCROOT)/gmp/mpz/mul_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/n_pow_ui.o:               $(SRCROOT)/gmp/mpz/n_pow_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/neg.o:                    $(SRCROOT)/gmp/mpz/neg.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/nextprime.o:              $(SRCROOT)/gmp/mpz/nextprime.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/out_raw.o:                $(SRCROOT)/gmp/mpz/out_raw.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/out_str.o:                $(SRCROOT)/gmp/mpz/out_str.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/perfpow.o:                $(SRCROOT)/gmp/mpz/perfpow.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/perfsqr.o:                $(SRCROOT)/gmp/mpz/perfsqr.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/popcount.o:               $(SRCROOT)/gmp/mpz/popcount.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/pow_ui.o:                 $(SRCROOT)/gmp/mpz/pow_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/powm.o:                   $(SRCROOT)/gmp/mpz/powm.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/powm_sec.o:               $(SRCROOT)/gmp/mpz/powm_sec.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/powm_ui.o:                $(SRCROOT)/gmp/mpz/powm_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/pprime_p.o:               $(SRCROOT)/gmp/mpz/pprime_p.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/random.o:                 $(SRCROOT)/gmp/mpz/random.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/random2.o:                $(SRCROOT)/gmp/mpz/random2.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/realloc.o:                $(SRCROOT)/gmp/mpz/realloc.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/realloc2.o:               $(SRCROOT)/gmp/mpz/realloc2.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/remove.o:                 $(SRCROOT)/gmp/mpz/remove.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/root.o:                   $(SRCROOT)/gmp/mpz/root.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/rootrem.o:                $(SRCROOT)/gmp/mpz/rootrem.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/rrandomb.o:               $(SRCROOT)/gmp/mpz/rrandomb.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/scan0.o:                  $(SRCROOT)/gmp/mpz/scan0.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/scan1.o:                  $(SRCROOT)/gmp/mpz/scan1.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/set.o:                    $(SRCROOT)/gmp/mpz/set.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/set_d.o:                  $(SRCROOT)/gmp/mpz/set_d.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/set_f.o:                  $(SRCROOT)/gmp/mpz/set_f.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/set_q.o:                  $(SRCROOT)/gmp/mpz/set_q.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/set_si.o:                 $(SRCROOT)/gmp/mpz/set_si.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/set_str.o:                $(SRCROOT)/gmp/mpz/set_str.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/set_ui.o:                 $(SRCROOT)/gmp/mpz/set_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/setbit.o:                 $(SRCROOT)/gmp/mpz/setbit.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/size.o:                   $(SRCROOT)/gmp/mpz/size.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/sizeinbase.o:             $(SRCROOT)/gmp/mpz/sizeinbase.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/sqrt.o:                   $(SRCROOT)/gmp/mpz/sqrt.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/sqrtrem.o:                $(SRCROOT)/gmp/mpz/sqrtrem.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/sub.o:                    $(SRCROOT)/gmp/mpz/sub.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/sub_ui.o:                 $(SRCROOT)/gmp/mpz/sub_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/swap.o:                   $(SRCROOT)/gmp/mpz/swap.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_ui.o:                $(SRCROOT)/gmp/mpz/tdiv_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_q.o:                 $(SRCROOT)/gmp/mpz/tdiv_q.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_q_2exp.o:            $(SRCROOT)/gmp/mpz/tdiv_q_2exp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_q_ui.o:              $(SRCROOT)/gmp/mpz/tdiv_q_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_qr.o:                $(SRCROOT)/gmp/mpz/tdiv_qr.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_qr_ui.o:             $(SRCROOT)/gmp/mpz/tdiv_qr_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_r.o:                 $(SRCROOT)/gmp/mpz/tdiv_r.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_r_2exp.o:            $(SRCROOT)/gmp/mpz/tdiv_r_2exp.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tdiv_r_ui.o:              $(SRCROOT)/gmp/mpz/tdiv_r_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/tstbit.o:                 $(SRCROOT)/gmp/mpz/tstbit.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/ui_pow_ui.o:              $(SRCROOT)/gmp/mpz/ui_pow_ui.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/ui_sub.o:                 $(SRCROOT)/gmp/mpz/ui_sub.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/urandomb.o:               $(SRCROOT)/gmp/mpz/urandomb.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/urandomm.o:               $(SRCROOT)/gmp/mpz/urandomm.c
	gcc $(F_MPZ) -c $^ -o $@

o/gmp/mpz/xor.o:                    $(SRCROOT)/gmp/mpz/xor.c
	gcc $(F_MPZ) -c $^ -o $@

  # }

  # mpq    {

D_MPQ=$(GMP_DEFINES)
I_MPQ=-Igmp -I$(SRCROOT)/gmp
F_MPQ=$(D_MPQ) $(I_MPQ)

o/gmp/mpq/aors.o:                    $(SRCROOT)/gmp/mpq/aors.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/canonicalize.o:            $(SRCROOT)/gmp/mpq/canonicalize.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/clear.o:                   $(SRCROOT)/gmp/mpq/clear.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/clears.o:                  $(SRCROOT)/gmp/mpq/clears.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/cmp.o:                     $(SRCROOT)/gmp/mpq/cmp.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/cmp_si.o:                  $(SRCROOT)/gmp/mpq/cmp_si.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/cmp_ui.o:                  $(SRCROOT)/gmp/mpq/cmp_ui.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/div.o:                     $(SRCROOT)/gmp/mpq/div.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/get_d.o:                   $(SRCROOT)/gmp/mpq/get_d.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/get_den.o:                 $(SRCROOT)/gmp/mpq/get_den.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/get_num.o:                 $(SRCROOT)/gmp/mpq/get_num.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/get_str.o:                 $(SRCROOT)/gmp/mpq/get_str.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/init.o:                    $(SRCROOT)/gmp/mpq/init.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/inits.o:                   $(SRCROOT)/gmp/mpq/inits.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/inp_str.o:                 $(SRCROOT)/gmp/mpq/inp_str.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/inv.o:                     $(SRCROOT)/gmp/mpq/inv.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/md_2exp.o:                 $(SRCROOT)/gmp/mpq/md_2exp.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/mul.o:                     $(SRCROOT)/gmp/mpq/mul.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/neg.o:                     $(SRCROOT)/gmp/mpq/neg.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/out_str.o:                 $(SRCROOT)/gmp/mpq/out_str.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set.o:                     $(SRCROOT)/gmp/mpq/set.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set_den.o:                 $(SRCROOT)/gmp/mpq/set_den.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set_num.o:                 $(SRCROOT)/gmp/mpq/set_num.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set_si.o:                  $(SRCROOT)/gmp/mpq/set_si.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set_str.o:                 $(SRCROOT)/gmp/mpq/set_str.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set_ui.o:                  $(SRCROOT)/gmp/mpq/set_ui.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/equal.o:                   $(SRCROOT)/gmp/mpq/equal.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set_z.o:                   $(SRCROOT)/gmp/mpq/set_z.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set_d.o:                   $(SRCROOT)/gmp/mpq/set_d.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/set_f.o:                   $(SRCROOT)/gmp/mpq/set_f.c
	gcc $(F_MPQ) -c $^ -o $@

o/gmp/mpq/swap.o:                    $(SRCROOT)/gmp/mpq/swap.c
	gcc $(F_MPQ) -c $^ -o $@

  # }

  # mpn    {

D_MPN=$(GMP_DEFINES) -DHAVE_CONFIG_H
I_MPN=-Igmp -I$(SRCROOT)/gmp
F_MPN=$(D_MPN) $(I_MPN)

o/gmp/mpn/fib_table.o:                gmp/mpn/fib_table.c
	gcc $(F_MPN) -DOPERATION_fib_table  -c $^ -o $@

o/gmp/mpn/mp_bases.o:                 gmp/mpn/mp_bases.c
	gcc $(F_MPN) -DOPERATION_mp_bases  -c $^ -o $@

o/gmp/mpn/add.o:                      gmp/mpn/add.c
	gcc $(F_MPN) -DOPERATION_add  -c $^ -o $@

o/gmp/mpn/add_1.o:                    gmp/mpn/add_1.c
	gcc $(F_MPN) -DOPERATION_add_1  -c $^ -o $@

o/gmp/mpn/add_n.o:                    gmp/mpn/add_n.c
	gcc $(F_MPN) -DOPERATION_add_n  -c $^ -o $@

o/gmp/mpn/sub.o:                      gmp/mpn/sub.c
	gcc $(F_MPN) -DOPERATION_sub  -c $^ -o $@

o/gmp/mpn/sub_1.o:                    gmp/mpn/sub_1.c
	gcc $(F_MPN) -DOPERATION_sub_1  -c $^ -o $@

o/gmp/mpn/sub_n.o:                    gmp/mpn/sub_n.c
	gcc $(F_MPN) -DOPERATION_sub_n  -c $^ -o $@

o/gmp/mpn/neg.o:                      gmp/mpn/neg.c
	gcc $(F_MPN) -DOPERATION_neg  -c $^ -o $@

o/gmp/mpn/com.o:                      gmp/mpn/com.c
	gcc $(F_MPN) -DOPERATION_com  -c $^ -o $@

o/gmp/mpn/mul_1.o:                    gmp/mpn/mul_1.c
	gcc $(F_MPN) -DOPERATION_mul_1  -c $^ -o $@

o/gmp/mpn/addmul_1.o:                 gmp/mpn/addmul_1.c
	gcc $(F_MPN) -DOPERATION_addmul_1  -c $^ -o $@

o/gmp/mpn/submul_1.o:                 gmp/mpn/submul_1.c
	gcc $(F_MPN) -DOPERATION_submul_1  -c $^ -o $@

o/gmp/mpn/lshift.o:                   gmp/mpn/lshift.c
	gcc $(F_MPN) -DOPERATION_lshift  -c $^ -o $@

o/gmp/mpn/rshift.o:                   gmp/mpn/rshift.c
	gcc $(F_MPN) -DOPERATION_rshift  -c $^ -o $@

o/gmp/mpn/dive_1.o:                   gmp/mpn/dive_1.c
	gcc $(F_MPN) -DOPERATION_dive_1  -c $^ -o $@

o/gmp/mpn/diveby3.o:                  gmp/mpn/diveby3.c
	gcc $(F_MPN) -DOPERATION_diveby3  -c $^ -o $@

o/gmp/mpn/divis.o:                    gmp/mpn/divis.c
	gcc $(F_MPN) -DOPERATION_divis  -c $^ -o $@

o/gmp/mpn/divrem.o:                   gmp/mpn/divrem.c
	gcc $(F_MPN) -DOPERATION_divrem  -c $^ -o $@

o/gmp/mpn/divrem_1.o:                 gmp/mpn/divrem_1.c
	gcc $(F_MPN) -DOPERATION_divrem_1  -c $^ -o $@

o/gmp/mpn/divrem_2.o:                 gmp/mpn/divrem_2.c
	gcc $(F_MPN) -DOPERATION_divrem_2  -c $^ -o $@

o/gmp/mpn/fib2_ui.o:                  gmp/mpn/fib2_ui.c
	gcc $(F_MPN) -DOPERATION_fib2_ui  -c $^ -o $@

o/gmp/mpn/mod_1.o:                    gmp/mpn/mod_1.c
	gcc $(F_MPN) -DOPERATION_mod_1  -c $^ -o $@

o/gmp/mpn/mod_34lsub1.o:              gmp/mpn/mod_34lsub1.c
	gcc $(F_MPN) -DOPERATION_mod_34lsub1  -c $^ -o $@

o/gmp/mpn/mode1o.o:                   gmp/mpn/mode1o.c
	gcc $(F_MPN) -DOPERATION_mode1o  -c $^ -o $@

o/gmp/mpn/pre_divrem_1.o:             gmp/mpn/pre_divrem_1.c
	gcc $(F_MPN) -DOPERATION_pre_divrem_1  -c $^ -o $@

o/gmp/mpn/pre_mod_1.o:                gmp/mpn/pre_mod_1.c
	gcc $(F_MPN) -DOPERATION_pre_mod_1  -c $^ -o $@

o/gmp/mpn/dump.o:                     gmp/mpn/dump.c
	gcc $(F_MPN) -DOPERATION_dump  -c $^ -o $@

o/gmp/mpn/mod_1_1.o:                  gmp/mpn/mod_1_1.c
	gcc $(F_MPN) -DOPERATION_mod_1_1  -c $^ -o $@

o/gmp/mpn/mod_1_2.o:                  gmp/mpn/mod_1_2.c
	gcc $(F_MPN) -DOPERATION_mod_1_2  -c $^ -o $@

o/gmp/mpn/mod_1_3.o:                  gmp/mpn/mod_1_3.c
	gcc $(F_MPN) -DOPERATION_mod_1_3  -c $^ -o $@

o/gmp/mpn/mod_1_4.o:                  gmp/mpn/mod_1_4.c
	gcc $(F_MPN) -DOPERATION_mod_1_4  -c $^ -o $@

o/gmp/mpn/lshiftc.o:                  gmp/mpn/lshiftc.c
	gcc $(F_MPN) -DOPERATION_lshiftc  -c $^ -o $@

o/gmp/mpn/mul.o:                      gmp/mpn/mul.c
	gcc $(F_MPN) -DOPERATION_mul  -c $^ -o $@

o/gmp/mpn/mul_fft.o:                  gmp/mpn/mul_fft.c
	gcc $(F_MPN) -DOPERATION_mul_fft  -c $^ -o $@

o/gmp/mpn/mul_n.o:                    gmp/mpn/mul_n.c
	gcc $(F_MPN) -DOPERATION_mul_n  -c $^ -o $@

o/gmp/mpn/sqr.o:                      gmp/mpn/sqr.c
	gcc $(F_MPN) -DOPERATION_sqr  -c $^ -o $@

o/gmp/mpn/mul_basecase.o:             gmp/mpn/mul_basecase.c
	gcc $(F_MPN) -DOPERATION_mul_basecase  -c $^ -o $@

o/gmp/mpn/sqr_basecase.o:             gmp/mpn/sqr_basecase.c
	gcc $(F_MPN) -DOPERATION_sqr_basecase  -c $^ -o $@

o/gmp/mpn/nussbaumer_mul.o:           gmp/mpn/nussbaumer_mul.c
	gcc $(F_MPN) -DOPERATION_nussbaumer_mul  -c $^ -o $@

o/gmp/mpn/random.o:                   gmp/mpn/random.c
	gcc $(F_MPN) -DOPERATION_random  -c $^ -o $@

o/gmp/mpn/random2.o:                  gmp/mpn/random2.c
	gcc $(F_MPN) -DOPERATION_random2  -c $^ -o $@

o/gmp/mpn/pow_1.o:                    gmp/mpn/pow_1.c
	gcc $(F_MPN) -DOPERATION_pow_1  -c $^ -o $@

o/gmp/mpn/rootrem.o:                  gmp/mpn/rootrem.c
	gcc $(F_MPN) -DOPERATION_rootrem  -c $^ -o $@

o/gmp/mpn/sqrtrem.o:                  gmp/mpn/sqrtrem.c
	gcc $(F_MPN) -DOPERATION_sqrtrem  -c $^ -o $@

o/gmp/mpn/get_str.o:                  gmp/mpn/get_str.c
	gcc $(F_MPN) -DOPERATION_get_str  -c $^ -o $@

o/gmp/mpn/set_str.o:                  gmp/mpn/set_str.c
	gcc $(F_MPN) -DOPERATION_set_str  -c $^ -o $@

o/gmp/mpn/scan0.o:                    gmp/mpn/scan0.c
	gcc $(F_MPN) -DOPERATION_scan0  -c $^ -o $@

o/gmp/mpn/scan1.o:                    gmp/mpn/scan1.c
	gcc $(F_MPN) -DOPERATION_scan1  -c $^ -o $@

o/gmp/mpn/popcount.o:                 gmp/mpn/popcount.c
	gcc $(F_MPN) -DOPERATION_popcount  -c $^ -o $@

o/gmp/mpn/hamdist.o:                  gmp/mpn/hamdist.c
	gcc $(F_MPN) -DOPERATION_hamdist  -c $^ -o $@

o/gmp/mpn/cmp.o:                      gmp/mpn/cmp.c
	gcc $(F_MPN) -DOPERATION_cmp  -c $^ -o $@

o/gmp/mpn/perfsqr.o:                  gmp/mpn/perfsqr.c
	gcc $(F_MPN) -DOPERATION_perfsqr  -c $^ -o $@

o/gmp/mpn/perfpow.o:                  gmp/mpn/perfpow.c
	gcc $(F_MPN) -DOPERATION_perfpow  -c $^ -o $@

o/gmp/mpn/gcd_1.o:                    gmp/mpn/gcd_1.c
	gcc $(F_MPN) -DOPERATION_gcd_1  -c $^ -o $@

o/gmp/mpn/gcd.o:                      gmp/mpn/gcd.c
	gcc $(F_MPN) -DOPERATION_gcd  -c $^ -o $@

o/gmp/mpn/gcdext_1.o:                 gmp/mpn/gcdext_1.c
	gcc $(F_MPN) -DOPERATION_gcdext_1  -c $^ -o $@

o/gmp/mpn/gcdext.o:                   gmp/mpn/gcdext.c
	gcc $(F_MPN) -DOPERATION_gcdext  -c $^ -o $@

o/gmp/mpn/gcd_lehmer.o:               gmp/mpn/gcd_lehmer.c
	gcc $(F_MPN) -DOPERATION_gcd_lehmer  -c $^ -o $@

o/gmp/mpn/gcd_subdiv_step.o:          gmp/mpn/gcd_subdiv_step.c
	gcc $(F_MPN) -DOPERATION_gcd_subdiv_step  -c $^ -o $@

o/gmp/mpn/gcdext_lehmer.o:            gmp/mpn/gcdext_lehmer.c
	gcc $(F_MPN) -DOPERATION_gcdext_lehmer  -c $^ -o $@

o/gmp/mpn/gcdext_subdiv_step.o:       gmp/mpn/gcdext_subdiv_step.c
	gcc $(F_MPN) -DOPERATION_gcdext_subdiv_step  -c $^ -o $@

o/gmp/mpn/div_q.o:                    gmp/mpn/div_q.c
	gcc $(F_MPN) -DOPERATION_div_q  -c $^ -o $@

o/gmp/mpn/tdiv_qr.o:                  gmp/mpn/tdiv_qr.c
	gcc $(F_MPN) -DOPERATION_tdiv_qr  -c $^ -o $@

o/gmp/mpn/jacbase.o:                  gmp/mpn/jacbase.c
	gcc $(F_MPN) -DOPERATION_jacbase  -c $^ -o $@

o/gmp/mpn/get_d.o:                    gmp/mpn/get_d.c
	gcc $(F_MPN) -DOPERATION_get_d  -c $^ -o $@

o/gmp/mpn/matrix22_mul.o:             gmp/mpn/matrix22_mul.c
	gcc $(F_MPN) -DOPERATION_matrix22_mul  -c $^ -o $@

o/gmp/mpn/hgcd2.o:                    gmp/mpn/hgcd2.c
	gcc $(F_MPN) -DOPERATION_hgcd2  -c $^ -o $@

o/gmp/mpn/hgcd.o:                     gmp/mpn/hgcd.c
	gcc $(F_MPN) -DOPERATION_hgcd  -c $^ -o $@

o/gmp/mpn/mullo_n.o:                  gmp/mpn/mullo_n.c
	gcc $(F_MPN) -DOPERATION_mullo_n  -c $^ -o $@

o/gmp/mpn/mullo_basecase.o:           gmp/mpn/mullo_basecase.c
	gcc $(F_MPN) -DOPERATION_mullo_basecase  -c $^ -o $@

o/gmp/mpn/toom22_mul.o:               gmp/mpn/toom22_mul.c
	gcc $(F_MPN) -DOPERATION_toom22_mul  -c $^ -o $@

o/gmp/mpn/toom32_mul.o:               gmp/mpn/toom32_mul.c
	gcc $(F_MPN) -DOPERATION_toom32_mul  -c $^ -o $@

o/gmp/mpn/toom42_mul.o:               gmp/mpn/toom42_mul.c
	gcc $(F_MPN) -DOPERATION_toom42_mul  -c $^ -o $@

o/gmp/mpn/toom52_mul.o:               gmp/mpn/toom52_mul.c
	gcc $(F_MPN) -DOPERATION_toom52_mul  -c $^ -o $@

o/gmp/mpn/toom62_mul.o:               gmp/mpn/toom62_mul.c
	gcc $(F_MPN) -DOPERATION_toom62_mul  -c $^ -o $@

o/gmp/mpn/toom33_mul.o:               gmp/mpn/toom33_mul.c
	gcc $(F_MPN) -DOPERATION_toom33_mul  -c $^ -o $@

o/gmp/mpn/toom43_mul.o:               gmp/mpn/toom43_mul.c
	gcc $(F_MPN) -DOPERATION_toom43_mul  -c $^ -o $@

o/gmp/mpn/toom53_mul.o:               gmp/mpn/toom53_mul.c
	gcc $(F_MPN) -DOPERATION_toom53_mul  -c $^ -o $@

o/gmp/mpn/toom63_mul.o:               gmp/mpn/toom63_mul.c
	gcc $(F_MPN) -DOPERATION_toom63_mul  -c $^ -o $@

o/gmp/mpn/toom44_mul.o:               gmp/mpn/toom44_mul.c
	gcc $(F_MPN) -DOPERATION_toom44_mul  -c $^ -o $@

o/gmp/mpn/toom6h_mul.o:               gmp/mpn/toom6h_mul.c
	gcc $(F_MPN) -DOPERATION_toom6h_mul  -c $^ -o $@

o/gmp/mpn/toom6_sqr.o:                gmp/mpn/toom6_sqr.c
	gcc $(F_MPN) -DOPERATION_toom6_sqr  -c $^ -o $@

o/gmp/mpn/toom8h_mul.o:               gmp/mpn/toom8h_mul.c
	gcc $(F_MPN) -DOPERATION_toom8h_mul  -c $^ -o $@

o/gmp/mpn/toom8_sqr.o:                gmp/mpn/toom8_sqr.c
	gcc $(F_MPN) -DOPERATION_toom8_sqr  -c $^ -o $@

o/gmp/mpn/toom_couple_handling.o:     gmp/mpn/toom_couple_handling.c
	gcc $(F_MPN) -DOPERATION_toom_couple_handling  -c $^ -o $@

o/gmp/mpn/toom2_sqr.o:                gmp/mpn/toom2_sqr.c
	gcc $(F_MPN) -DOPERATION_toom2_sqr  -c $^ -o $@

o/gmp/mpn/toom3_sqr.o:                gmp/mpn/toom3_sqr.c
	gcc $(F_MPN) -DOPERATION_toom3_sqr  -c $^ -o $@

o/gmp/mpn/toom4_sqr.o:                gmp/mpn/toom4_sqr.c
	gcc $(F_MPN) -DOPERATION_toom4_sqr  -c $^ -o $@

o/gmp/mpn/toom_eval_dgr3_pm1.o:       gmp/mpn/toom_eval_dgr3_pm1.c
	gcc $(F_MPN) -DOPERATION_toom_eval_dgr3_pm1  -c $^ -o $@

o/gmp/mpn/toom_eval_dgr3_pm2.o:       gmp/mpn/toom_eval_dgr3_pm2.c
	gcc $(F_MPN) -DOPERATION_toom_eval_dgr3_pm2  -c $^ -o $@

o/gmp/mpn/toom_eval_pm1.o:            gmp/mpn/toom_eval_pm1.c
	gcc $(F_MPN) -DOPERATION_toom_eval_pm1  -c $^ -o $@

o/gmp/mpn/toom_eval_pm2.o:            gmp/mpn/toom_eval_pm2.c
	gcc $(F_MPN) -DOPERATION_toom_eval_pm2  -c $^ -o $@

o/gmp/mpn/toom_eval_pm2exp.o:         gmp/mpn/toom_eval_pm2exp.c
	gcc $(F_MPN) -DOPERATION_toom_eval_pm2exp  -c $^ -o $@

o/gmp/mpn/toom_eval_pm2rexp.o:        gmp/mpn/toom_eval_pm2rexp.c
	gcc $(F_MPN) -DOPERATION_toom_eval_pm2rexp  -c $^ -o $@

o/gmp/mpn/toom_interpolate_5pts.o:    gmp/mpn/toom_interpolate_5pts.c
	gcc $(F_MPN) -DOPERATION_toom_interpolate_5pts  -c $^ -o $@

o/gmp/mpn/toom_interpolate_6pts.o:    gmp/mpn/toom_interpolate_6pts.c
	gcc $(F_MPN) -DOPERATION_toom_interpolate_6pts  -c $^ -o $@

o/gmp/mpn/toom_interpolate_7pts.o:    gmp/mpn/toom_interpolate_7pts.c
	gcc $(F_MPN) -DOPERATION_toom_interpolate_7pts  -c $^ -o $@

o/gmp/mpn/toom_interpolate_8pts.o:    gmp/mpn/toom_interpolate_8pts.c
	gcc $(F_MPN) -DOPERATION_toom_interpolate_8pts  -c $^ -o $@

o/gmp/mpn/toom_interpolate_12pts.o:   gmp/mpn/toom_interpolate_12pts.c
	gcc $(F_MPN) -DOPERATION_toom_interpolate_12pts  -c $^ -o $@

o/gmp/mpn/toom_interpolate_16pts.o:   gmp/mpn/toom_interpolate_16pts.c
	gcc $(F_MPN) -DOPERATION_toom_interpolate_16pts  -c $^ -o $@

o/gmp/mpn/invertappr.o:               gmp/mpn/invertappr.c
	gcc $(F_MPN) -DOPERATION_invertappr  -c $^ -o $@

o/gmp/mpn/invert.o:                   gmp/mpn/invert.c
	gcc $(F_MPN) -DOPERATION_invert  -c $^ -o $@

o/gmp/mpn/binvert.o:                  gmp/mpn/binvert.c
	gcc $(F_MPN) -DOPERATION_binvert  -c $^ -o $@

o/gmp/mpn/mulmod_bnm1.o:              gmp/mpn/mulmod_bnm1.c
	gcc $(F_MPN) -DOPERATION_mulmod_bnm1  -c $^ -o $@

o/gmp/mpn/sqrmod_bnm1.o:              gmp/mpn/sqrmod_bnm1.c
	gcc $(F_MPN) -DOPERATION_sqrmod_bnm1  -c $^ -o $@

o/gmp/mpn/sbpi1_div_q.o:              gmp/mpn/sbpi1_div_q.c
	gcc $(F_MPN) -DOPERATION_sbpi1_div_q  -c $^ -o $@

o/gmp/mpn/sbpi1_div_qr.o:             gmp/mpn/sbpi1_div_qr.c
	gcc $(F_MPN) -DOPERATION_sbpi1_div_qr  -c $^ -o $@

o/gmp/mpn/sbpi1_divappr_q.o:          gmp/mpn/sbpi1_divappr_q.c
	gcc $(F_MPN) -DOPERATION_sbpi1_divappr_q  -c $^ -o $@

o/gmp/mpn/dcpi1_div_q.o:              gmp/mpn/dcpi1_div_q.c
	gcc $(F_MPN) -DOPERATION_dcpi1_div_q  -c $^ -o $@

o/gmp/mpn/dcpi1_div_qr.o:             gmp/mpn/dcpi1_div_qr.c
	gcc $(F_MPN) -DOPERATION_dcpi1_div_qr  -c $^ -o $@

o/gmp/mpn/dcpi1_divappr_q.o:          gmp/mpn/dcpi1_divappr_q.c
	gcc $(F_MPN) -DOPERATION_dcpi1_divappr_q  -c $^ -o $@

o/gmp/mpn/mu_div_qr.o:                gmp/mpn/mu_div_qr.c
	gcc $(F_MPN) -DOPERATION_mu_div_qr  -c $^ -o $@

o/gmp/mpn/mu_divappr_q.o:             gmp/mpn/mu_divappr_q.c
	gcc $(F_MPN) -DOPERATION_mu_divappr_q  -c $^ -o $@

o/gmp/mpn/mu_div_q.o:                 gmp/mpn/mu_div_q.c
	gcc $(F_MPN) -DOPERATION_mu_div_q  -c $^ -o $@

o/gmp/mpn/bdiv_q_1.o:                 gmp/mpn/bdiv_q_1.c
	gcc $(F_MPN) -DOPERATION_bdiv_q_1  -c $^ -o $@

o/gmp/mpn/sbpi1_bdiv_q.o:             gmp/mpn/sbpi1_bdiv_q.c
	gcc $(F_MPN) -DOPERATION_sbpi1_bdiv_q  -c $^ -o $@

o/gmp/mpn/sbpi1_bdiv_qr.o:            gmp/mpn/sbpi1_bdiv_qr.c
	gcc $(F_MPN) -DOPERATION_sbpi1_bdiv_qr  -c $^ -o $@

o/gmp/mpn/dcpi1_bdiv_q.o:             gmp/mpn/dcpi1_bdiv_q.c
	gcc $(F_MPN) -DOPERATION_dcpi1_bdiv_q  -c $^ -o $@

o/gmp/mpn/dcpi1_bdiv_qr.o:            gmp/mpn/dcpi1_bdiv_qr.c
	gcc $(F_MPN) -DOPERATION_dcpi1_bdiv_qr  -c $^ -o $@

o/gmp/mpn/mu_bdiv_q.o:                gmp/mpn/mu_bdiv_q.c
	gcc $(F_MPN) -DOPERATION_mu_bdiv_q  -c $^ -o $@

o/gmp/mpn/mu_bdiv_qr.o:               gmp/mpn/mu_bdiv_qr.c
	gcc $(F_MPN) -DOPERATION_mu_bdiv_qr  -c $^ -o $@

o/gmp/mpn/bdiv_q.o:                   gmp/mpn/bdiv_q.c
	gcc $(F_MPN) -DOPERATION_bdiv_q  -c $^ -o $@

o/gmp/mpn/bdiv_qr.o:                  gmp/mpn/bdiv_qr.c
	gcc $(F_MPN) -DOPERATION_bdiv_qr  -c $^ -o $@

o/gmp/mpn/divexact.o:                 gmp/mpn/divexact.c
	gcc $(F_MPN) -DOPERATION_divexact  -c $^ -o $@

o/gmp/mpn/bdiv_dbm1c.o:               gmp/mpn/bdiv_dbm1c.c
	gcc $(F_MPN) -DOPERATION_bdiv_dbm1c  -c $^ -o $@

o/gmp/mpn/redc_1.o:                   gmp/mpn/redc_1.c
	gcc $(F_MPN) -DOPERATION_redc_1  -c $^ -o $@

o/gmp/mpn/redc_2.o:                   gmp/mpn/redc_2.c
	gcc $(F_MPN) -DOPERATION_redc_2  -c $^ -o $@

o/gmp/mpn/redc_n.o:                   gmp/mpn/redc_n.c
	gcc $(F_MPN) -DOPERATION_redc_n  -c $^ -o $@

o/gmp/mpn/powm.o:                     gmp/mpn/powm.c
	gcc $(F_MPN) -DOPERATION_powm  -c $^ -o $@

o/gmp/mpn/powlo.o:                    gmp/mpn/powlo.c
	gcc $(F_MPN) -DOPERATION_powlo  -c $^ -o $@

o/gmp/mpn/powm_sec.o:                 gmp/mpn/powm_sec.c
	gcc $(F_MPN) -DOPERATION_powm_sec  -c $^ -o $@

o/gmp/mpn/subcnd_n.o:                 gmp/mpn/subcnd_n.c
	gcc $(F_MPN) -DOPERATION_subcnd_n  -c $^ -o $@

o/gmp/mpn/redc_1_sec.o:               gmp/mpn/redc_1_sec.c
	gcc $(F_MPN) -DOPERATION_redc_1_sec  -c $^ -o $@

o/gmp/mpn/trialdiv.o:                 gmp/mpn/trialdiv.c
	gcc $(F_MPN) -DOPERATION_trialdiv  -c $^ -o $@

o/gmp/mpn/remove.o:                   gmp/mpn/remove.c
	gcc $(F_MPN) -DOPERATION_remove  -c $^ -o $@

o/gmp/mpn/and_n.o:                    gmp/mpn/and_n.c
	gcc $(F_MPN) -DOPERATION_and_n  -c $^ -o $@

o/gmp/mpn/andn_n.o:                   gmp/mpn/andn_n.c
	gcc $(F_MPN) -DOPERATION_andn_n  -c $^ -o $@

o/gmp/mpn/nand_n.o:                   gmp/mpn/nand_n.c
	gcc $(F_MPN) -DOPERATION_nand_n  -c $^ -o $@

o/gmp/mpn/ior_n.o:                    gmp/mpn/ior_n.c
	gcc $(F_MPN) -DOPERATION_ior_n  -c $^ -o $@

o/gmp/mpn/iorn_n.o:                   gmp/mpn/iorn_n.c
	gcc $(F_MPN) -DOPERATION_iorn_n  -c $^ -o $@

o/gmp/mpn/nior_n.o:                   gmp/mpn/nior_n.c
	gcc $(F_MPN) -DOPERATION_nior_n  -c $^ -o $@

o/gmp/mpn/xor_n.o:                    gmp/mpn/xor_n.c
	gcc $(F_MPN) -DOPERATION_xor_n  -c $^ -o $@

o/gmp/mpn/xnor_n.o:                   gmp/mpn/xnor_n.c
	gcc $(F_MPN) -DOPERATION_xnor_n  -c $^ -o $@

o/gmp/mpn/copyi.o:                    gmp/mpn/copyi.c
	gcc $(F_MPN) -DOPERATION_copyi  -c $^ -o $@

o/gmp/mpn/copyd.o:                    gmp/mpn/copyd.c
	gcc $(F_MPN) -DOPERATION_copyd  -c $^ -o $@

o/gmp/mpn/zero.o:                     gmp/mpn/zero.c
	gcc $(F_MPN) -DOPERATION_zero  -c $^ -o $@

  # }

  # printf {

DGMP_PRINTF=-DHAVE_CONFIG_H -D__GMP_WITHIN_GMP -DNO_ASM -D__USE_MINGW_ACCESS
IGMP_PRINTF=-Igmp -I$(SRCROOT)/gmp
F_GMP_PRINTF=$(DGMP_PRINTF) $(IGMP_PRINTF)

o/gmp/printf/asprintf.o:             $(SRCROOT)/gmp/printf/asprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/asprntffuns.o:          $(SRCROOT)/gmp/printf/asprntffuns.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/doprnt.o:               $(SRCROOT)/gmp/printf/doprnt.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/doprntf.o:              $(SRCROOT)/gmp/printf/doprntf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/doprnti.o:              $(SRCROOT)/gmp/printf/doprnti.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/fprintf.o:              $(SRCROOT)/gmp/printf/fprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/obprintf.o:             $(SRCROOT)/gmp/printf/obprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/obvprintf.o:            $(SRCROOT)/gmp/printf/obvprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/obprntffuns.o:          $(SRCROOT)/gmp/printf/obprntffuns.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/printf.o:               $(SRCROOT)/gmp/printf/printf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/printffuns.o:           $(SRCROOT)/gmp/printf/printffuns.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/snprintf.o:             $(SRCROOT)/gmp/printf/snprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/snprntffuns.o:          $(SRCROOT)/gmp/printf/snprntffuns.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/sprintf.o:              $(SRCROOT)/gmp/printf/sprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/sprintffuns.o:          $(SRCROOT)/gmp/printf/sprintffuns.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/vasprintf.o:            $(SRCROOT)/gmp/printf/vasprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/vfprintf.o:             $(SRCROOT)/gmp/printf/vfprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/vprintf.o:              $(SRCROOT)/gmp/printf/vprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/vsnprintf.o:            $(SRCROOT)/gmp/printf/vsnprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/vsprintf.o:             $(SRCROOT)/gmp/printf/vsprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

o/gmp/printf/repl-vsnprintf.o:       $(SRCROOT)/gmp/printf/repl-vsnprintf.c
	gcc $(F_GMP_PRINTF) -c $^ -o $@

  # }

  # scanf  {

DGMP_SCANF=-DHAVE_CONFIG_H -D__GMP_WITHIN_GMP -DNO_ASM -D__USE_MINGW_ACCESS
IGMP_SCANF=-Igmp -I$(SRCROOT)/gmp
F_GMP_SCANF=$(DGMP_SCANF) $(IGMP_SCANF)

o/gmp/scanf/doscan.o:                $(SRCROOT)/gmp/scanf/doscan.c
	gcc $(F_GMP_SCANF) -c $^ -o $@
o/gmp/scanf/fscanf.o:                $(SRCROOT)/gmp/scanf/fscanf.c
	gcc $(F_GMP_SCANF) -c $^ -o $@

o/gmp/scanf/fscanffuns.o:            $(SRCROOT)/gmp/scanf/fscanffuns.c
	gcc $(F_GMP_SCANF) -c $^ -o $@

o/gmp/scanf/scanf.o:                 $(SRCROOT)/gmp/scanf/scanf.c
	gcc $(F_GMP_SCANF) -c $^ -o $@

o/gmp/scanf/sscanf.o:                $(SRCROOT)/gmp/scanf/sscanf.c
	gcc $(F_GMP_SCANF) -c $^ -o $@

o/gmp/scanf/sscanffuns.o:            $(SRCROOT)/gmp/scanf/sscanffuns.c
	gcc $(F_GMP_SCANF) -c $^ -o $@

o/gmp/scanf/vfscanf.o:               $(SRCROOT)/gmp/scanf/vfscanf.c
	gcc $(F_GMP_SCANF) -c $^ -o $@

o/gmp/scanf/vscanf.o:                $(SRCROOT)/gmp/scanf/vscanf.c
	gcc $(F_GMP_SCANF) -c $^ -o $@

o/gmp/scanf/vsscanf.o:               $(SRCROOT)/gmp/scanf/vsscanf.c
	gcc $(F_GMP_SCANF) -c $^ -o $@


  # }

  # o -> a {

o/gmp/libgmp.a: o/gmp/assert.o                     \
                o/gmp/compat.o                     \
                o/gmp/errno.o                      \
                o/gmp/extract-dbl.o                \
                o/gmp/invalid.o                    \
                o/gmp/memory.o                     \
                o/gmp/mp_bpl.o                     \
                o/gmp/mp_clz_tab.o                 \
                o/gmp/mp_dv_tab.o                  \
                o/gmp/mp_minv_tab.o                \
                o/gmp/mp_get_fns.o                 \
                o/gmp/mp_set_fns.o                 \
                o/gmp/rand.o                       \
                o/gmp/randclr.o                    \
                o/gmp/randdef.o                    \
                o/gmp/randiset.o                   \
                o/gmp/randlc2s.o                   \
                o/gmp/randlc2x.o                   \
                o/gmp/randmt.o                     \
                o/gmp/randmts.o                    \
                o/gmp/rands.o                      \
                o/gmp/randsd.o                     \
                o/gmp/randsdui.o                   \
                o/gmp/randbui.o                    \
                o/gmp/randmui.o                    \
                o/gmp/version.o                    \
                o/gmp/nextprime.o                  \
                o/gmp/tal-reent.o                  \
                o/gmp/mpf/init2.o                  \
                o/gmp/mpf/inits.o                  \
                o/gmp/mpf/set.o                    \
                o/gmp/mpf/set_ui.o                 \
                o/gmp/mpf/set_si.o                 \
                o/gmp/mpf/set_str.o                \
                o/gmp/mpf/set_d.o                  \
                o/gmp/mpf/set_z.o                  \
                o/gmp/mpf/iset.o                   \
                o/gmp/mpf/iset_ui.o                \
                o/gmp/mpf/iset_si.o                \
                o/gmp/mpf/iset_str.o               \
                o/gmp/mpf/iset_d.o                 \
                o/gmp/mpf/clear.o                  \
                o/gmp/mpf/clears.o                 \
                o/gmp/mpf/get_str.o                \
                o/gmp/mpf/dump.o                   \
                o/gmp/mpf/size.o                   \
                o/gmp/mpf/eq.o                     \
                o/gmp/mpf/reldiff.o                \
                o/gmp/mpf/sqrt.o                   \
                o/gmp/mpf/random2.o                \
                o/gmp/mpf/inp_str.o                \
                o/gmp/mpf/out_str.o                \
                o/gmp/mpf/add.o                    \
                o/gmp/mpf/add_ui.o                 \
                o/gmp/mpf/sub.o                    \
                o/gmp/mpf/sub_ui.o                 \
                o/gmp/mpf/ui_sub.o                 \
                o/gmp/mpf/mul.o                    \
                o/gmp/mpf/mul_ui.o                 \
                o/gmp/mpf/div.o                    \
                o/gmp/mpf/div_ui.o                 \
                o/gmp/mpf/cmp.o                    \
                o/gmp/mpf/cmp_d.o                  \
                o/gmp/mpf/cmp_ui.o                 \
                o/gmp/mpf/cmp_si.o                 \
                o/gmp/mpf/mul_2exp.o               \
                o/gmp/mpf/div_2exp.o               \
                o/gmp/mpf/abs.o                    \
                o/gmp/mpf/neg.o                    \
                o/gmp/mpf/set_q.o                  \
                o/gmp/mpf/get_d.o                  \
                o/gmp/mpf/get_d_2exp.o             \
                o/gmp/mpf/set_dfl_prec.o           \
                o/gmp/mpf/set_prc.o                \
                o/gmp/mpf/set_prc_raw.o            \
                o/gmp/mpf/get_dfl_prec.o           \
                o/gmp/mpf/get_prc.o                \
                o/gmp/mpf/ui_div.o                 \
                o/gmp/mpf/sqrt_ui.o                \
                o/gmp/mpf/ceilfloor.o              \
                o/gmp/mpf/trunc.o                  \
                o/gmp/mpf/pow_ui.o                 \
                o/gmp/mpf/urandomb.o               \
                o/gmp/mpf/swap.o                   \
                o/gmp/mpf/fits_sint.o              \
                o/gmp/mpf/fits_slong.o             \
                o/gmp/mpf/fits_sshort.o            \
                o/gmp/mpf/fits_uint.o              \
                o/gmp/mpf/fits_ulong.o             \
                o/gmp/mpf/fits_ushort.o            \
                o/gmp/mpf/get_si.o                 \
                o/gmp/mpf/get_ui.o                 \
                o/gmp/mpf/int_p.o                  \
                o/gmp/mpz/abs.o                    \
                o/gmp/mpz/add.o                    \
                o/gmp/mpz/add_ui.o                 \
                o/gmp/mpz/aorsmul.o                \
                o/gmp/mpz/aorsmul_i.o              \
                o/gmp/mpz/and.o                    \
                o/gmp/mpz/array_init.o             \
                o/gmp/mpz/bin_ui.o                 \
                o/gmp/mpz/bin_uiui.o               \
                o/gmp/mpz/cdiv_q.o                 \
                o/gmp/mpz/cdiv_q_ui.o              \
                o/gmp/mpz/cdiv_qr.o                \
                o/gmp/mpz/cdiv_qr_ui.o             \
                o/gmp/mpz/cdiv_r.o                 \
                o/gmp/mpz/cdiv_r_ui.o              \
                o/gmp/mpz/cdiv_ui.o                \
                o/gmp/mpz/cfdiv_q_2exp.o           \
                o/gmp/mpz/cfdiv_r_2exp.o           \
                o/gmp/mpz/clear.o                  \
                o/gmp/mpz/clears.o                 \
                o/gmp/mpz/clrbit.o                 \
                o/gmp/mpz/cmp.o                    \
                o/gmp/mpz/cmp_d.o                  \
                o/gmp/mpz/cmp_si.o                 \
                o/gmp/mpz/cmp_ui.o                 \
                o/gmp/mpz/cmpabs.o                 \
                o/gmp/mpz/cmpabs_d.o               \
                o/gmp/mpz/cmpabs_ui.o              \
                o/gmp/mpz/com.o                    \
                o/gmp/mpz/combit.o                 \
                o/gmp/mpz/cong.o                   \
                o/gmp/mpz/cong_2exp.o              \
                o/gmp/mpz/cong_ui.o                \
                o/gmp/mpz/divexact.o               \
                o/gmp/mpz/divegcd.o                \
                o/gmp/mpz/dive_ui.o                \
                o/gmp/mpz/divis.o                  \
                o/gmp/mpz/divis_ui.o               \
                o/gmp/mpz/divis_2exp.o             \
                o/gmp/mpz/dump.o                   \
                o/gmp/mpz/export.o                 \
                o/gmp/mpz/fac_ui.o                 \
                o/gmp/mpz/fdiv_q.o                 \
                o/gmp/mpz/fdiv_q_ui.o              \
                o/gmp/mpz/fdiv_qr.o                \
                o/gmp/mpz/fdiv_qr_ui.o             \
                o/gmp/mpz/fdiv_r.o                 \
                o/gmp/mpz/fdiv_r_ui.o              \
                o/gmp/mpz/fdiv_ui.o                \
                o/gmp/mpz/fib_ui.o                 \
                o/gmp/mpz/fib2_ui.o                \
                o/gmp/mpz/fits_sint.o              \
                o/gmp/mpz/fits_slong.o             \
                o/gmp/mpz/fits_sshort.o            \
                o/gmp/mpz/fits_uint.o              \
                o/gmp/mpz/fits_ulong.o             \
                o/gmp/mpz/fits_ushort.o            \
                o/gmp/mpz/gcd.o                    \
                o/gmp/mpz/gcd_ui.o                 \
                o/gmp/mpz/gcdext.o                 \
                o/gmp/mpz/get_d.o                  \
                o/gmp/mpz/get_d_2exp.o             \
                o/gmp/mpz/get_si.o                 \
                o/gmp/mpz/get_str.o                \
                o/gmp/mpz/get_ui.o                 \
                o/gmp/mpz/getlimbn.o               \
                o/gmp/mpz/hamdist.o                \
                o/gmp/mpz/import.o                 \
                o/gmp/mpz/init.o                   \
                o/gmp/mpz/init2.o                  \
                o/gmp/mpz/inits.o                  \
                o/gmp/mpz/inp_raw.o                \
                o/gmp/mpz/inp_str.o                \
                o/gmp/mpz/invert.o                 \
                o/gmp/mpz/ior.o                    \
                o/gmp/mpz/iset.o                   \
                o/gmp/mpz/iset_d.o                 \
                o/gmp/mpz/iset_si.o                \
                o/gmp/mpz/iset_str.o               \
                o/gmp/mpz/iset_ui.o                \
                o/gmp/mpz/jacobi.o                 \
                o/gmp/mpz/kronsz.o                 \
                o/gmp/mpz/kronuz.o                 \
                o/gmp/mpz/kronzs.o                 \
                o/gmp/mpz/kronzu.o                 \
                o/gmp/mpz/lcm.o                    \
                o/gmp/mpz/lcm_ui.o                 \
                o/gmp/mpz/lucnum_ui.o              \
                o/gmp/mpz/lucnum2_ui.o             \
                o/gmp/mpz/millerrabin.o            \
                o/gmp/mpz/mod.o                    \
                o/gmp/mpz/mul.o                    \
                o/gmp/mpz/mul_2exp.o               \
                o/gmp/mpz/mul_si.o                 \
                o/gmp/mpz/mul_ui.o                 \
                o/gmp/mpz/n_pow_ui.o               \
                o/gmp/mpz/neg.o                    \
                o/gmp/mpz/nextprime.o              \
                o/gmp/mpz/out_raw.o                \
                o/gmp/mpz/out_str.o                \
                o/gmp/mpz/perfpow.o                \
                o/gmp/mpz/perfsqr.o                \
                o/gmp/mpz/popcount.o               \
                o/gmp/mpz/pow_ui.o                 \
                o/gmp/mpz/powm.o                   \
                o/gmp/mpz/powm_sec.o               \
                o/gmp/mpz/powm_ui.o                \
                o/gmp/mpz/pprime_p.o               \
                o/gmp/mpz/random.o                 \
                o/gmp/mpz/random2.o                \
                o/gmp/mpz/realloc.o                \
                o/gmp/mpz/realloc2.o               \
                o/gmp/mpz/remove.o                 \
                o/gmp/mpz/root.o                   \
                o/gmp/mpz/rootrem.o                \
                o/gmp/mpz/rrandomb.o               \
                o/gmp/mpz/scan0.o                  \
                o/gmp/mpz/scan1.o                  \
                o/gmp/mpz/set.o                    \
                o/gmp/mpz/set_d.o                  \
                o/gmp/mpz/set_f.o                  \
                o/gmp/mpz/set_q.o                  \
                o/gmp/mpz/set_si.o                 \
                o/gmp/mpz/set_str.o                \
                o/gmp/mpz/set_ui.o                 \
                o/gmp/mpz/setbit.o                 \
                o/gmp/mpz/size.o                   \
                o/gmp/mpz/sizeinbase.o             \
                o/gmp/mpz/sqrt.o                   \
                o/gmp/mpz/sqrtrem.o                \
                o/gmp/mpz/sub.o                    \
                o/gmp/mpz/sub_ui.o                 \
                o/gmp/mpz/swap.o                   \
                o/gmp/mpz/tdiv_ui.o                \
                o/gmp/mpz/tdiv_q.o                 \
                o/gmp/mpz/tdiv_q_2exp.o            \
                o/gmp/mpz/tdiv_q_ui.o              \
                o/gmp/mpz/tdiv_qr.o                \
                o/gmp/mpz/tdiv_qr_ui.o             \
                o/gmp/mpz/tdiv_r.o                 \
                o/gmp/mpz/tdiv_r_2exp.o            \
                o/gmp/mpz/tdiv_r_ui.o              \
                o/gmp/mpz/tstbit.o                 \
                o/gmp/mpz/ui_pow_ui.o              \
                o/gmp/mpz/ui_sub.o                 \
                o/gmp/mpz/urandomb.o               \
                o/gmp/mpz/urandomm.o               \
                o/gmp/mpz/xor.o                    \
                o/gmp/mpq/aors.o                   \
                o/gmp/mpq/canonicalize.o           \
                o/gmp/mpq/clear.o                  \
                o/gmp/mpq/clears.o                 \
                o/gmp/mpq/cmp.o                    \
                o/gmp/mpq/cmp_si.o                 \
                o/gmp/mpq/cmp_ui.o                 \
                o/gmp/mpq/div.o                    \
                o/gmp/mpq/get_d.o                  \
                o/gmp/mpq/get_den.o                \
                o/gmp/mpq/get_num.o                \
                o/gmp/mpq/get_str.o                \
                o/gmp/mpq/init.o                   \
                o/gmp/mpq/inits.o                  \
                o/gmp/mpq/inp_str.o                \
                o/gmp/mpq/inv.o                    \
                o/gmp/mpq/md_2exp.o                \
                o/gmp/mpq/mul.o                    \
                o/gmp/mpq/neg.o                    \
                o/gmp/mpq/out_str.o                \
                o/gmp/mpq/set.o                    \
                o/gmp/mpq/set_den.o                \
                o/gmp/mpq/set_num.o                \
                o/gmp/mpq/set_si.o                 \
                o/gmp/mpq/set_str.o                \
                o/gmp/mpq/set_ui.o                 \
                o/gmp/mpq/equal.o                  \
                o/gmp/mpq/set_z.o                  \
                o/gmp/mpq/set_d.o                  \
                o/gmp/mpq/set_f.o                  \
                o/gmp/mpq/swap.o                   \
                o/gmp/mpn/fib_table.o              \
                o/gmp/mpn/mp_bases.o               \
                o/gmp/mpn/add.o                    \
                o/gmp/mpn/add_1.o                  \
                o/gmp/mpn/add_n.o                  \
                o/gmp/mpn/sub.o                    \
                o/gmp/mpn/sub_1.o                  \
                o/gmp/mpn/sub_n.o                  \
                o/gmp/mpn/neg.o                    \
                o/gmp/mpn/com.o                    \
                o/gmp/mpn/mul_1.o                  \
                o/gmp/mpn/addmul_1.o               \
                o/gmp/mpn/submul_1.o               \
                o/gmp/mpn/lshift.o                 \
                o/gmp/mpn/rshift.o                 \
                o/gmp/mpn/dive_1.o                 \
                o/gmp/mpn/diveby3.o                \
                o/gmp/mpn/divis.o                  \
                o/gmp/mpn/divrem.o                 \
                o/gmp/mpn/divrem_1.o               \
                o/gmp/mpn/divrem_2.o               \
                o/gmp/mpn/fib2_ui.o                \
                o/gmp/mpn/mod_1.o                  \
                o/gmp/mpn/mod_34lsub1.o            \
                o/gmp/mpn/mode1o.o                 \
                o/gmp/mpn/pre_divrem_1.o           \
                o/gmp/mpn/pre_mod_1.o              \
                o/gmp/mpn/dump.o                   \
                o/gmp/mpn/mod_1_1.o                \
                o/gmp/mpn/mod_1_2.o                \
                o/gmp/mpn/mod_1_3.o                \
                o/gmp/mpn/mod_1_4.o                \
                o/gmp/mpn/lshiftc.o                \
                o/gmp/mpn/mul.o                    \
                o/gmp/mpn/mul_fft.o                \
                o/gmp/mpn/mul_n.o                  \
                o/gmp/mpn/sqr.o                    \
                o/gmp/mpn/mul_basecase.o           \
                o/gmp/mpn/sqr_basecase.o           \
                o/gmp/mpn/nussbaumer_mul.o         \
                o/gmp/mpn/random.o                 \
                o/gmp/mpn/random2.o                \
                o/gmp/mpn/pow_1.o                  \
                o/gmp/mpn/rootrem.o                \
                o/gmp/mpn/sqrtrem.o                \
                o/gmp/mpn/get_str.o                \
                o/gmp/mpn/set_str.o                \
                o/gmp/mpn/scan0.o                  \
                o/gmp/mpn/scan1.o                  \
                o/gmp/mpn/popcount.o               \
                o/gmp/mpn/hamdist.o                \
                o/gmp/mpn/cmp.o                    \
                o/gmp/mpn/perfsqr.o                \
                o/gmp/mpn/perfpow.o                \
                o/gmp/mpn/gcd_1.o                  \
                o/gmp/mpn/gcd.o                    \
                o/gmp/mpn/gcdext_1.o               \
                o/gmp/mpn/gcdext.o                 \
                o/gmp/mpn/gcd_lehmer.o             \
                o/gmp/mpn/gcd_subdiv_step.o        \
                o/gmp/mpn/gcdext_lehmer.o          \
                o/gmp/mpn/gcdext_subdiv_step.o     \
                o/gmp/mpn/div_q.o                  \
                o/gmp/mpn/tdiv_qr.o                \
                o/gmp/mpn/jacbase.o                \
                o/gmp/mpn/get_d.o                  \
                o/gmp/mpn/matrix22_mul.o           \
                o/gmp/mpn/hgcd2.o                  \
                o/gmp/mpn/hgcd.o                   \
                o/gmp/mpn/mullo_n.o                \
                o/gmp/mpn/mullo_basecase.o         \
                o/gmp/mpn/toom22_mul.o             \
                o/gmp/mpn/toom32_mul.o             \
                o/gmp/mpn/toom42_mul.o             \
                o/gmp/mpn/toom52_mul.o             \
                o/gmp/mpn/toom62_mul.o             \
                o/gmp/mpn/toom33_mul.o             \
                o/gmp/mpn/toom43_mul.o             \
                o/gmp/mpn/toom53_mul.o             \
                o/gmp/mpn/toom63_mul.o             \
                o/gmp/mpn/toom44_mul.o             \
                o/gmp/mpn/toom6h_mul.o             \
                o/gmp/mpn/toom6_sqr.o              \
                o/gmp/mpn/toom8h_mul.o             \
                o/gmp/mpn/toom8_sqr.o              \
                o/gmp/mpn/toom_couple_handling.o   \
                o/gmp/mpn/toom2_sqr.o              \
                o/gmp/mpn/toom3_sqr.o              \
                o/gmp/mpn/toom4_sqr.o              \
                o/gmp/mpn/toom_eval_dgr3_pm1.o     \
                o/gmp/mpn/toom_eval_dgr3_pm2.o     \
                o/gmp/mpn/toom_eval_pm1.o          \
                o/gmp/mpn/toom_eval_pm2.o          \
                o/gmp/mpn/toom_eval_pm2exp.o       \
                o/gmp/mpn/toom_eval_pm2rexp.o      \
                o/gmp/mpn/toom_interpolate_5pts.o  \
                o/gmp/mpn/toom_interpolate_6pts.o  \
                o/gmp/mpn/toom_interpolate_7pts.o  \
                o/gmp/mpn/toom_interpolate_8pts.o  \
                o/gmp/mpn/toom_interpolate_12pts.o \
                o/gmp/mpn/toom_interpolate_16pts.o \
                o/gmp/mpn/invertappr.o             \
                o/gmp/mpn/invert.o                 \
                o/gmp/mpn/binvert.o                \
                o/gmp/mpn/mulmod_bnm1.o            \
                o/gmp/mpn/sqrmod_bnm1.o            \
                o/gmp/mpn/sbpi1_div_q.o            \
                o/gmp/mpn/sbpi1_div_qr.o           \
                o/gmp/mpn/sbpi1_divappr_q.o        \
                o/gmp/mpn/dcpi1_div_q.o            \
                o/gmp/mpn/dcpi1_div_qr.o           \
                o/gmp/mpn/dcpi1_divappr_q.o        \
                o/gmp/mpn/mu_div_qr.o              \
                o/gmp/mpn/mu_divappr_q.o           \
                o/gmp/mpn/mu_div_q.o               \
                o/gmp/mpn/bdiv_q_1.o               \
                o/gmp/mpn/sbpi1_bdiv_q.o           \
                o/gmp/mpn/sbpi1_bdiv_qr.o          \
                o/gmp/mpn/dcpi1_bdiv_q.o           \
                o/gmp/mpn/dcpi1_bdiv_qr.o          \
                o/gmp/mpn/mu_bdiv_q.o              \
                o/gmp/mpn/mu_bdiv_qr.o             \
                o/gmp/mpn/bdiv_q.o                 \
                o/gmp/mpn/bdiv_qr.o                \
                o/gmp/mpn/divexact.o               \
                o/gmp/mpn/bdiv_dbm1c.o             \
                o/gmp/mpn/redc_1.o                 \
                o/gmp/mpn/redc_2.o                 \
                o/gmp/mpn/redc_n.o                 \
                o/gmp/mpn/powm.o                   \
                o/gmp/mpn/powlo.o                  \
                o/gmp/mpn/powm_sec.o               \
                o/gmp/mpn/subcnd_n.o               \
                o/gmp/mpn/redc_1_sec.o             \
                o/gmp/mpn/trialdiv.o               \
                o/gmp/mpn/remove.o                 \
                o/gmp/mpn/and_n.o                  \
                o/gmp/mpn/andn_n.o                 \
                o/gmp/mpn/nand_n.o                 \
                o/gmp/mpn/ior_n.o                  \
                o/gmp/mpn/iorn_n.o                 \
                o/gmp/mpn/nior_n.o                 \
                o/gmp/mpn/xor_n.o                  \
                o/gmp/mpn/xnor_n.o                 \
                o/gmp/mpn/copyi.o                  \
                o/gmp/mpn/copyd.o                  \
                o/gmp/mpn/zero.o                   \
                o/gmp/printf/asprintf.o            \
                o/gmp/printf/asprntffuns.o         \
                o/gmp/printf/doprnt.o              \
                o/gmp/printf/doprntf.o             \
                o/gmp/printf/doprnti.o             \
                o/gmp/printf/fprintf.o             \
                o/gmp/printf/obprintf.o            \
                o/gmp/printf/obvprintf.o           \
                o/gmp/printf/obprntffuns.o         \
                o/gmp/printf/printf.o              \
                o/gmp/printf/printffuns.o          \
                o/gmp/printf/snprintf.o            \
                o/gmp/printf/snprntffuns.o         \
                o/gmp/printf/sprintf.o             \
                o/gmp/printf/sprintffuns.o         \
                o/gmp/printf/vasprintf.o           \
                o/gmp/printf/vfprintf.o            \
                o/gmp/printf/vprintf.o             \
                o/gmp/printf/vsnprintf.o           \
                o/gmp/printf/vsprintf.o            \
                o/gmp/printf/repl-vsnprintf.o      \
                o/gmp/scanf/doscan.o               \
                o/gmp/scanf/fscanf.o               \
                o/gmp/scanf/fscanffuns.o           \
                o/gmp/scanf/scanf.o                \
                o/gmp/scanf/sscanf.o               \
                o/gmp/scanf/sscanffuns.o           \
                o/gmp/scanf/vfscanf.o              \
                o/gmp/scanf/vscanf.o               \
                o/gmp/scanf/vsscanf.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@


	# }

# }

# z                         {

  # c -> o  {

DZ=-DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DPACKAGE_URL=\"\" -DPACKAGE=\"zlib\" -DVERSION=\"1.1.4\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DLT_OBJDIR=\".libs/\" -DHAVE_STDLIB_H=1 -DHAVE_UNISTD_H=1 -DHAVE_GETPAGESIZE=1 -DHAVE_MEMCPY=1 -DHAVE_STRERROR=1 -DHAVE_UNISTD_H=1
IZ=
FZ=$(DZ) $(IZ)

o/z/adler32.o:                       $(SRCROOT)/zlib/adler32.c
	gcc $(FZ) -c $^ -o $@

o/z/compress.o:                      $(SRCROOT)/zlib/compress.c
	gcc $(FZ) -c $^ -o $@

o/z/crc32.o:                         $(SRCROOT)/zlib/crc32.c
	gcc $(FZ) -c $^ -o $@

o/z/deflate.o:                       $(SRCROOT)/zlib/deflate.c
	gcc $(FZ) -c $^ -o $@

o/z/gzio.o:                          $(SRCROOT)/zlib/gzio.c
	gcc $(FZ) -c $^ -o $@

o/z/infback.o:                       $(SRCROOT)/zlib/infback.c
	gcc $(FZ) -c $^ -o $@

o/z/inffast.o:                       $(SRCROOT)/zlib/inffast.c
	gcc $(FZ) -c $^ -o $@

o/z/inflate.o:                       $(SRCROOT)/zlib/inflate.c
	gcc $(FZ) -c $^ -o $@

o/z/inftrees.o:                      $(SRCROOT)/zlib/inftrees.c
	gcc $(FZ) -c $^ -o $@

o/z/trees.o:                         $(SRCROOT)/zlib/trees.c
	gcc $(FZ) -c $^ -o $@

o/z/uncompr.o:                       $(SRCROOT)/zlib/uncompr.c
	gcc $(FZ) -c $^ -o $@

o/z/zutil.o:                         $(SRCROOT)/zlib/zutil.c
	gcc $(FZ) -c $^ -o $@

  # }

  # o -> a  {

o/z/libz.a: o/z/adler32.o             \
            o/z/compress.o            \
            o/z/crc32.o               \
            o/z/deflate.o             \
            o/z/gzio.o                \
            o/z/infback.o             \
            o/z/inffast.o             \
            o/z/inflate.o             \
            o/z/inftrees.o            \
            o/z/trees.o               \
            o/z/uncompr.o             \
            o/z/zutil.o
	rm -f  $@
	ar cru $@ $^
	ranlib $@

  # }

# }

o/gcc/gcc.o:                         $(SRCROOT)/gcc/gcc.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS $(SOME_DEFINES) -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include  -c $^ -o $@

o/gcc/ggc-none.o:                    $(SRCROOT)/gcc/ggc-none.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -c $^ -o $@

o/gcc/cppspec.o:                     $(SRCROOT)/gcc/cppspec.c
	gcc -D__USE_MINGW_ACCESS -DIN_GCC -DHAVE_CONFIG_H -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include -c $^ -o $@

o/gcc/cp/g++spec.o:                  $(SRCROOT)/gcc/cp/g++spec.c
	gcc -DIN_GCC -DHAVE_CONFIG_H  -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/gcc/cp -I$(SRCROOT)/gcc -I$(SRCROOT)/libcpp/include -c $^ -o $@

o/gcc/driver-i386.o:                 $(SRCROOT)/gcc/config/i386/driver-i386.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -c $^ -o $@

# cc1.exe  {

bin/cc1.exe:   o/gcc/attribs.o                   \
               o/gcc/c-lang.o                    \
							 o/gcc/c-errors.o                  \
							 o/gcc/c-decl.o                    \
               o/gcc/c-typeck.o                  \
               o/gcc/c-convert.o                 \
               o/gcc/c-aux-info.o                \
               o/gcc/c-objc-common.o             \
               o/gcc/c-parser.o                  \
							 o/gcc/tree-mudflap.o              \
							 o/gcc/c-family/stub-objc.o        \
							 o/gcc/c-family/c-common.o         \
							 o/gcc/c-family/c-cppbuiltin.o     \
							 o/gcc/c-family/c-dump.o           \
							 o/gcc/c-family/c-format.o         \
							 o/gcc/c-family/c-gimplify.o       \
							 o/gcc/c-family/c-lex.o            \
							 o/gcc/c-family/c-omp.o            \
							 o/gcc/c-family/c-opts.o           \
							 o/gcc/c-family/c-pch.o            \
							 o/gcc/c-family/c-ppoutput.o       \
							 o/gcc/c-family/c-pragma.o         \
							 o/gcc/c-family/c-pretty-print.o   \
							 o/gcc/c-family/c-semantics.o      \
							 o/gcc/c-family/c-ada-spec.o       \
							 o/gcc/i386-c.o                    \
							 o/gcc/msformat-c.o                \
							 o/gcc/default-c.o                 \
							 o/gcc/cc1-checksum.o              \
							 o/gcc/main.o                      \
							 o/gcc/libcommon.a                 \
               o/gcc/libbackend.a                \
							 o/gcc/libcommon-target.a          \
							 o/libcpp/libcpp.a                 \
							 o/libdecnumber/libdecnumber.a     \
							 o/libiberty/libiberty.a           \
							 o/mpc/libmpc.a                    \
							 o/mpfr/libmpfr.a                  \
							 o/gmp/libgmp.a                    \
							 o/z/libz.a
	gcc $^ -o $@ -lintl -liconv

# }

GOES_WITH_SPEC=o/gcc/gcc.o o/gcc/ggc-none.o      \
               o/gcc/driver-i386.o               \
							 o/gcc/libcommon-target.a          \
							 o/gcc/libcommon.a                 \
							 o/libcpp/libcpp.a                 \
							 o/libiberty/libiberty.a           \
							 o/libdecnumber/libdecnumber.a

bin/cpp.exe: $(GOES_WITH_SPEC) o/gcc/cppspec.o
	gcc        $^ -o $@  -lintl -liconv

bin/g++.exe: $(GOES_WITH_SPEC) o/gcc/cp/g++spec.o
	gcc        $^ -o $@  -lintl -liconv
