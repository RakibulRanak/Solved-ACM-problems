#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    int count =0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
