#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    vector<string>vec;
    map<string,int> m;
    while(cin>>s)
    {
        if(s=="#")
            break;
        x=s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(),s.end());
        m[s]++;
        vec.push_back(x);
       // mec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        s=vec[i];
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(),s.end());
        if(m[s]>1)
            continue;
        cout<<vec[i]<<endl;
    }
    return 0;
}
