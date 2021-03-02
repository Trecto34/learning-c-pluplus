#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
  double x, x1, y, y1;
  cin >> x >> y >> x1 >> y1;
  cout << fixed << setprecision(4);
  cout << sqrt(((x1 - x) * (x1 - x)) + ((y1 - y) * (y1 - y))) << endl;
  return 0;
}