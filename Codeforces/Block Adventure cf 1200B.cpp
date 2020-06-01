#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int c,b,k;
		cin>>c>>b>>k;
		int i=1;
		int ara[c];
		cin>>ara[0];
		bool ans=true;
		for(;i<c;i++)
		{
			cin>>ara[i];
			int before=ara[i-1];
			int after=ara[i];
			if(before+k>after)
			{	
				
				b+=min(before,before+k-after);

			}

			else if(before+k==after)
				continue;

			else if(before+k<after)
			{
				if(before+b+k<after)
				{
					ans=false;
				
				}
				else
				{
					b-=after-(before+k);
				}
			}

		}
		if(ans)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}