#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll log2bal(ll x)
{
	ll i = 1, count = 0;
	while (i * 2 <= x) {
		i *= 2; count++;
	}
	return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	ll temp;
	ll myara[n];
	for (int i = 0; i < n; i++) {
		cin >> temp;
		myara[i] = temp;
	}
	ll r = 1; \
	ll tempans = 0;
	ll circle = -1000000000000000;
	sort(myara, myara + n);
	ll myans = 10000000000000000;

	ll looper = 0;

	while (circle < 10)
	{
		ll power = 1;
		bool undef = false;
		tempans = 0;

		//
		for (int i = 0; i < n; i++)
		{
			tempans += abs(myara[i] - power);
			if (power >= 10000000000)
			{
				undef = true;
				circle = 10;
				break;
			}
			power *= r;
		}
		if (myans <= tempans && looper == 0 & !undef) {
			circle = 0;
			looper = 1;
		}
		if (!undef)
			myans = min(tempans, myans);


		circle++;
		r++;
	}

	cout << myans << endl;
	return 0;
}