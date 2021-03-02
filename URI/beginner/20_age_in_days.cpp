#include <iostream>

using namespace std;

int main()
{
  int days, months, years;
  cin >> days;
  years = days / 365;
  days = days % 365;
  months = days / 30;
  days = days % 30;

  cout << years << " ano(s)\n"
       << months << " mes(es)\n"
       << days << " dia(s)" << endl;
  return 0;
}