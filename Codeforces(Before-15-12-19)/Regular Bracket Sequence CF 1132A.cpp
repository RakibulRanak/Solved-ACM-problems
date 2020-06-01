#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    int left,right;
    cin>>a>>b>>c>>d;
    if(a==0&&c!=0)
        cout<<0<<endl;
    else{
    left=2*a+c;
    right=2*d+c;
    if(left==right)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    }
    return 0;

}
