#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,ans=0;
    cin>>n;
    while(n){
        if(n%2==1){
            ans++;
            //cout<<"true "<<n<<endl;
        }
        n/=2;
    }
   cout<<ans<<endl;
    return 0;

}
