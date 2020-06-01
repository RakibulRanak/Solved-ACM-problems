#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    map<char,char>m;
    for(int i=0;i<a.size();i++)
    {
        m[a[i]]=b[i];
    }
    for(int i=0;i<c.size();i++)
    {
        if(c[i]>='0'&&c[i]<='9')
        {
            cout<<c[i];
            continue;
        }
        char d=c[i];
        //cout<<d<<"  rrvnrjvvkvjrkvn"<<endl;
        if(isupper(d)){
            d=tolower(d);
            //cout<<d<<" hgfghfvghv"<<endl;
            d=m[d];
            //cout<<d<<"  xcv"<<endl;
            d=toupper(d);
            cout<<d;
        }
        else
            cout<<m[c[i]];
    }
    cout<<endl;
    return 0;
}
