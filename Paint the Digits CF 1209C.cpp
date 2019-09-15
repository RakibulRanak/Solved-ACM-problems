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
		string s;
		cin >> s;
		vector<pair<char, int> >vec;
		for (int i = 0; i < n; i++)
			vec.push_back({s[i], i});

		sort(vec.begin(), vec.end());
		string ans = "";
		int i = 0;
		int index = -1;
		bool f1 = true, f2 = true;
		map<int, int>m;
		int kom=1000000000;
		bool once = true;

		while (i < n)
		{
			if (vec[i].second < index)
			{
				if (once) {
					kom = vec[i].first;
					once = false;
				}
				i++;

				continue;
			}

			else if(vec[i].first>kom)
			{
				i++;
				//cout<<kom<<endl;
				continue;
			}

			else
			{
				index = vec[i].second;
				m[vec[i].second] = 1;

			}
			i++;
		}

		index = -1;
		i = 0;
		while (i < n)
		{
			if (m[vec[i].second] == 1)
			{
				i++;
				continue;
			}

			if (vec[i].second < index && m[vec[i].second] == 0)
			{
				f2 = false;
				break;
			}
			else
			{
				index = vec[i].second;
				m[vec[i].second] = 2;
			}
			i++;
		}
		if (f2)
		{
			for (int i = 0; i < n; i++)
				cout << m[i];
			cout << endl;


		}
		else
			cout << "-" << endl;


	}
	return 0;
}