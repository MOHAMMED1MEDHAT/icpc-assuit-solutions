#include <iostream>
using namespace std;
int main()
{
    double a, b, c, answer=0.0000000000001;
    char s, q;
    string ans;
    cin >> a >> s >> b >> q >> c;
    switch (int(s))
    {
    case 43:
        if ((a + b) == c)
        {
            ans="Yes";
        }else
        {
            answer=a + b;
        }   
        break;

    case 45:
        if ((a - b) == c)
        {
            ans="Yes";
        }else
        {
            answer=a - b;
        }
        break;

    case 42:
        if ((a * b) == c)
        {
            ans="Yes";
        }else
        {
            answer=a * b;
        }
        break;
    default:
        break;
    }
    if (answer==0.0000000000001)
    {
        cout<<ans;
    }
    else
    {
        cout<<answer;
    }
    return 0;
} // namespace std;
