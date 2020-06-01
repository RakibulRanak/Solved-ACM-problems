
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    string shop;
    cin>>shop;
    vector<int>vec[26];
    for(int i=0;i<t;i++)
    {
        int text=(int)shop[i]-97;

        vec[text].push_back(i+1);
    }
    int n;
    cin>>n;
    while(n--)
    {
        string name;
        cin>>name;
        int high=-1;
        map<int,int>maa;
        for(int i=0;i<name.size();i++)
        {
            int text=(int)name[i]-97;
            maa[text]++;
        }
//        for(int i=0;i<26;i++)
//        {
//            cout<<maa[i]<<endl;
//        }

        for(int i=0;i<26;i++)
        {
            if(maa[i]>0)
            {
               // cout<<"dhukse"<<endl;
                int x=vec[i][maa[i]-1];
                //cout<<x<<endl;
                if(x>high)
                    high=x;
            }
        }
        cout<<high<<endl;

    }
}
