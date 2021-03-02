#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int product_number1, product_number2, qnt1, qnt2;
  double price1, price2, total;
  cin >> product_number1 >> qnt1 >> price1 >> product_number2 >> qnt2 >> price2;
  total = (qnt1 * price1) + (qnt2 * price2);
  cout << fixed << setprecision(2);
  cout << "VALOR A PAGAR: R$ " << total << endl;
  return 0;
}