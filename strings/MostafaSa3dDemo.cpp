#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int resChars[26] = {0};

        string str;
        cin >> str;

        for (int i = 0; i < str.size(); i++)
        {
            if ('a' <= str[i] && str[i] <= 'z')
            {
                resChars[str[i] - 97]++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (resChars[i] != 0)
            {
                cout << char(i + 97) << " " << resChars[i] << endl;
            }
        }
    }
    return 0;
}
