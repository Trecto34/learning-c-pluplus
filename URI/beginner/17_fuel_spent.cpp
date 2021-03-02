#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  cout << fixed << setprecision(3);
  cout << b / 12.0 * a << endl;
  return 0;
}