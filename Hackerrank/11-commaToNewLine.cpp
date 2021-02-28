#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

string commaToNewLine(string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == ',')
    {
      str[i] = '\n';
    }
  }
  return str;
}

int main()
{
  string str;
  cin >> str;
  cout << commaToNewLine(str);
  return 0;
}
