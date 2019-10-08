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
		int q, m;
		cin >> q >> m;
		char ara[m][q * 2];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < q * 2; j++)
				cin >> ara[i][j];
		}

		char ans[q];
		for (int i = 0; i < q; i++)
			ans[i] = 'E';

		for (int i = 0; i < q * 2; i += 2)
		{
			map<char, char>mm;
			for (int j = 0; j < m; j++) {
				if (ara[j][i + 1] == 'T')
				{
					ans[i / 2] = ara[j][i];
					break;
				}
				else
				{
					mm[ara[j][i]] = 'F';
				}

			}

			if (ans[i / 2] == 'E') {
				int count = 0;
				char temp;
				for (char a = 'A'; a <= 'D'; a++)
				{
					if (mm[a] == 'F')
						count++;
					else
						temp = a;
				}
				if (count < 3)
					ans[i / 2] = '?';
				else
					ans[i / 2] = temp;
			}

		}
		for (int i = 0; i < q; i++){
			cout << ans[i];
			if(i<q-1)
				cout<<" ";
		}
		cout << endl;

	}
}