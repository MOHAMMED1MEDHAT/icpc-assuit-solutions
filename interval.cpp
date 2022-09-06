#include <iostream>
using namespace std;
int main()
{
    double n;
    cin >> n;
    if (n < 0.0 || n > 100.0)
    {
        cout << "Out of Intervals" << endl;
    }
    else if (n >= 0.0 && n <= 25.0)
    {
        cout << "Interval [0,25]" << endl;
    }
    else if (n > 25.0 && n <= 50.0)
    {
        cout << "Interval (25,50]" << endl;
    }
    else if (n > 50.0 && n <= 75.0)
    {
        cout << "Interval (50,75]" << endl;
    }
    else if (n > 75.0 && n <= 100.0)
    {
        cout << "Interval (75,100]" << endl;
    }
    return 0;
} // namespace std;
