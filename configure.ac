# autotools-tutorial (c) 2019 by Kazune Takahashi
#
# autotools-tutorial is licensed under a
# Creative Commons Attribution-ShareAlike 3.0 Unported License.
#
# You should have received a copy of the license along with this
# work.  If not, see <http://creativecommons.org/licenses/by-sa/3.0/>.

# Prelude.

AC_INIT([autotools-tutorial], [3.14], [@kazunetakahashi])
AC_CONFIG_AUX_DIR([build-aux])
AM_PROG_AR
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign -Wall -Werror])
LT_INIT

# Check for programs.

AC_PROG_CC
AC_PROG_CXX
AX_CXX_COMPILE_STDCXX_17([noext], [mandatory])

# Output files.

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile src/Makefile lib/Makefile sample/Makefile])
AC_OUTPUT
