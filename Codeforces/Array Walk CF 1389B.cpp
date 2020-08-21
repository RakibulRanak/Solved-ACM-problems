#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



void solve(ll cs) {
	int n, k, z;
	cin >> n >> k >> z;
	int ara1[n], ara2[n];
	ara1[0] = 0;
	ara2[0] = 0;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> ara1[i];
		ara2[i] = ara1[i] + ara2[i - 1];
	}
	sum = ara2[k + 1];
	//cout << "sum: " << sum << endl;
	for (int i = 1; i <= k; i++)
	{
		int a = ara1[i];
		int b = ara1[i + 1];
		int moveremain = (k - i + 1);

		int rotate = min(2 * z , moveremain);
		int ahobe = (rotate / 2) + 1;
		int bhobe = (rotate + 1) / 2;
		int temp = ahobe * a + bhobe * b;
		//cout << moveremain << " " << ahobe << " " << bhobe << endl;
		//cout << "temp: " << temp << endl;


		int temp2 = 0;
		if (rotate + (i - 1) < k)
		{
			if (ahobe > bhobe)
			{
				int movebaki = k - ((i - 1) + rotate);
				temp2 = ara2[i + movebaki] - ara2[i];
			}
			else
			{
				int movebaki = k - ((i - 1) + rotate);
				temp2 = ara2[i + 1 + movebaki] - ara2[i + 1];
			}
		}
		sum = max(sum, ara2[i - 1] + temp + temp2);
	}
	cout << sum << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}