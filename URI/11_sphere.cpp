#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double pi = 3.14159;
  double res;
  int r;
  cin >> r;
  res = ((4.0 / 3) * pi * r * r * r);
  cout << fixed << setprecision(3);
  cout << "VOLUME = " << res << endl;

  return 0;
}