#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{

		int n, x;
		cin >> n >> x;
		int lvl1 = 0;
		for (int i = 0; i < n - 1; i++)
		{
			int u, v;
			cin >> u >> v;
			if (u == x || v == x)
			{
				lvl1++;
			}
		}
		int left = n - 1 - lvl1;
		if (lvl1 <= 1)
			cout << "Ayush" << endl;
		else if ((left + lvl1 - 1) % 2 == 0)
			cout << "Ayush" << endl;
		else
			cout << "Ashish" << endl;


	}
}