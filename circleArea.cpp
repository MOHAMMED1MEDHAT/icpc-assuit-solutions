#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    const double pi = 3.141592653;
    float r;
    cin >> r;
    cout << pi * (r * r) << endl;
} // namespace std;
