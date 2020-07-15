#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int Divisors(int n, int &count)
{
	int div = 1;
	//cout << n << endl;
	//int m = n;
	while (n % 2 == 0)
	{
		n = n / 2;
	}


	for (int i = 3; i <= sqrt(n); i = i + 2)
	{

		while (n % i == 0)
		{
			//cout << i << " ";
			div *= i;
			count++;
			n = n / i;
		}
	}
	if (n > 2)
	{
		count++;
		div = n;

	}
	return div;

}


void solve(ll cs) {
	int n;
	cin >> n;
	int i = 0;
	if (n == 1)
	{
		cout << "FastestFinger" << endl;

	}
	else if (n == 2 || n % 2 == 1)
	{
		cout << "Ashishgup" << endl;

	}

	else
	{

		int count = 0;

		int div = Divisors(n, count);
		//cout << div << endl;
		if (div == 1 ) {
			cout << "FastestFinger" << endl;
		}
		else if (div * 2 == n && count == 1)
		{
			cout << "FastestFinger" << endl;
		}
		else
		{
			cout << "Ashishgup" << endl;
		}


	}
}




int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}