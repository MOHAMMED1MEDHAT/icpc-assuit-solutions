#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        long long arr[n], subs = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            subs++;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[j - 1])
                {
                    break;
                }
                subs++;
            }
        }

        cout << subs << endl;
    }
    return 0;
}
