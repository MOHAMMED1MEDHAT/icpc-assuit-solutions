#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, y = 0, m = 0, d = 0;
    cin >> n;
    y = n / 365;
    n = n - (365 * y);
    m = n / 30;
    n = n - (30 * m);
    d = n;
    cout << y << " years\n"
         << m << " months\n"
         << d << " days";
    return 0;
}
