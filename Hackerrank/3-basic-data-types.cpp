/*
This program will:
print int 3,
followed by long 12345678912345,
followed by char a,
followed by float 334.23,
followed by double 14049.30493.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  // Complete the code.
  int a;
  long b;
  char c;
  float d;
  double e;
  scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
  printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);
  return 0;
}
