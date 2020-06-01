#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[8];
    int sum=0;
    for(int i=1;i<8;i++)
    {
        cin>>ara[i];
    }
    int i=1;
    while(1)
    {
        sum=sum+ara[i];
        if(sum>=n)
        {
            cout<<i<<endl;
            break;
        }
        i++;
        if(i>7)
            i=1;

    }
    return 0;
}
