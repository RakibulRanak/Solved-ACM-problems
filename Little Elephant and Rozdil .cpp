#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,freq=1;;
    cin>>n;
    int ans=0;
    int min;
    cin>>min;
    for(int i=1;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp<min){
            min=temp;
            ans=i;
            freq=1;
        }
       else if(temp==min)
            freq++;

    }

    if(freq>1)
        cout<<"Still Rozdil"<<endl;
    else
        cout<<ans+1<<endl;
    return 0;
}
