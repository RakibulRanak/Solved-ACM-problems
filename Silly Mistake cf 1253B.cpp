#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int temp;
	long long int sum = 0;
	bool ans = true;
	map<int, int>m, mm;

	int part = 0;
	vector<int>vec;
	int high = 0;

	for (int i = 0; i < n; i++)
	{


		if (sum == 0)
		{
			vec.push_back(i);
			part++;
			m.clear();
			mm.clear();
		}

		cin >> temp;
		mm[temp]++;
		sum += temp;

		if (mm[temp] > 1) {
			//cout<<"hi "<<i<<endl;
			ans = false;
		}

		if (temp < 0)
		{
			int bap = abs(temp) ;

			if (m[bap] == 0)
				ans = false;

			else {
				m[bap] = 0;
			}
		}
		else {
			m[temp] = 1;
		}

	}


	if (sum != 0 || !ans)
	{
		cout << -1 << endl;

	}
	else
	{
		cout << part << endl;
		int x = 0;
		for (int i = 1; i < part; i++)
		{
			cout << vec[i] - x << " ";
			x = vec[i];
		}
		cout << n - x << endl;
	}


	return 0;
}