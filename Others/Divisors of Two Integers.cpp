#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
        cin>>ara[i];
    sort(ara,ara+n);
//    for(int i=0; i<n; i++)
//        cout<<ara[i]<<" ";
    cout<<ara[n-1]<<" ";
    int temp=-1;
    for(int i=0; i<n-1; i++)
    {
        if(ara[n-1]%ara[i]==0&&ara[i]!=temp&&ara[i]!=ara[n-1]){
            temp=ara[i];
            ara[i]=0;
        }

    }
//     for(int i=0; i<n; i++)
//        cout<<ara[i]<<" ";
    for(int i=n-2; i>=0; i--)
    {
        if(ara[i]!=0)
        {


            cout<<ara[i]<<endl;
            break;
        }

    }
}
