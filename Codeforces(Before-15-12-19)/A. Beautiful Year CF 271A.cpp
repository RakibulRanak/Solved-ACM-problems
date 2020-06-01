#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    n++;
    m=n;
    string s="";

    while(1)
    {
         map<int,int>ma;
        for(int i=0; i<4; i++)
        {
            int p;
            p=m%10;
            m/=10;
            ma[p]=1;

        }
        int ans=0;
        for(int i=0;i<=9;i++)
        {
            if(ma[i]==1)
                ans++;
        }
        if(ans==4)
        {
            cout<<n<<endl;
            break;
        }
        n++;
        m=n;
    }

}
