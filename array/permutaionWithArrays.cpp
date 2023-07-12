#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string answer = "yes";
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long perm[n];
    for (int i = 0; i < n; i++)
    {
        cin >> perm[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (perm[i] == arr[j])
            {
                perm[i] = 0, arr[j] = 0;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            answer = "no";
        }
    }
    cout << answer << endl;

    return 0;
}
