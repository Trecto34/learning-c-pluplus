#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a, b, c, d;
  cin >> a >> b;
  cout << a.length() << " " << b.length();
  cout << "\n"
       << a + b;
  c = a;
  c[0] = b[0];
  d = b;
  d[0] = a[0];
  cout << "\n"
       << c << " " << d;
  return 0;
}