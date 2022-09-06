#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(int(ch)>=48 && int(ch)<=57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if (int(ch)>=65 && int(ch)<=90)
    {
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL"<<endl;
    }
    else if (int(ch)>=97 && int(ch)<=122)
    {
        cout<<"ALPHA"<<"\n"<<"IS SMALL"<<endl;
    }
    return 0;
} // namespace std;
