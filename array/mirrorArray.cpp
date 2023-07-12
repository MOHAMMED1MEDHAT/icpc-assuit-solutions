#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int arr[n][m] = {0}, swapper = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m / 2; j++)
        {
            swapper = arr[i][m - j - 1];
            arr[i][m - j - 1] = arr[i][j];
            arr[i][j] = swapper;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
