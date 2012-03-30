all: bin/g++.exe

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

# libcommon-target          {

  #  c -> o {

LIBCOMMON_TARGET_FLAGS=-D__USE_MINGW_ACCESS -DIN_GCC -DHAVE_CONFIG_H -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include

o/gcc/i386-common.o:                 $(SRCROOT)/gcc/common/config/i386/i386-common.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -c $^ -o $@

o/gcc/prefix.o:                      $(SRCROOT)/gcc/prefix.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -DPREFIX=\"/usr/local/\" -c $^ -o $@

o/gcc/params.o:                      $(SRCROOT)/gcc/params.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -c $^ -o $@

o/gcc/opts.o:                        $(SRCROOT)/gcc/opts.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -c $^ -o $@

o/gcc/opts-common.o:                 $(SRCROOT)/gcc/opts-common.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -c $^ -o $@

o/gcc/options.o:                     gcc/options.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -c $^ -o $@

o/gcc/vec.o:                         $(SRCROOT)/gcc/vec.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -c $^ -o $@

o/gcc/hooks.o:                       $(SRCROOT)/gcc/hooks.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -c $^ -o $@

o/gcc/common-targhooks.o:            $(SRCROOT)/gcc/common/common-targhooks.c
	gcc $(LIBCOMMON_TARGET_FLAGS) -c $^ -o $@

	# }

o/gcc/libcommon-target.a:        o/gcc/i386-common.o                \
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

LIBCOMMON_FLAGS=-D__USE_MINGW_ACCESS -DIN_GCC -DHAVE_CONFIG_H -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include

o/gcc/diagnostic.o:                  $(SRCROOT)/gcc/diagnostic.c
	gcc $(LIBCOMMON_FLAGS) -c $^ -o $@

o/gcc/pretty-print.o:                $(SRCROOT)/gcc/pretty-print.c
	gcc $(LIBCOMMON_FLAGS) -c $^ -o $@

o/gcc/intl.o:                        $(SRCROOT)/gcc/intl.c
	gcc $(LIBCOMMON_FLAGS) -DLOCALEDIR=\"/usr/local/share/locale\" -c $^ -o $@

o/gcc/input.o:                       $(SRCROOT)/gcc/input.c
	gcc $(LIBCOMMON_FLAGS) -c $^ -o $@

o/gcc/version.o:                     $(SRCROOT)/gcc/version.c
	gcc $(LIBCOMMON_FLAGS) -DBASEVER="\"4.7.0\"" -DBUGURL="\"<http://gcc.gnu.org/bugs.html>\"" -DPKGVERSION="\"(GCC) \"" -DDATESTAMP="\"\"" -DDEVPHASE="\"\"" -DREVISION="\"\""     -c $^ -o $@

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

LIBCPP_FLAGS=-D__USE_MINGW_ACCESS -Ilibcpp -I$(SRCROOT)/include -I$(SRCROOT)/libcpp -I$(SRCROOT)/libcpp/include  -Igcc 

o/libcpp/charset.o:                  $(SRCROOT)/libcpp/charset.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/directives.o::               $(SRCROOT)/libcpp/directives.c              
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/directives-only.o:          $(SRCROOT)/libcpp/directives-only.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/errors.o:                   $(SRCROOT)/libcpp/errors.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/expr.o:                     $(SRCROOT)/libcpp/expr.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/files.o:                    $(SRCROOT)/libcpp/files.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/identifiers.o:              $(SRCROOT)/libcpp/identifiers.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/init.o:                     $(SRCROOT)/libcpp/init.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/lex.o:                      $(SRCROOT)/libcpp/lex.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/line-map.o:                 $(SRCROOT)/libcpp/line-map.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/macro.o:                    $(SRCROOT)/libcpp/macro.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/mkdeps.o:                   $(SRCROOT)/libcpp/mkdeps.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/pch.o:                      $(SRCROOT)/libcpp/pch.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/symtab.o:                   $(SRCROOT)/libcpp/symtab.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

o/libcpp/traditional.o:              $(SRCROOT)/libcpp/traditional.c
	gcc  $(LIBCPP_FLAGS) -c $^ -o $@

	# }

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

# libiberty                 {

  #  c -> o {

LIBIBERTY_FLAGS=-D__USE_MINGW_ACCESS -DHAVE_CONFIG_H -Igcc -I$(SRCROOT)/libiberty -I$(SRCROOT)/include

