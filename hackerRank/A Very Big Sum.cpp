#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum=0,temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum=sum+temp;
    }
    cout<<sum<<endl;
    return 0;


}

