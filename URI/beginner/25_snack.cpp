#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int x, y;
  double table[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
  cin >> x >> y;
  cout << fixed << setprecision(2);
  cout << "Total: R$ " << table[x - 1] * y << endl;
  return 0;
}