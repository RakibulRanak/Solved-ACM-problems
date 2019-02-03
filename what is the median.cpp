#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s;
    int n,m;
    vector<long long>vec;
    while(cin>>s)
    {
        vec.push_back(s);
        sort(vec.begin(),vec.end());
        if(vec.size()%2==1)
        {
            n=(vec.size()-1)/2;
            cout<<vec[n]<<endl;
        }
        else
        {
            n=(vec.size()-1)/2;
            m=(vec.size()+1)/2;
            cout<<(vec[m]+vec[n])/2<<endl;
        }
    }
    return 0;
}
