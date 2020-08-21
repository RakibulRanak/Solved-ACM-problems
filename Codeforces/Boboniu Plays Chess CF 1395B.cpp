#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll log2bal(ll x)
{
	ll i = 1, count = 0;
	while (i * 2 <= x) {
		i *= 2; count++;
	}
	return count;
}

int main() {
	FastIO;
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	map<int, map<int, int >> my;
	for (int j = x; j >= 1; j--) {
		my[j][y] = 1;
		cout << j << " " << y << endl;
	}
	bool down = true, up = false;
	int lastrow = 1;
	for (int j = y; j <= m; j++)
	{
		if (down)
		{
			for (int i = 1; i <= n; i++)
			{
				if (my[i][j] == 0)
				{
					my[i][j] = 1;
					cout << i << " " << j << endl;
				}
			}
			lastrow = n;
			down = false;
			up = true;
		}
		else
		{
			for (int i = n; i >= 1; i--)
			{
				if (my[i][j] == 0)
				{
					my[i][j] = 1;
					cout << i << " " << j << endl;
				}
			}
			lastrow = 1;
			down = true;
			up = false;

		}

	}
	for (int j = y - 1; j >= 1; j--)
	{
		if (down)
		{
			for (int i = 1; i <= n; i++)
			{
				if (my[i][j] == 0)
				{
					my[i][j] = 1;
					cout << i << " " << j << endl;
				}
			}
			down = false;
			up = true;
		}
		else
		{
			for (int i = n; i >= 1; i--)
			{
				if (my[i][j] == 0)
				{
					my[i][j] = 1;
					cout << i << " " << j << endl;
				}
			}
			down = true;
			up = false;

		}

	}

	return 0;
}