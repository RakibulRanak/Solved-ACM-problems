#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int a[300005],b[300005];
vector<int>vt;
int main()
{
	int p,ttl=0;
	cin >> p;
	a[0]=0;
	cin >> a[1];
	for (int i = 2; i <= p; ++i)
	{
		/* code */
		cin >> a[i];
	}
	sort(a,a+p+1);
	for (int i = 1; i <= p; ++i)
	{
		b[i]=a[i]-a[i-1];
	}
	int c=0;
	for (int i = 1; i <= p; ++i)
	{
		/* code */
		//cout << a[i] << " " << a[i-1] << endl;
		c +=b[i];
		vt.push_back(c);

		//cout << b[i] << endl;
	}
	int ans=0;
	//cout << vt.size() << endl;
	for (int i = 0; i<vt.size(); ++i)
	{
		 ans=vt[i];
		// //cout << ans << endl;
		 int j=upper_bound(vt.begin(),vt.end(),ans+5) - vt.begin();
		// cout << j-i << endl;
		 ttl=max(j-i,ttl);
	}
	cout << ttl << endl;
}