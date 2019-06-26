#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    vector<int>vec[6];
    int ara[43];
    for(int i=0; i<43; i++)
          ara[i]=0;
    ara[8]=1;
    ara[15]=2;
    ara[16]=3;
    ara[23]=4;
    ara[42]=5;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        vec[ara[t]].push_back(i);
    }
    int index[6]= {0,0,0,0,0,0};
    int size_[6];
    for(int i=0; i<6; i++)
    {
        size_[i]=vec[i].size();
        if(size_[i]==0)
        {
            cout<<n<<endl;
            return 0;
        }
    }
    int ans=0;
    bool ghurbe=true;
    while(1 && ghurbe)
    {
        if(index[0]>=size_[0])
            break;
        int flag=vec[0][index[0]];
        index[0]++;
        for(int i=1; i<6; i++)
        {
            while(vec[i][index[i]]<flag)
            {
                if(index[i]>=size_[i]-1)
                {
                    ghurbe=false;
                    goto here;

                }

                index[i]++;

            }
            flag=vec[i][index[i]];
            if(index[i]>=size_[i])
            {
                ghurbe=false;
                goto here;
            }
            index[i]++;
        }
        ans++;
here:
        ;
    }
    cout<<n-(ans*6)<<endl;

    return 0;
}
