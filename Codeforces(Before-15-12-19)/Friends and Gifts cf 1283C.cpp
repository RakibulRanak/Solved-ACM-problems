#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int>out, in;
	map<int, int>m;
	int ara[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ara[i];
		if (ara[i] == 0)
			out.push_back(i + 1);
		m[ara[i]] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (m[i] == 0)
		{
			in.push_back(i);
		}
	}

	for (int i = 0; i < out.size() - 1; i++)
	{
		if (in[i] == out[i] || in[i + 1] == out[i + 1])
			swap(in[i], in[i + 1]);
		ara[out[i]-1] = in[i];
	}
	ara[out[out.size() - 1]-1] = in[in.size() - 1];
	for (int i = 0; i < n; i++)
		cout << ara[i] << " ";
	cout << endl;
}