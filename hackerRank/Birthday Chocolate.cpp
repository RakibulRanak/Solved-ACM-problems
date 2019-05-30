#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    int d,m;
    cin>>d>>m;
    int s=0;
    for(int i=0;i<=n-m;i++)
    {
        int temp=0;
        for(int j=i;j<i+m;j++)
        {
            temp+=ara[j];
        }
        if(temp==d)
            s++;
    }
    cout<<s<<endl;
    return 0;
}
