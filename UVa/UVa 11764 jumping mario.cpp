#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0;
    while(t--)
    {
        p++;
        int n,h=0,l=0,x,y;
        cin>>n;
        if(n>=1)
        {
            cin>>x;
            for(int i=1; i<n; i++)
            {
                cin>>y;
                if(y>x)
                    h++;
                else if(y<x)
                    l++;
                x=y;
            }
        }
        cout<<"Case "<<p<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
