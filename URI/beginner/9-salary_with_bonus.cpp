#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  string name;
  double salary_fix, total_sales, percentage;
  cin >> name >> salary_fix >> total_sales;
  percentage = (total_sales * 15) / 100;
  cout << fixed << setprecision(2);
  cout << "TOTAL = R$ " << salary_fix + percentage << endl;
  return 0;
}
