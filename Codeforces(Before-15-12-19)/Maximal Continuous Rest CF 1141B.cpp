#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp1,temp,max1=0,max2=0,hmax=0,tmax=0;
    bool first=false;
    cin>>n>>temp1;
    if(temp1==1){
        first=true;
        max1=1;
    }
    for(int i=1; i<n; i++)
    {
        cin>>temp;
        if(temp==1)
        {


            if(first)
                max1++;
            else
            {
                max2++;
            }
        }
        else
        {
            if(hmax<max2)
                hmax=max2;
            tmax=max2;
            max2=0;
            first=false;
        }

    }
    tmax=max2;
    if(hmax<max1)
        hmax=max1;
    if(hmax<max2){
        hmax=max2;

    }

    if(temp==1&&temp1==1){
        max1+=tmax;

    }
    cout<<max(hmax,max1)<<endl;
    return 0;
}
