#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>temp>>ara[i];
        ara[i]++;
    }
    int c;
    cin>>c;
    int pos=0;
    for(int i=0;i<n;i++)
    {
        pos=i;
        if(c<ara[i])
        {
            break;
        }

    }
    cout<<n-pos<<endl;
    return 0;
}
