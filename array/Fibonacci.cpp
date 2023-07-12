#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long fib1 = 0, fib2 = 1, fibn = 0;

    int n = 0;
    cin >> n;
    if (n == 1)
    {
        cout << fib1;
    }
    else if (n == 2)
    {
        cout << fib2;
    }
    else
    {
        n -= 2;
        while (n--)
        {
            fibn = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibn;
        }
        cout << fibn << endl;
    }

    return 0;
}
