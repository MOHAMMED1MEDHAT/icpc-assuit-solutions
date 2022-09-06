#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char s;
    string answer;
    cin >> a >> s >> b;
    switch (int(s))
    {
    case 60:
        answer = (a < b) ? "Right" : "Wrong";
        break;
    case 61:
        answer = (a == b) ? "Right" : "Wrong";
        break;
    case 62:
        answer = (a > b) ? "Right" : "Wrong";
        break;
    default:
        break;
    }
    cout << answer;
    return 0;
} // namespace std;
