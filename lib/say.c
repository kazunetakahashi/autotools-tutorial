#include <config.h>
#include <stdio.h>
#include "gettext.h"
#define _(string) gettext(string)

void say_hello()
{
  puts(_("Hello, nilpotent Lie algebra!"));
  printf(_("This is %s.\n"), PACKAGE_STRING);
}