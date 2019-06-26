#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
        int inc=0,dec=0;
        int x,y;
        cin>>x;
        for(int i=1;i<10;i++)
        {
            cin>>y;
            if(y>=x)
                inc++;
            if(y<=x)
                dec++;
            x=y;

        }
        if(inc==9 || dec==9)
        {
            cout<<"Ordered"<<endl;
        }
        else
            cout<<"Unordered"<<endl;
    }
    return 0;
}
