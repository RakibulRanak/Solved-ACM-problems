#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k,i;
    int ans=0;
    cin>>n>>k;
    //cout<<2*n<<endl;
    for(i=1; i<=n; i++)
    {
        long long rakha=0,khawa=0;
        if(i%2==0)
            rakha=(i/2)*(i+1);
        else
            rakha=i*((i+1)/2);
        khawa=n-i;
        //cout<<rakha<<" "<<khawa<<endl;
        if(rakha-khawa==k)
        {
            ans=i;
            break;
        }
    }
    cout<<n-ans<<endl;
    return 0;

}
