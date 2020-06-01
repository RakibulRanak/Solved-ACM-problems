#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        sum=sum+temp;
    }
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)!=1)
            count++;

    }
    cout<<count<<endl;
    return 0;

}
