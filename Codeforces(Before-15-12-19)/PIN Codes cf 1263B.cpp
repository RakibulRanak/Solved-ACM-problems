#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int q;
	cin >> q;
	while(q--)
    {
        int n;
        cin >> n;
        map<string,int>m;
        string ara[n];
        for(int i=0;i<n;i++){
            cin>>ara[i];
            m[ara[i]]++;
        }

        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(m[ara[i]]==1)
                continue;

            else
            {
                ans++;
                bool ghura=true;
                string now=ara[i];
                m[ara[i]]--;
                now[3]='0';
               
                char x='1';
                while(ghura)
                {
                    if(m[now]!=0)
                    {
                        now[3]=x;
                    
                    }
                    else
                    {
                        ghura=false;
                        ara[i]=now;
                        m[now]=1;
                    }
                    x++;
                }
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<ara[i]<<endl;
        }

     
    }

	return 0;
}