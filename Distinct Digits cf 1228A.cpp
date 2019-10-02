#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    int t=a;
    while(t<=b)
    {   
        int temp=t;
        map<int,int>m;
        bool ans=true;
        while(temp!=0)
        {
            int r=temp%10;
            temp/=10;
            if(m[r]==0)
                m[r]=1;
            else{
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<t<<endl;
            return 0;
        }
        t++;
    }
    cout<<-1<<endl;

}