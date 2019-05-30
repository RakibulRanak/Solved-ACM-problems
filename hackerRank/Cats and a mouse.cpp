#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(abs(c-a)==abs(c-b))
            cout<<"Mouse C"<<endl;
        else if(abs(c-a)<abs(c-b))
            cout<<"Cat A"<<endl;
        else
            cout<<"Cat B"<<endl;
    }
    return 0;

}
