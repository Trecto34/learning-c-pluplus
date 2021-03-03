#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double r;
  double pi = 3.14159;
  cin >> r;
  double a = pi * (r * r);
  printf("A=%.4lf\n", a);
  return 0;
}
