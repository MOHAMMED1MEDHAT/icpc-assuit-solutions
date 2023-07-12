#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n][n];
    int priDig = 0, secDig = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        priDig += arr[i][i];
        secDig += arr[i][n - i - 1];
    }

    cout << abs(priDig - secDig) << endl;

    return 0;
}
