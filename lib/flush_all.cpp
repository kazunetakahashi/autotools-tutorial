/**
 * File    : flush_all.cpp
 * Author  : Kazune Takahashi
 * Created : 2019/10/30 14:28:36
 * Powered by Visual Studio Code
 */

#include "flush_all.h"
#include <iostream>
using std::cout;
using std::endl;

template <typename Container>
void flush_all::operator()(Container c)
{
  for (auto const &x : c)
  {
    cout << x << endl;
  }
}