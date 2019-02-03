#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x=n*m;
    int p=1;
    for(int i=0;i<x;i++)
    {
        getchar();
        char a=getchar();
       // cout<<a<<endl;
        if(a=='C'||a=='M'||a=='Y')
        {

            p=0;
        }
    }
    if(p)
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
    return 0;
}
