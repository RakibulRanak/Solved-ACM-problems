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

void solve() {
	int n;
	cin >> n;

	//shifting number,how much shift
	int ara[20] = {0};
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		for (int i = 0; i < 20; i++)
		{
			if (temp >> i & 1)
				ara[i] += 1;
		}
	}
	ll ans = 0;
	int count = 20;
	while (count > 0)
	{
		count = 0;
		ll sum = 0;
		for (int i = 0; i < 20; i++)
		{
			if (ara[i] != 0)
			{
				count++;
				sum = sum + (1 << i);
				ara[i]--;
			}
		}
		ans += sum * sum;
	}
	cout << ans << endl;
}

int main() {
	FastIO; solve();
	return 0;
}