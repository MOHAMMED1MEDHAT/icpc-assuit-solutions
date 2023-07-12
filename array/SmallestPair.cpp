#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long mn = 1e9;

        int n;
        cin >> n;
        int arr[n];
        for (int v = 0; v < n; v++)
        {
            cin >> arr[v];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (mn > arr[i] + arr[j] + (j + 1) - (i + 1))
                {
                    mn = arr[i] + arr[j] + (j + 1) - (i + 1);
                }
            }
        }

        cout << mn << endl;
    }
    return 0;
}
