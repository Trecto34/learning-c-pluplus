#include <iostream>

using namespace std;

int main()
{
  int sec, min, hours;
  cin >> sec;
  min = sec / 60;
  hours = min / 60;
  cout << hours << ":" << int(min % 60) << ":" << int(sec % 60) << endl;
  return 0;
}