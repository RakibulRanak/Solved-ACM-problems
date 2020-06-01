#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    int sum=a+b;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int temp;
        int ans=0;
        cin>>temp;
        int num=temp/sum;
        int remain=temp%sum;
        if(remain==0)
        {
            int x=temp-(temp-b);
            ans=(x+(a-1))/a;
        }
        else
        {
            int x=num*sum;
            x+=a;
            if(x>=temp)
            {
                ans=0;
            }
            else
            {
                x=temp-x;
                ans=(x+a-1)/a;
            }
        }
       // cout<<ans<<endl;
        vec.push_back(ans);

    }
    int total=0;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {   
        k-=vec[i];
        if(k<0)
            break;
        total++;

    }
    cout<<total<<endl;
    return 0;

}