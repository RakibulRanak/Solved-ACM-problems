#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int sum=sqrt((x1*x3)/x2)+sqrt((x2*x1)/x3)+sqrt((x3*x2)/x1);
    sum=sum*4;
    cout<<sum<<endl;
    return 0;
}
