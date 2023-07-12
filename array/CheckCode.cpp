#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string answer = "Yes";
    char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int a, b;
    cin >> a >> b;
    int n = a + b + 1;
    char arr[n];
    for (int v = 0; v < n; v++)
    {
        cin >> arr[v];
    }

    if (arr[a] == '-')
    {
        for (int i = 0; i < n; i++)
        {
            if (i == a)
            {
                continue;
            }
            for (int j = 0; j < 10; j++)
            {
                if (arr[i] != nums[j])
                {
                    answer = "No";
                }
                else
                {
                    answer = "Yes";
                    break;
                }
            }
            if (answer == "No")
            {
                break;
            }
        }
    }
    else
    {
        answer = "No";
    }

    cout << answer;

    return 0;
}
