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


void solve(ll cs) {
	int n;
	cin >> n;
	int ara1[n], ara2[n];
	for (int i = 0; i < n; i++)
		cin >> ara1[i];
	vector<int>lock, unlock;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		ara2[i] = temp;
		if (temp == 1)
		{
			lock.push_back(ara1[i]);
		}
		else
			unlock.push_back(ara1[i]);
	}
	sort(unlock.begin(), unlock.end(), greater<int>());
	int i = 0, j = 0, k = 0;
	while (i < n)
	{
		if (ara2[i] == 0)
		{
			cout << unlock[j] << " ";
			j++;
		}
		else
		{
			cout << lock[k] << " ";
			k++;
		}
		i++;
	}
	cout << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}