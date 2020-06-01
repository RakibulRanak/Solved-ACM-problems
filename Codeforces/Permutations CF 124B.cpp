#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<vector<char> >vec(n);
    char s;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
                cin>>s;
          vec[i].push_back(s);
        }
    }
    string arr[n];
    int ara[]={0,1,2,3,4,5,6,7,};
    int ans=999999999;
    int p=1;
    for(int i=1;i<k;i++)
        p*=10;
    int P=p;
    do
    {
        int temp=0;
        int min=999999999,max=-999999999;
        for(int j=0;j<n;j++)
        {
             p=P;
            temp=0;
            for(int t=0;t<k;t++)
            {
                int d=vec[j][ara[t]]-'0';
                temp+=d*p;
                p/=10;
            }
            if(temp<min)
                min=temp;
            if(temp>max)
                max=temp;
        }

        int apatotoans=max-min;
        if(apatotoans<ans )
            ans=apatotoans;
    }while(next_permutation(ara,ara+k));
    cout<<ans<<endl;
    return 0;
}
