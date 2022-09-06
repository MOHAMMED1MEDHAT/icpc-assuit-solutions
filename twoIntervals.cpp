#include <iostream>
using namespace std;
int main()
{
    long long l1, r1, l2, r2, min, max;
    cin >> l1 >> r1 >> l2 >> r2;
    min = r1, max = l1;
    if (min > r2)
    {
        min = r2;
    }
    if (max < l2)
    {
        max = l2;
    }
    if (l1 > r2 || r1 < l2)
    {
        cout << -1;
        return 0;
    }
    cout << max << " " << min;
} // namespace std;
