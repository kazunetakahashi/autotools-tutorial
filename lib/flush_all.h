#ifndef flush_all_HEADER
#define flush_all_HEADER

/**
 * File    : flush_all.h
 * Author  : Kazune Takahashi
 * Created : 2019/10/30 14:25:43
 * Powered by Visual Studio Code
 */

class flush_all
{
public:
  template <typename Container>
  void operator()(Container c);
};

#include "flush_all.cpp"

#endif // flush_all_HEADER