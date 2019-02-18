#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int x=1,y=1,z;
    z=a-2;
    if(z%3==0)
    {
        z--;
        x++;
    }
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
