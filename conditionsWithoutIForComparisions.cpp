// write a programme that reads A,B:
// print 2*A+1 if B=-1
// print B*B if B=1
// NOTE: DON'T USE CONDITIONS OR COMPARISIONS
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << (-1 * a * (b - 1)) + (b * b) << endl;
    return 0;
} // namespace std;
