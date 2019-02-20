#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>37 &&temp%5>2)
        {
            temp=temp/5;
            temp=(temp+1)*5;
        }
        cout<<temp<<endl;
    }
    return 0;
}
