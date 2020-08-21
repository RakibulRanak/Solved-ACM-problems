#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void solve(ll cs) {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int com = 0;
	stack<int>zero, one;
	int ara[n];
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			if (zero.size() > 0)
			{
				int temp = zero.top();
				zero.pop();
				one.push(temp);
				ara[i] = temp;
			}
			else
			{
				com++;
				one.push(com);
				ara[i] = com;
			}
		}
		else
		{
			if (one.size() > 0)
			{
				int temp = one.top();
				one.pop();
				zero.push(temp);
				ara[i] = temp;
			}
			else
			{
				com++;
				zero.push(com);
				ara[i] = com;

			}
		}
	}
	cout << com << endl;
	for (int i = 0; i < n; i++)
		cout << ara[i] << " ";
	cout << endl;

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}