#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        if(t==0)
            return 0;
        int X,Y;
        cin>>X>>Y;
        int a=0,b=0;
        int x,y;
        for(int i=0;i<t;i++)
        {
            cin>>x>>y;
            a=x;
            b=y;


        a-=X;
        b-=Y;
        if(a==0 || b==0)
        {
            cout<<"divisa"<<endl;
        }
        else if(a>0 && b>0)
            cout<<"NE"<<endl;
        else if(a>0 && b<0)
            cout<<"SE"<<endl;
        else if(a<0 && b>0)
            cout<<"NO"<<endl;
        else if(a<0 && b<0)
            cout<<"SO"<<endl;
        }
    }
    return 0;
}
