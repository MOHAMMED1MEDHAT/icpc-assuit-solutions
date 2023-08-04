#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int search)
{
    while (left <= right)
    {
        int m = left + (right - left) / 2;
        if (arr[m] == search)
        {
            return m;
        }
        else if (arr[m] < search)
        {
            left = m + 1;
        }
        else
        {
            right = m - 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    long n, q;
    cin >> n >> q;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // cout << q;
    while (q--)
    {
        long long res, search;
        cin >> search;
        res = binarySearch(arr, 0, n - 1, search);
        if (res == -1)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
}
