#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string s;
        int n;
        int ans=0;
        int temp2;
        cin>>n>>s;
        int pos1=-1,pos2=-1,pos3=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='<'){
                pos1=i+1;
            break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='<'){
                pos3=i+1;
            break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='>'){
                pos2=i+1;
            break;
            }
        }
       // cout<<pos1<<" "<<pos3<<endl;
        if(pos1==-1||pos2==-1)
        {
            ans=0;
        }
        else if(s[0]=='>'||s[n-1]=='<')
            ans=0;

        else if(pos1!=-1&&pos2!=-1)
        {

            if(pos2>pos1){

                temp2=min(pos2-pos1,n-pos3);
                ans=min(temp2,n+1-pos2);
            }
            else if(pos1>pos2)
                ans=0;
        }


        cout<<ans<<endl;

    }
    return 0;
}
