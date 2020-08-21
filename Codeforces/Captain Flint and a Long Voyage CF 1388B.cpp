#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int main() {
	FastIO; ll t; cin >> t;

	for (ll it = 0; it < t; it++)
	{
		int n;
		cin >> n;

		int count = (n  + 3) / 4;
		int baki = n - count;
		for (int i = 0; i < baki; i++)
			cout << 9;
		for (int i = 0; i < count; i++)
			cout << 8 ;
		cout << endl;
	}

	return 0;
}