#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int r,c;
        cin>>r>>c;
        int count=0;
        if(r+2<=8){
            if(c+1<=8)
                count++;
            if(c-1>0)
                count++;
        }
        if(r-2>0){
            if(c+1<=8)
                count++;
            if(c-1>0)
                count++;
        }
        if(c+2<=8){
            if(r+1<=8)
                count++;
            if(r-1>0)
                count++;
        }
        if(c-2>0){
            if(r+1<=8)
                count++;
            if(r-1>0)
                count++;
        }
        cout<<"Case "<<i+1<<": ";
        cout<<count<<endl;

    }
    return 0;
}
