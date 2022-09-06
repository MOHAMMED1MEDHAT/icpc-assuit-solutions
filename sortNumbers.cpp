#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, min, max, mid;
    cin >> a >> b >> c;
    min = a, max = a, mid = a;
    // find max
    if (max < a)
    {
        max = a;
    }
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    // find min
    if (min > a)
    {
        min = a;
    }
    if (min > b)
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }
    // find mid
    mid = (a + b + c) - (max + min);
    cout << min << "\n"
        << mid << "\n"
        << max << endl;
    cout << "\n";
    cout << a<< "\n"
        << b << "\n"
        << c << endl;
    return 0;
} // namespace std;
