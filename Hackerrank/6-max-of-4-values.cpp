#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int max1 = max(a, b);
  int max2 = max(c, d);
  int fullMax = max(max1, max2);

  printf("%d", fullMax);

  return 0;
}