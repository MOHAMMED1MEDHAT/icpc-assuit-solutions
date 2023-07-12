#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string answer = "yes";
    int n, m, x, y;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> x >> y;
    x--, y--;

    for (int i = -1; i < 2; i++)
    {
        for (int j = -1; j < 2; j++)
        {
            if ((x + i) > (n - 1) || (y + j) > (m - 1) || (x + i) < 0 || (y + j) < 0 || (i == 0 && j == 0))
            {
                continue;
            }
            if (arr[x + i][y + j] != 'x')
            {
                answer = "no";
            }
        }
    }
    cout << answer;
    return 0;
}
