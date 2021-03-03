#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int number, salary;
  double hours;

  cin >> number >> salary >> hours;
  cout << "NUMBER = " << number << endl;
  cout << fixed;
  cout << setprecision(2);
  cout << "SALARY = U$ " << hours * salary << endl;
  return 0;
}