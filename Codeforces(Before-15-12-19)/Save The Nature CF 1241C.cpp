#include <bits/stdc++.h>
using namespace std;
//great solution,liked it
 
int main() {
	int q,n,x,a,y,b;
	long long k;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>q;
	while (q--){
	    cin>>n;
	    vector<int> A(n);
	    for (int i=0;i<n;i++){
	        cin>>A[i];
	        A[i]=A[i]/100;
	    }
	    cin>>x>>a>>y>>b>>k;
	    sort(A.begin(),A.end(),greater<int>());
	    if(x<y){
	        swap(x,y);
	        swap(a,b);
	    }
	    x-=y;
		
		int i=1,i1,i2,i3;
		long long j =0;
		for(i1=i2=i3=0;j<k&&i<=n;i++){
			if(i%a == 0 || i%b == 0)
				j += A[i1++] * y;
			if(i%a == 0)
				j += A[i2++] * x;
			if(i%a == 0 && i%b == 0)
				j += A[i3++] * y;
		}
		cout << (j>=k?i-1:-1) << endl;
	}
	return 0;
}