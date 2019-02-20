#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[5];
    for(int i=0;i<5;i++)
        cin>>ara[i];
    sort(ara,ara+5);
    long long int min_=0,max_=0;
    for(int i=0;i<4;i++)
        min_=min_+ara[i];
    max_=min_+ara[4]-ara[0];
    cout<<min_<<" "<<max_<<endl;
    return 0;
}
