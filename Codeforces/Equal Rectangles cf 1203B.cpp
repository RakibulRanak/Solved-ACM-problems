#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ara[4*n];
	
		for (int i = 0; i < 4 * n; i++)
		{
			cin >> ara[i];
			
		}
		sort(ara,ara+(4*n));
		int ans=ara[0]*ara[(4*n)-1];
		int j=4*n,i=0;
		j--;
		for(;i<2*n;i++)
		{
			if(ara[i]*ara[j]!=ans)
			{
				cout<<"NO"<<endl;
				break;
			}
			j--;
		}
		if(i==2*n)
			cout<<"YES"<<endl;
	}
		

	return 0;
}