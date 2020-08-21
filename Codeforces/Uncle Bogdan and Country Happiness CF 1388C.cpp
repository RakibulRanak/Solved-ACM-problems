#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve(ll cs) {
	int n, m;
	cin >> n >> m;
	bool ans = true;
	int people[n + 1], happy[n + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> people[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> happy[i];
	}

	vector<vector<int>>vec(n + 1);
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
	vector<vector<int>>level(n + 1);
	level[1].push_back(1);
	map<int, int>lc;
	int maxlevel = 1;
	map<int, int>parent;
	parent[1] = 0;
	lc[1] = 1;
	while (!q.empty()) {

		int f = q.front();
		q.pop();
		for (int i = 0; i < vec[f].size(); i++) {
			if (!visited[vec[f][i]]) {

				q.push(vec[f][i]);
				visited[vec[f][i]] = 1;
				//cout << vec[f][i] << endl;

				parent[vec[f][i]] = f;
				lc[vec[f][i]] = lc[parent[vec[f][i]]] + 1;
				maxlevel = max(maxlevel, lc[vec[f][i]]);
				level[lc[vec[f][i]]].push_back(vec[f][i]);
			}
		}
	}

	map<int, int>tcross;
	//cout << maxlevel << endl;
	for (int i = maxlevel; i >= 1; i--)
	{
		for (int j = 0; j < level[i].size(); j++)
		{
			tcross[level[i][j]] += people[level[i][j]];
			tcross[parent[level[i][j]]] += tcross[level[i][j]] ;

		}
	}
	// for (int i = 1; i <= n; i++)
	// {
	// 	cout << tcross[i] << endl;
	// }
	// cout << endl;
	q.push(1);
	memset(visited, 0, sizeof(visited));
	visited[1] = 1;

	while (!q.empty()) {

		int f = q.front();
		q.pop();

		int hapara1 = 0, hapara2 = 0;
		hapara1 = happy[f] + ((tcross[f] - happy[f]) / 2);


		for (int i = 0; i < vec[f].size(); i++) {
			if (!visited[vec[f][i]]) {
				q.push(vec[f][i]);
				visited[vec[f][i]] = 1;

				hapara2 += happy[vec[f][i]] + ((tcross[vec[f][i]] - happy[vec[f][i]]) / 2);

				//cout << hapara2 << " ";
				if (tcross[vec[f][i]] < abs(happy[vec[f][i]]) || (tcross[vec[f][i]] + happy[vec[f][i]]) % 2 == 1)
				{
					ans = false;
					//cout << "here1" << endl;
					break;
				}
			}
		}
		//cout << endl << f << " " << hapara1 << " " << hapara2 << endl;
		if (hapara2 > hapara1)
		{
			ans = false;
			break;
		}
	}

	if (tcross[1] < abs(happy[1]) || (tcross[1] + happy[1]) % 2 == 1 || !ans)
	{
		ans = false;
	}

	if (ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	FastIO; ll t; cin >> t;

	for (ll i = 0; i < t; i++) solve(i + 1);

	return 0;
}