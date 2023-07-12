#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    bool operatable = true;
    int n = 0;
    cin >> n;

    long long arr[n], ops = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (operatable)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                operatable = false;
            }
            arr[i] /= 2;
        }
        if (!operatable)
        {
            break;
        }
        ops++;
    }

    cout << ops;

    return 0;
}
