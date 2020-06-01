#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max=2;
    if(n<=2)
        max=n;
    else
    {
        int temp=n-2;
        int t=temp/7;
        max+=(t*2);
        if(temp-(t*7)==6)
            max++;
    }
   // cout<<max<<endl;
    int min=2;
    if(n<=5)
        min=0;
    else if(n<=7)
        min=n-5;
    else
    {
        n=n-5;
        int temp=n-2;
        int t=temp/7;
        min+=(t*2);
        if(temp-(t*7)==6)
            min++;
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
