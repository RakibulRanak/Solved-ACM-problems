#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m;
    cin>>n>>m;
    if(m>n)
        cout<<-1<<endl;

    else
    {
        int minstep=ceil(n/2);
        if(minstep%(int)m!=0)
        {
            while(minstep<=n)
            {
                minstep++;
                if(minstep%(int)m==0){
                    cout<<minstep<<endl;
                    break;
                }

            }
            if(minstep>n)
                cout<<-1<<endl;
        }
        else
            cout<<minstep<<endl;

    }
    return 0;
}
