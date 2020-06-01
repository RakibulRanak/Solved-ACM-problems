#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solution(ll cs) {
	double n, kun, har;
	cin >> n;
	har = 360.0 / (2 * n);
	kun = 90.0 - har;

	double sum = 0;
	int i = 0;
	bool barbe = false;
	while (kun < 90) {


		double ekhon = cos((kun * 0.0174533));
		sum += ekhon;

		if (kun < 0.001 && ! barbe)
		{
			kun = 0;
			barbe = true;

		}
		if (barbe)
			kun += har;
		else
		{
			kun -= har;
		}


		i++;
	}
	if (n == 2)
		sum = 1.0;
	cout <<  std::fixed << std::setprecision(9) << sum << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solution(i + 1);

	return 0;
}