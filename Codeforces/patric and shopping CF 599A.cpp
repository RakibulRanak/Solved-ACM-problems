#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    if(a<=b+c)
        sum=a;
    else
        sum=b+c;
    if(a+b<=c)
        sum=sum+a+b;
    else
        sum=sum+c;
    if(c+a<=b)
        sum=sum+c+a;
    else
        sum=sum+b;
    cout<<sum<<endl;
    return 0;
}

