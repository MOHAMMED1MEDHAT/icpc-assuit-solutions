#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int mxIdx = 0, mnIdx = 0, swapper = 0;

    int n;
    cin >> n;
    int arr[n];
    for (int v = 0; v < n; v++)
    {
        cin >> arr[v];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[mxIdx])
        {
            mxIdx = i;
        }
        if (arr[i] < arr[mnIdx])
        {
            mnIdx = i;
        }
    }
    swapper = arr[mxIdx];
    arr[mxIdx] = arr[mnIdx];
    arr[mnIdx] = swapper;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
