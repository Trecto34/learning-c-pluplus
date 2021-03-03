#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a, b, c, p, A;
  cin >> a >> b >> c;
  p = a + b + c;
  A = (a + b) * c * 1 / 2;
  cout << fixed << setprecision(1);
  if (a + b > c && a + c > b && b + c > a)
  {
    cout << "Perimetro = " << p << endl;
  }
  else
  {
    cout << "Area = " << A << endl;
  }
  return 0;
}