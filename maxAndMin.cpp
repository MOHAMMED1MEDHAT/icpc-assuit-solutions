#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,min,max;
    cin>>a>>b>>c;
    min=a,max=a;
    if(max<a){
        max=a;
    }
    if (max<b)
    {
        max=b;
    }
    if (max<c)
    {
        max=c;
    }
    if(min>a){
        min=a;
    }
    if (min>b)
    {
        min=b;
    }
    if (min>c)
    {
        min=c;
    }
    cout<<min<<" "<<max<<endl;
    return 0;
} // namespace std;
