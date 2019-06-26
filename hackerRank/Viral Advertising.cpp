#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,like=0,man=5;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        like+=man/2;
        man=(man/2)*3;
    }
    cout<<like<<endl;
    return 0;
}
