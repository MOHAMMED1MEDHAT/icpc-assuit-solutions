#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    switch (int(s))
    {
    case 43:
        cout << a + b << endl;
        break;

    case 45:
        cout << a - b << endl;
        break;

    case 42:
        cout << a * b << endl;
        break;

    case 47:
        cout << a / b << endl;
        break;

    default:
        break;
    }
    return 0;
} // namespace std;
