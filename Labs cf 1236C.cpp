#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans1=0,ans2=0;
        int t1=c/2;
        int t2=t1;;
        int nitesi=min(b,t2);
        ans1=3*nitesi;
        b=b-nitesi;
        t1=b/2;
        t2=t1;
        nitesi=min(a,t2);
        ans2=3*nitesi;
        cout<<ans1+ans2<<endl;
    }

}