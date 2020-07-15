#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve(ll cs) {
	ll v, c, vtype, ctype;
	cin >> v >> c >> vtype >> ctype;
	if (v > c)
	{
		ll vless = min(v - c, vtype);
		v -= vless;
		vtype -= vless;
		if (v != c)
		{
			if (c >= ctype)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		else
		{
			ll kombe = min(vtype, ctype);
			if (kombe > v)
				cout << "No" << endl;
			else
			{
				v -= kombe;
				c -= kombe;
				vtype -= kombe;
				ctype -= kombe;
				if (vtype == 0)
				{
					if (v >= ctype)
					{
						cout << "Yes" << endl;
					}
					else
						cout << "No" << endl;
				}
				else
				{


					if ((min(c, v) * 2)  >= vtype)
					{
						cout << "Yes" << endl;
					}
					else
						cout << "No" << endl;

				}
			}
		}
	}
	else
	{
		ll cless = min(c - v, vtype);
		c -= cless;
		vtype -= cless;
		if (v != c)
		{
			if (v >= ctype)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		else
		{
			ll kombe = min(vtype, ctype);
			if (kombe > v)
				cout << "No" << endl;
			else
			{
				v -= kombe;
				c -= kombe;
				vtype -= kombe;
				ctype -= kombe;
				if (vtype == 0)
				{
					if (v >= ctype)
					{
						cout << "Yes" << endl;
					}
					else
						cout << "No" << endl;
				}
				else
				{

					if ((min(c, v) * 2) >= vtype)
					{
						cout << "Yes" << endl;
					}
					else
						cout << "No" << endl;

				}
			}
		}
	}
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}