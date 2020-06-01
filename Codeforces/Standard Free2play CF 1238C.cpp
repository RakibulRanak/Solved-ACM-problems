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
		int h, n;
		cin >> h >> n;
		int ara[n+1];
		int ans = 0;
		map<int,int>m;
		for (int i = 0; i < n; i++)
		{
			cin >> ara[i];
			m[ara[i]] = 1;
		}
		int now = 0;
		int valnow = ara[now];
		int h1 = valnow - 1;
		int h2 = valnow - 2;
		ara[n]=0;

		while (1)
		{
			if (valnow == 2 || valnow == 1 || valnow==0 )
			{
				cout << ans << endl;
				break;
			}

			if (m[h1] == 0)
			{
				valnow=ara[now+1]+1;
				h1 = valnow - 1;
				h2 = valnow - 2;
			}

			else
			{
				if (m[h2] == 1)
					now = now + 2;
				
				else
				{
					now = now + 1;
					ans++;
					
				}
				valnow = ara[now];
				h1 = valnow - 1;
				h2 = valnow - 2;
			}
		
		}
	}
	return 0;

}