#include <iostream>
using namespace std;


int get_size()
{
  return 100;
}


int fnc()
{
  return 1;
}

int main()
{
  const int bufSize = 512;
  // you cannot change it, Error:
  // bufSize = 511;

  // if there is a function get_size()
  // const int i = get_size();
  const = int j = 43;

  int k = 35;
  const int con =  k;
  int j = con;

  // declare extern
  // file_1.cpp: define a constant, can be get
  // extern const int bufSize = fcn();

  // file_1.h
  // extern const int bufSize;

  // 2.4.1 const refs


  return 0;

}
