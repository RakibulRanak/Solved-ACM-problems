#include<bits/stdc++.h>
using namespace std;

map<int,int,greater<int> >m;
map<int,int>::iterator it;
int binary(int n,int amount)
{
    int p=0;
    while(n!=0)
    {
        int temp=n%2;
        if(temp==1)
        {
            int value=pow(2,p);
            m[value]++;
            amount++;
        }

        p++;
        n=n/2;
    }
    return amount;
}


int main()
{
    int n,k;
    cin>>n>>k;
    int amount=binary(n,0);
//    for(it=m.begin(); it!=m.end(); it++)
//        cout<<it->first<<"hgh "<<it->second<<endl;
    if(k<amount)
        cout<<"NO"<<endl;
    else if(k==amount)
    {
        cout<<"YES"<<endl;
        for(it=m.begin(); it!=m.end(); it++)
            cout<<it->first<<" ";


        cout<<endl;
    }
    else
    {
        for(it=m.begin(); it!=m.end(); it++)
        {
            while(it->second>0)
            {
                if(it->first==1)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                it->second--;
                int temp=it->first/2;
                m[temp]+=2;
                amount++;
                if(amount==k)
                {
                    cout<<"YES"<<endl;
                    for(it=m.begin(); it!=m.end(); it++)
                    {
                        for(int i=0; i<it->second; i++)
                            cout<<it->first<<" ";

                    }
                    cout<<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
