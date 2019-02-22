#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,b1,b2;
    long long int ans1=0,ans2=0,temp;
    cin>>n>>b1;
   // int ara1[n];
    for(int i=n-1;i>=0;i--)
    {
        cin>>temp;
        ans1=ans1+(temp*pow(b1,i));

    }
    cin>>m>>b2;
    for(int i=m-1;i>=0;i--)
    {
        cin>>temp;
        ans2=ans2+(temp*pow(b2,i));

    }
    if(ans1==ans2)
        cout<<"="<<endl;
    else if(ans1<ans2)
        cout<<"<"<<endl;
    else
        cout<<">"<<endl;
    return 0;

}