o/libiberty/alloca.o:                $(SRCROOT)/libiberty/alloca.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/argv.o:                  $(SRCROOT)/libiberty/argv.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/asprintf.o:              $(SRCROOT)/libiberty/asprintf.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/bcmp.o:                  $(SRCROOT)/libiberty/bcmp.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/bcopy.o:                 $(SRCROOT)/libiberty/bcopy.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/bzero.o:                 $(SRCROOT)/libiberty/bzero.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/choose-temp.o:           $(SRCROOT)/libiberty/choose-temp.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/concat.o:                $(SRCROOT)/libiberty/concat.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/cp-demangle.o:           $(SRCROOT)/libiberty/cp-demangle.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/cp-demint.o:             $(SRCROOT)/libiberty/cp-demint.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/cplus-dem.o:             $(SRCROOT)/libiberty/cplus-dem.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/crc32.o:                 $(SRCROOT)/libiberty/crc32.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/dyn-string.o:            $(SRCROOT)/libiberty/dyn-string.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/fdmatch.o:               $(SRCROOT)/libiberty/fdmatch.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/ffs.o:                   $(SRCROOT)/libiberty/ffs.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/fibheap.o:               $(SRCROOT)/libiberty/fibheap.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/filename_cmp.o:          $(SRCROOT)/libiberty/filename_cmp.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/floatformat.o:           $(SRCROOT)/libiberty/floatformat.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/fnmatch.o:               $(SRCROOT)/libiberty/fnmatch.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/fopen_unlocked.o:        $(SRCROOT)/libiberty/fopen_unlocked.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/getopt.o:                $(SRCROOT)/libiberty/getopt.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/getopt1.o:               $(SRCROOT)/libiberty/getopt1.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/getpwd.o:                $(SRCROOT)/libiberty/getpwd.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/getruntime.o:            $(SRCROOT)/libiberty/getruntime.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/hashtab.o:               $(SRCROOT)/libiberty/hashtab.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/hex.o:                   $(SRCROOT)/libiberty/hex.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/index.o:                 $(SRCROOT)/libiberty/index.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/insque.o:                $(SRCROOT)/libiberty/insque.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/lbasename.o:             $(SRCROOT)/libiberty/lbasename.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/lrealpath.o:             $(SRCROOT)/libiberty/lrealpath.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/make-relative-prefix.o:  $(SRCROOT)/libiberty/make-relative-prefix.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/make-temp-file.o:        $(SRCROOT)/libiberty/make-temp-file.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/md5.o:                   $(SRCROOT)/libiberty/md5.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/memmem.o:                $(SRCROOT)/libiberty/memmem.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/mempcpy.o:               $(SRCROOT)/libiberty/mempcpy.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/mkstemps.o:              $(SRCROOT)/libiberty/mkstemps.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/objalloc.o:              $(SRCROOT)/libiberty/objalloc.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/obstack.o:               $(SRCROOT)/libiberty/obstack.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/partition.o:             $(SRCROOT)/libiberty/partition.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/pexecute.o:              $(SRCROOT)/libiberty/pexecute.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/pex-common.o:            $(SRCROOT)/libiberty/pex-common.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/pex-one.o:               $(SRCROOT)/libiberty/pex-one.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/pex-win32.o:             $(SRCROOT)/libiberty/pex-win32.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/physmem.o:               $(SRCROOT)/libiberty/physmem.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/random.o:                $(SRCROOT)/libiberty/random.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/regex.o:                 $(SRCROOT)/libiberty/regex.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/rindex.o:                $(SRCROOT)/libiberty/rindex.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/safe-ctype.o:            $(SRCROOT)/libiberty/safe-ctype.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/setenv.o:                $(SRCROOT)/libiberty/setenv.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/setproctitle.o:          $(SRCROOT)/libiberty/setproctitle.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/sha1.o:                  $(SRCROOT)/libiberty/sha1.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/sigsetmask.o:            $(SRCROOT)/libiberty/sigsetmask.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/simple-object.o:         $(SRCROOT)/libiberty/simple-object.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/simple-object-coff.o:    $(SRCROOT)/libiberty/simple-object-coff.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/simple-object-elf.o:     $(SRCROOT)/libiberty/simple-object-elf.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/simple-object-mach-o.o: $(SRCROOT)/libiberty/simple-object-mach-o.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/sort.o:                  $(SRCROOT)/libiberty/sort.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/spaces.o:                $(SRCROOT)/libiberty/spaces.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/splay-tree.o:            $(SRCROOT)/libiberty/splay-tree.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/stack-limit.o:           $(SRCROOT)/libiberty/stack-limit.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/stpcpy.o:                $(SRCROOT)/libiberty/stpcpy.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/stpncpy.o:               $(SRCROOT)/libiberty/stpncpy.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/strerror.o:              $(SRCROOT)/libiberty/strerror.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/strsignal.o:             $(SRCROOT)/libiberty/strsignal.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/strndup.o:               $(SRCROOT)/libiberty/strndup.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/strverscmp.o:            $(SRCROOT)/libiberty/strverscmp.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/timeval-utils.o:         $(SRCROOT)/libiberty/timeval-utils.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/unlink-if-ordinary.o:    $(SRCROOT)/libiberty/unlink-if-ordinary.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/vasprintf.o:             $(SRCROOT)/libiberty/vasprintf.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/vfork.o:                 $(SRCROOT)/libiberty/vfork.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/waitpid.o:               $(SRCROOT)/libiberty/waitpid.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/xatexit.o:               $(SRCROOT)/libiberty/xatexit.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/xexit.o:                 $(SRCROOT)/libiberty/xexit.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/xmalloc.o:               $(SRCROOT)/libiberty/xmalloc.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/xmemdup.o:               $(SRCROOT)/libiberty/xmemdup.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/xstrdup.o:               $(SRCROOT)/libiberty/xstrdup.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/xstrerror.o:             $(SRCROOT)/libiberty/xstrerror.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

