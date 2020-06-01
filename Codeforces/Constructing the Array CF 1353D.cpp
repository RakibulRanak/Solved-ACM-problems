#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef pair<int , pair<int, int> > pi;

struct Compare {
	constexpr bool operator()(pi const & a,
	                          pi const & b) const noexcept
	{ return a.first < b.first || (a.first == b.first && a.second.first > b.second.first); }

};


void solve(ll cs) {

	int n;
	cin >> n;
	//priority_queue < pi, vector<pi>, greater < pi > > pq;
	priority_queue < pi , vector<pi> ,
	               Compare> pq;


	int ara[n + 1];
	int left = 1;
	int right = n;
	int dif = n - 1;
	pq.push({dif, {left, right}});
	int count = 1;
	while (!pq.empty())
	{
		pair<int , pair<int, int> > top;
		top = pq.top();
		pq.pop();
		//cout << top.first << " " << top.second.first << " " << top.second.second << endl;
		left = top.second.first;
		right = top.second.second ;
		int mid = (left + right) / 2;
		ara[mid] = count;
		//cout << left << " " << right << " " << mid << " " << count << endl;

		int l1 = left;
		int r1 = mid - 1;
		if (r1 >= l1)
		{
			pq.push({r1 - l1, {l1, r1}});
			//cout << "le " << l1 << " " << r1 << endl;
		}

		int l2 = mid + 1;
		int r2 = right;
		if (l2 <= r2)
		{
			pq.push({r2 - l2, {l2, r2}});
			//cout << "ri " << l2 << " " << r2 << endl;
		}
		count++;


	}
	for (int i = 1; i <= n; i++)
		cout << ara[i] << " ";
	cout << endl;





}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}