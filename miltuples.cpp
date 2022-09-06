#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << "Multiples" << endl;
    }
    else if (b % a == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }
    return 0;
} // namespace std;
