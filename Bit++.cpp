#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count =0;
    char a,b,c;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a=='+'||b=='+')
            count++;
        else
            count--;
    }
    cout<<count<<endl;
    return 0;
}
