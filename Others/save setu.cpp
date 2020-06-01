#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int money;
    long long int sum=0;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a=="donate"){
                cin>>money;
           sum=sum+money;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
