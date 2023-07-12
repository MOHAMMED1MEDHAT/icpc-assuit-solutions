#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, q;
    cin >> n >> q;
    long long arr[n] = {0}, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        int startIdx, endIdx;
        cin >> startIdx >> endIdx;
        startIdx--, endIdx--;
        for (int i = startIdx; i <= endIdx; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
