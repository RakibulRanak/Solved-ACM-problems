#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int dorkar[n],zero[n];
    int ase[n];
    for(int i=0; i<n; i++)
        cin>>dorkar[i];
    for(int i=0; i<n; i++)
    {
        cin>>ase[i];
        zero[n]=0;
    }
    int ans=0;
    while(1)
    {
        for(int i=0; i<n; i++)
        {

            if(ase[i]<dorkar[i] &&(dorkar[i]-ase[i])>k)
            {
                cout<<ans<<endl;
                return 0;
            }
            zero[i]+=dorkar[i];
            ase[i]-=dorkar[i];
            if(ase[i]<0)
            {
                k-=abs(ase[i]);
                ase[i]=0;
            }
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
