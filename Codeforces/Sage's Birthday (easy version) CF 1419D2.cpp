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
	int n;
	cin >> n;
	int ara[n];
	for (int i = 0; i < n; i++)
		cin >> ara[i];
	sort(ara, ara + n);


	int a = 0;
	int b = (n / 2);
	int ans = 0;
	int ara2[n];
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			//cout << ara[b] << " ";
			ara2[i] = ara[b];
			b++;
		}
		else
		{
			//cout << ara[a] << " ";
			ara2[i] = ara[a];
			a++;
		}

	}
	for (int i = 1; i < n - 1; i++)
	{
		if (ara2[i] < ara2[i - 1] && ara2[i] < ara2[i + 1])
		{
			ans++;
		}

	}
	cout << ans << endl;
	for (int i = 0; i < n ; i++)
	{
		cout << ara2[i] << " ";

	}
	cout << endl;



	return 0;
}