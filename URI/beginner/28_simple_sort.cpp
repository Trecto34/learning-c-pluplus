#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  vector<int> numbers, numbers1;

  for (int i = 0; i < 3; i++)
  {
    cin >> n;
    numbers.push_back(n);
  }

  numbers1 = numbers;

  sort(numbers.begin(), numbers.end());
  for (auto i : numbers)
    cout << i << "\n";

  cout << "\n";

  for (auto i : numbers1)
    cout << i << "\n";

  return 0;
}