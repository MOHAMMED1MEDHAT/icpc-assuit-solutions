#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string isSub = "YES";
    int n, m;
    cin >> n >> m;

    long long arrA[n], arrB[m], startIdx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arrB[i];
    }

    for (int i = 0; i < m; i++)
    {
        isSub = "NO";
        for (int j = startIdx + 1; j < n; j++)
        {
            if (arrB[i] == arrA[j])
            {
                isSub = "YES";
                startIdx = j;
                break;
            }
        }
    }

    cout << isSub << endl;
    return 0;
}
