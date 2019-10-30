#ifndef tanimura_HEADER
#define tanimura_HEADER

/**
 * File    : tanimura.h
 * Author  : Kazune Takahashi
 * Created : 2019/10/30 14:34:29
 * Powered by Visual Studio Code
 */

#include <string>

class consultant
{
  std::string name;
  int age;

public:
  consultant() {}
  consultant(std::string name, int age) : name{name}, age{age} {}

  std::string get_name() const { return name; }
  int get_age() const { return age; }
  void birthday();
};

#endif // tanimura_HEADER