#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    string s,a;
    vector<string>vec;

    for(int i=0;i<n;i++)
    {
        cin>>s;
        getline(cin,a);
        //cout<<s<<endl;
        if(m[s]==0)
            vec.push_back(s);
        m[s]++;
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" "<<m[vec[i]]<<endl;
    }
    return 0;
}
