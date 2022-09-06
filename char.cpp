#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    int asciiValue = int(ch);
    if (asciiValue >= 65 && asciiValue <= 90)
    {
        cout << (char)(asciiValue + 32);
    }
    else if (asciiValue >= 97 && asciiValue <= 122)
    {
        cout << (char)(asciiValue - 32);
    }
    return 0;
} // namespace std;
