#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a1,v1,a2,v2,x;
    cin>>a1>>v1>>a2>>v2;
    if(v1<v2)
        cout<<"NO"<<endl;
    else
    {
        x=(a2-a1)/(v1-v2);
        if(x-(int)x!=0.000000)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