o/libiberty/xstrndup.o:              $(SRCROOT)/libiberty/xstrndup.c
	gcc  $(LIBIBERTY_FLAGS) -c $^ -o $@

  # }

o/libiberty/libiberty.a:         o/libiberty/alloca.o               \
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

#}

# libdecnumber              {

  #  c -> o {

LIBDECNUMBER_FLAGS=-D__USE_MINGW_ACCESS                        -Igcc -Ilibdecnumber -I$(SRCROOT)/libdecnumber

o/libdecnumber/decNumber.o:       $(SRCROOT)/libdecnumber/decNumber.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

o/libdecnumber/decContext.o:      $(SRCROOT)/libdecnumber/decContext.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

o/libdecnumber/decimal32.o:       $(SRCROOT)/libdecnumber/bid/decimal32.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

o/libdecnumber/decimal64.o:       $(SRCROOT)/libdecnumber/bid/decimal64.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

o/libdecnumber/decimal128.o:      $(SRCROOT)/libdecnumber/bid/decimal128.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

o/libdecnumber/bid2dpd_dpd2bid.o: $(SRCROOT)/libdecnumber/bid/bid2dpd_dpd2bid.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

o/libdecnumber/host-ieee32.o:     $(SRCROOT)/libdecnumber/bid/host-ieee32.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

o/libdecnumber/host-ieee64.o:     $(SRCROOT)/libdecnumber/bid/host-ieee64.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

o/libdecnumber/host-ieee128.o:    $(SRCROOT)/libdecnumber/bid/host-ieee128.c
	gcc  $(LIBDECNUMBER_FLAGS) -c $^ -o $@

	# }

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

o/gcc/gcc.o:                         $(SRCROOT)/gcc/gcc.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS $(SOME_DEFINES) -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/libcpp/include  -c $^ -o $@


o/gcc/ggc-none.o:                    $(SRCROOT)/gcc/ggc-none.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -c $^ -o $@


o/gcc/cp/g++spec.o:                  $(SRCROOT)/gcc/cp/g++spec.c
	gcc -DIN_GCC -DHAVE_CONFIG_H  -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -I$(SRCROOT)/gcc/cp -I$(SRCROOT)/gcc -I$(SRCROOT)/libcpp/include -c $^ -o $@


o/gcc/driver-i386.o:                 $(SRCROOT)/gcc/config/i386/driver-i386.c
	gcc -DIN_GCC -DHAVE_CONFIG_H -D__USE_MINGW_ACCESS -Igcc -I$(SRCROOT)/gcc -I$(SRCROOT)/include -c $^ -o $@



bin/g++.exe: o/gcc/gcc.o o/gcc/ggc-none.o o/gcc/cp/g++spec.o o/gcc/driver-i386.o o/gcc/libcommon-target.a o/gcc/libcommon.a o/libcpp/libcpp.a o/libiberty/libiberty.a o/libdecnumber/libdecnumber.a
	g++        $^ -o $@  -lintl -liconv 
