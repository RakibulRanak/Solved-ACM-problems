#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        sum+=ara[i];
    }
    sort(ara,ara+n);
    int temp=0,coin=0;
    for(int i=n-1;i>=0;i--)
    {
        temp+=ara[i];
        coin++;
        if(temp>sum/2)
            break;
    }
    cout<<coin<<endl;
    return 0;
}
