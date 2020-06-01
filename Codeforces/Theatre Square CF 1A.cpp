#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a;
    cin>>n>>m>>a;
    if(a>=m&&a>=n)
        cout<<1<<endl;
    else
    {
        long long t1,t2;
        if(m>n)
            swap(n,m);
        t1=ceil(n/a);
        m=m-a;
        if(m<1)
            t2=1;
        else
           t2=ceil(m/a)+1;

        cout<<t1*t2<<endl;
    }
    return 0;
}
