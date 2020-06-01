#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ara[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);
    int i=1,temp=1;
    while(temp<k)
    {
        if(temp+i>k)
            break;
        temp+=i;
        i++;
    }
    int x=k-temp;
    cout<<ara[x]<<endl;
    return 0;
}
