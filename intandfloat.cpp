#include <iostream>
using namespace std;
int main(int argc, const char **argv)
{
    double number, floatpart;
    int intpart;
    cin >> number;
    intpart = number / 1;
    floatpart = number - intpart;
    if (!floatpart)
    {
        cout << "int " << intpart;
    }
    else
    {
        cout << "float " << intpart << " " << floatpart;
    }
    return 0;
}