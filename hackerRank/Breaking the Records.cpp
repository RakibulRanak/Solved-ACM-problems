#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    int min=t,max=t,minb=0,maxb=0;
    for(int i=1;i<n;i++)
    {
        cin>>t;
        if(t>max)
        {
            max=t;
            maxb++;
        }
        else if(t<min)
        {
            min=t;
            minb++;
        }
    }
    cout<<maxb<<" "<<minb<<endl;
    return 0;

}
