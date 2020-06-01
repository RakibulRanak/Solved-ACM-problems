#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp1=0,temp2=0;
    cin>>n;
    int ara[n/2];
    for(int i=0;i<n/2;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+(n/2));
    for(int i=0,j=1;i<n/2,j<n;i++,j=j+2)
    {
        temp1=abs(j-ara[i])+temp1;
        temp2=abs(j+1-ara[i])+temp2;
    }
    if(temp1<temp2)
        cout<<temp1<<endl;
    else
        cout<<temp2<<endl;
    return 0;

}
