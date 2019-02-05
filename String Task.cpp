#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    string b="";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
        ;
        else
            b=b+'.'+a[i];
    }
    cout<<b<<endl;
    return 0;
}
