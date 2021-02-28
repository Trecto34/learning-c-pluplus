#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n, q, i, i1, i2, k, l, l1;
  cin >> n >> q;
  vector<vector<int>> vt(n);
  for (i = 0; i < n; i++)
  {
    cin >> k;
    vt[i].resize(k);
    for (i1 = 0; i1 < k; i1++)
    {
      cin >> vt[i][i1];
    }
  }
  for (l = 0; l < q; l++)
  {
    cin >> i2 >> l1;
    cout << vt[i2][l1] << endl;
  }
  return 0;
}