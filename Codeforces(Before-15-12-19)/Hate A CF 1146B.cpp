#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t,h="";
    cin>>t;
    int count=0;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]!='a'){
            h=h+t[i];
            count++;
        }
    }
    if(count==0)
        cout<<t<<endl;
    else if(count%2==1)
        cout<<":("<<endl;

    else
    {
        string temp="",temp2="";
        for(int i=t.size()-1;i>=t.size()-count/2;i--)
        {
            if(t[i]=='a')
            {
                cout<<":("<<endl;
                return 0;
            }
        }
        temp=h.substr(0,(count/2));
        temp2=h.substr(count/2,count/2);
        if(temp==temp2)
            cout<<t.substr(0,t.size()-count/2)<<endl;
        else
            cout<<":("<<endl;
    }
}
