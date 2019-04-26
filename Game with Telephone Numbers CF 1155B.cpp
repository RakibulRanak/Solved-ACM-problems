#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int eight=0;
    int temp=n-11;
    for(int i=0;i<=temp;i++)
    {
        if(s[i]=='8')
            eight++;

    }
    //if(eight<2)
        //cout<<"NO"<<endl;
    if(eight>temp/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
