#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int bc=0,jc=0,bk=0,jk=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==1)
            bc++;
        else
            jc++;
    }
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==1)
            bk++;
        else
            jk++;
    }
    cout<<min(bc,jk)+min(jc,bk)<<endl;
    return 0;
}
