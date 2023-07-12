#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    int arr[n], freq[m] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - 1]++;
    }

    for (int i = 0; i < m; i++)
    {
        cout << freq[i] << endl;
    }

    return 0;
}
