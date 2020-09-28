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


void solve(ll cs) {
	int n;
	cin >> n;
	vector<vector<int>>vec(n + 1);
	vector<vector<int>>flat(n + 1);
	vector<vector<int>>ele(n + 1);
	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	queue<int> q;
	q.push(1);
	int visited[n + 1];
	memset(visited, 0, sizeof(visited));
	visited[1] = 1;
	map<int, int>parent;
	parent[1] = 0;
	map<int, int>weight, fmap;
	int k = 0;
	fmap[1] = 0;
	flat[0].push_back(1);
	int high = 0;
	while (!q.empty()) {

		int f = q.front();
		q.pop();
		for (int i = 0; i < vec[f].size(); i++) {
			if (!visited[vec[f][i]]) {

				q.push(vec[f][i]);
				visited[vec[f][i]] = 1;
				parent[vec[f][i]] = f;
				fmap[vec[f][i]] = fmap[f] + 1;
				flat[fmap[f] + 1].push_back(vec[f][i]);
				high = max(high, fmap[f] + 1);
			}
		}
	}
	for (int i = high; i > 0; i--)
	{
		for (int j = 0; j < flat[i].size(); j++)
		{
			weight[flat[i][j]]++;
			weight[parent[flat[i][j]]] += weight[flat[i][j]];
			//cout << flat[i][j] << " " << weight[flat[i][j]] << endl;
		}
	}
	weight[flat[0][0]]++;
	queue<int> q2;
	q2.push(1);
	int visited2[n + 1];
	memset(visited2, 0, sizeof(visited2));
	visited2[1] = 1;
	high = 1000000;
	while (!q2.empty()) {

		int f = q2.front();
		q2.pop();
		int temp = weight[flat[0][0]] - weight[f];
		for (int i = 0; i < vec[f].size(); i++) {
			if (!visited2[vec[f][i]]) {

				q2.push(vec[f][i]);
				visited2[vec[f][i]] = 1;
				temp = max(temp, weight[vec[f][i]]);
			}
		}
		ele[temp].push_back(f);
		high = min(high, temp);
	}
	// for (int i = 0; i < ele[high].size(); i++)
	// 	cout << ele[high][i] << " ";
	// cout << endl;
	if (ele[high].size() == 1)
	{
		cout << vec[ele[high][0]][0]  << " " << ele[high][0] << endl;
		cout << vec[ele[high][0]][0]  << " " << ele[high][0] << endl;
	}
	else
	{
		int t1 = ele[high][0];
		int t2 = ele[high][1];
		int i = 0;
		int x;
		while (vec[t2][i] == t1)
		{
			i++;
		}
		x = vec[t2][i];
		cout << x << " " << t2 << endl;
		cout << t1 << " " << x << endl;

	}

}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}