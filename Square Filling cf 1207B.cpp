#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r, c;
	cin >> r >> c;
	int ara[r + 2][c + 2];
	for (int i = 0; i < r + 2; i++)
	{
		for (int j = 0; j < c + 2; j++)
		{
			ara[i][j] = 0;
		}
	}
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			cin >> ara[i][j];
		}
	}

	


	vector<int>vec;
	bool ans = true, pash = true, up = true, right = true, down = true;

	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (ara[i][j] == 1) {

				if (ara[i][j - 1] == 0 && ara[i][j + 1] == 0)
					pash = false;
				if (ara[i - 1][j] == 0 && ara[i + 1][j] == 0)
					up = false;
				//cout<<pash<<" "<<up<<endl;

				if (!up || !pash)
				{
					ans = false;
					break;
				}

				else
				{
					if (ara[i][j+ 1] == 0)
						right = false;
					if (ara[i+ 1][j] == 0 || ara[i + 1][j + 1] == 0)
						down = false;
					//cout<<" ,,"<<right<<" "<<down<<endl;
					if (right && down) {
						vec.push_back(i);
						vec.push_back(j);
						
					}
					right=true;
						down=true;
					

				}
			}

		}
		if (!ans)
			break;
	}

	if (ans) {
		int x = 0;
		cout << vec.size() / 2 << endl;
		for (int i = 0; i < vec.size() / 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << vec[x] << " ";
				x++;
			}
			cout << endl;
		}
	}
	else
		cout << -1 << endl;

	return 0;
}