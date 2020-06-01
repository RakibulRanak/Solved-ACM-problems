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
		int ara1[n];
		int ara2[n];
		for (int i = 0; i < n; i++)
			cin >> ara1[i];

		for (int i = 0; i < n; i++)
			cin >> ara2[i];

		int start = -1, end = -1;
		int i = 0;
		while (i < n)
		{
			if (ara1[i] != ara2[i])
			{
				start = i;
				break;
			}
			i++;
		}
		if (start == -1)
		{
			cout << "YES" << endl;
		}

		else {
			i = n - 1;
			while (i >= 0)
			{
				if (ara1[i] != ara2[i])
				{
					end = i;
					break;
				}
				i--;
			}
			//cout << start << " " << end << endl;
			int dist = ara2[start] - ara1[start];
			bool ans = true;
			if (dist < 0)
				ans = false;
			else {
				for (int i = start; i <= end; i++)
				{
					if (ara1[i] + dist != ara2[i])
					{
						ans = false;
						break;
					}
				}
			}
			if (ans)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

		}


	}
	return 0;
}