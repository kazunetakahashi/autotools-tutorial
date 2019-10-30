/**
 * File    : tanimura.cpp
 * Author  : Kazune Takahashi
 * Created : 2019/10/30 14:39:19
 * Powered by Visual Studio Code
 */

#include "tanimura.h"
#include <iostream>
#include <string>
#include <vector>
using std::ostream;
using std::vector;

#include "flush_all.h"

ostream &operator<<(ostream &os, const consultant &co)
{
  return os << "name: " << co.get_name() << ", age: " << co.get_age();
}

void consultant::birthday()
{
  age++;
}

int main()
{
  vector<consultant> V(3);
  V[0] = consultant("Tanimura", 29);
  V[1] = consultant("Damepo", 17);
  V[2] = consultant("Sunaemon", 17);
  V[1].birthday();
  flush_all F;
  F(V);
}