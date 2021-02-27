#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    const char *numbers[11] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int a, b;
    scanf("%d\n%d", &a, &b);
    for (int i = a - 1; i < b; i++)
    {
        if (i < 9)
        {
            cout << numbers[i] << "\n";
        }
        else if (i % 2 == 1)
        {
            cout << numbers[9] << "\n";
        }
        else
        {
            cout << numbers[10] << "\n";
        }
    }
    return 0;
}
