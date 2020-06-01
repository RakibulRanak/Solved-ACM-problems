#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,a1,b1,sum;
    cin>>a>>b;
    sum=abs(a-b);
    a1=sum/2;
    b1=sum-a1;
    sum=a1*(a1+1)/2  + b1*(b1+1)/2;
    cout<<sum<<endl;
    return 0;

}
