#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int d, e;
	cin >> d >> e;
	e = e * 5;
	int ans1, ans2, temp, ans = 1000000000;
	bool loop=true;
	int i=0;
	while (i*d<=n) {
		
		
		temp = n - (i* d);
		ans1 = temp - ((temp / e ) * e);
/*
		temp = n - ((n / e) * e);
		ans2 = temp - ((temp / d) * d);*/
		ans=min(ans,ans1);
		i++;
	}

	//cout << ans1<<" "<<ans2<< endl;
	cout <<ans << endl;



	return 0;
}
