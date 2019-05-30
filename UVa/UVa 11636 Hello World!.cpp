#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
    while(cin>>n)
    {
        if(n<0)
            return 0;
        float a;
        a=log2(n);
        cout<<"Case "<<i<<": "<<ceil(a)<<endl;
        i++;
    }

}
