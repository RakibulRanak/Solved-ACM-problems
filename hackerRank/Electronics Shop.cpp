#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,k,u;
    cin>>b>>k>>u;
    int key[k];
    int usb[u];
    for(int i=0;i<k;i++)
        cin>>key[i];
    for(int i=0;i<u;i++)
        cin>>usb[i];
    int sum=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<u;j++)
        {
            if(key[i]+usb[j]>b)
                continue;
            if(key[i]+usb[j]>sum)
                sum=key[i]+usb[j];
        }
    }
    if(sum==0)
        cout<<-1<<endl;
    else
        cout<<sum<<endl;
    return 0;
}
