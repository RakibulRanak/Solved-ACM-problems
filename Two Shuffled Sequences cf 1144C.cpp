#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
        scanf("%d",&ara[i]);
    sort(ara,ara+n);
    vector<int>inc;
    vector<int>dec;
    bool lira=true;
    int i=0;

    for(; i<n-2; i++)
    {
        if(ara[i]==ara[i+2])
        {
            cout<<"NO"<<endl;
            lira=false;
            break;
        }
        else  if(ara[i]==ara[i+1])
        {
            inc.push_back(ara[i]);
            dec.push_back(ara[i+1]);
            i++;
        }
        else
            inc.push_back(ara[i]);
    }
    if(lira)
    {
        if(i==n-2)
        {
            if(ara[i]==ara[i+1])
            {
                inc.push_back(ara[i]);
                dec.push_back(ara[i+1]);

            }
            else
            {
                inc.push_back(ara[i]);
                inc.push_back(ara[i+1]);
            }

        }
        else if(i==n-1)
            inc.push_back(ara[i]);

        cout<<"YES"<<endl;
        cout<<inc.size()<<endl;
        for(int i=0; i<inc.size(); i++)
        {
            printf("%d ",inc[i]);
        }
        cout<<endl;
        int len=dec.size();
        cout<<len<<endl;
        for(int i=len-1; i>=0; i--)
        {
            printf("%d ",dec[i]);
        }
        cout<<endl;
    }
    return 0;

}
