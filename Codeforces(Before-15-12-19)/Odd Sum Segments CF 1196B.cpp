#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ara[n];
        int odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
            if(ara[i]%2==1)
                odd++;
        }
        if(odd<k)
        {
            cout<<"NO"<<endl;

        }
        else
        {
            int count_=0;
            odd=odd-k+1;
            if(odd%2==1)
            {
                cout<<"YES"<<endl;
                int p=0;
                if(k==1)
                    cout<<n<<endl;
                else
                {
                    while(count_<odd)
                    {
                        if(ara[p]%2==1)
                            count_++;
                        p++;
                    }
                    int baki=k-2;
                    cout<<p<<" ";
                    while(baki>0)
                    {
                        if(ara[p]%2==1)
                        {
                            cout<<p+1<<" ";
                            baki--;
                        }
                        p++;
                    }
                    cout<<n<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }

    }
    return 0;
}

