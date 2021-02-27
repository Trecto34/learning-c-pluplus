#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int ar[15000];
  int arLen;

  scanf("%d", &arLen);

  for (int i = 0; i < arLen; i++)
  {
    scanf("%d", &ar[i]);
  }

  for (int i = arLen; i != 0; i--)
  {
    printf("%d ", ar[i - 1]);
  }
  return 0;
}
