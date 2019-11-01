# autotools-tutorial (c) 2019 by Kazune Takahashi
#
# autotools-tutorial is licensed under a
# Creative Commons Attribution-ShareAlike 3.0 Unported License.
#
# You should have received a copy of the license along with this
# work.  If not, see <http://creativecommons.org/licenses/by-sa/3.0/>.

AM_CPPFLAGS = -I$(srcdir)/../lib
AM_CPPFLAGS += -DLOCALEDIR=\"$(localedir)\"

bin_PROGRAMS = hello
hello_SOURCES = main.c gettext.h
hello_LDADD = ../lib/libhello.la
LDADD = $(LIBINIT)
