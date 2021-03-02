#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    cout << fixed;
    cout << setprecision(1);
    cout << "MEDIA = " << ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5) << endl;
    return 0;
}