#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,one=0,two=0,three=0,four=0,temp,ans;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        if(temp==1)
            one++;
        else if(temp==2)
            two++;
        else if(temp==3)
            three++;
        else
            four++;
    }
    // int baki_one=0;
    //baki_three=0;
    ans=four;
    if(three>=one)
    {
        one=0;
        ans=ans+three;
        //cout<<ans<<"a"<<endl;

    }
    if(one>three)
    {
        one=one-three;
        ans=ans+three;
        // cout<<ans<<"b"<<endl;
    }
    if(two>0)
    {
        if(two%2==1)
        {
            if(one>0)
                one=one-1;
            if(one>0)
                one=one-1;
            ans=ans+(two+1)/2;
        }
        //cout<<two<<"hbhj"<<endl;
        else
        {
            if(two>1)
                two=two/2;
            //cout<<two<<"hgvgcgcfgcf"<<endl;
            ans=ans+two;
            // cout<<ans<<"c"<<endl;
        }
    }
    if(one>0)
    {
        //cout<<one<<"hi"<<endl;
        ans=ans+((one+3)/4);
        // cout<<ans<<"d"<<endl;
    }
    //ans=ans+one;
    cout<<ans<<endl;
    return 0;





}
