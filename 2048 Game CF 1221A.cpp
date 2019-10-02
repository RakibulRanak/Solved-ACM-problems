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
		int ara[n];
		map<int, int>m;
		bool ans = false;
		for (int i = 0; i < n; i++) {
			cin >> ara[i];
			m[ara[i]]++;
			if (m[2048] != 0)
			{
				ans = true;
			}

		}
		if (ans)
			cout << "YES" << endl;
		else {
			sort(ara, ara + n);
			for (int i = 0; i <= 10; i++)
			{
				int j = pow(2, i);
				int k = j * 2;
				int temp = m[j];
				int count = temp / 2;
				m[k] += count;
				//cout<<"k "<<m[k]<<endl;

			}
			if (m[2048] == 0)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;

		}
	}


	return 0;
}