#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, q;
    cin >> n >> q;
    long long arr[n] = {0}, freq[n] = {0}, sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        freq[i] = sum;
    }
    while (q--)
    {
        int startIdx, endIdx;
        cin >> startIdx >> endIdx;
        startIdx--, endIdx--;
        res = (freq[endIdx] - freq[startIdx]) + arr[startIdx];
        cout << res << endl;
        res = 0;
    }

    return 0;
}
