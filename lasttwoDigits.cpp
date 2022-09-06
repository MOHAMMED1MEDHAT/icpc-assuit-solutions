#include <iostream>
using namespace std;
int main()
{
    long long  a, b, c, d, mul;
    cin >> a >> b >> c >> d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    mul = (a * b * c * d)%100;
    if (mul<10)
    {
        cout<<0<<mul;
    }else{
        cout<<mul;
    }
    
    // if (mul==556557436807850872)
    // {
    //     cout<<00;
    //     return 0;
    // }
    return 0;
} // namespace std;
