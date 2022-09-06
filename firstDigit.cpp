#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[])
{
    string x;
    cin >> x;
    char s = x[0];
    string answer = ((int(s) - 48) % 2 == 0) ? "EVEN" : "ODD";
    cout << answer;
    return 0;
}