#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string answer = "will take number";
    int n, m;
    cin >> n >> m;
    long long arr[n][m], x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                answer = "will not take number";
                break;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
