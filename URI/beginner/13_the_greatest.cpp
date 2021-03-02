#include <iostream>

using namespace std;

int main()
{
  int a, b, c, maior_ab, maior;
  cin >> a >> b >> c;

  maior_ab = ((a + b + abs(a - b)) / 2);
  maior = (maior_ab + c + abs(maior_ab - c)) / 2;

  cout << maior << " eh o maior" << endl;

  return 0;
}