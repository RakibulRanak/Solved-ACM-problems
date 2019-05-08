#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count =1;
    if(s.size()==1){
        cout<<9<<endl;
        return 0;
    }

    for(int i=s.size()-1;i>0;i--)
    {
        count+=9-(s[i]-'0');
    }
    count+=9;
    cout<<count<<endl;

    return 0;
}
