#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double a, b, c, d, r1, r2;
  cin >> a >> b >> c;
  if (a < 1 || b < 1 || c < 1)
  {
    cout << "Impossivel calcular\n";
  }
  else if (a != 0)
  {
    d = (b * b) - (4 * a * c);
    if (d < 0)
    {
      cout << "Impossivel calcular\n";
    }
    else
    {
      r1 = (-b + sqrt(d)) / (2 * a);
      r2 = (-b - sqrt(d)) / (2 * a);
      cout << fixed << setprecision(5);
      cout << "R1 = " << r1 << endl;
      cout << "R2 = " << r2 << endl;
    }
  }

  return 0;
}