#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        c++;
        int n,tt;
        cin>>n;
        int max=0;
        for(int i=0;i<n;i++)
        {
            cin>>tt;
            if(tt>max)
                max=tt;
        }
        cout<<"Case "<<c<<": "<<max<<endl;
    }
    return 0;
}
