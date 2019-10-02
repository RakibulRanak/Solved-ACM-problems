#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int r, c;
	cin >> r >> c;
	int ara[r][c];
	memset(ara, -1, sizeof(ara[0][0]) * r * c);
	
	int R;

	for (int i = 0; i < r; i++) {
		cin >> R;
		int j;
		for ( j = 0; j < R; j++)
			ara[i][j] = 1;
		if (j < c)
			ara[i][j] = 0;

	}

	int C;

	bool minus=true;

	for (int i = 0; i < c; i++) {
		cin >> C;
		int j;
		for ( j = 0; j < C; j++){

			if(ara[j][i]==1 ||ara[j][i]==-1)
				ara[j][i] = 1;
			else
				minus=false;

		}
		if (j < r){
			if(ara[j][i]==0 ||ara[j][i]==-1)
				ara[j][i] = 0;
			else
				minus=false;
		}

	}
	/*for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << ara[i][j] << " ";
		}
		cout << endl;
	}*/
	if(!minus)
	{
		cout<<0<<endl;
		return 0;
	}
	int count = 0;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if(ara[i][j]==-1)
				count++;
		}
		
	}
	if(count==0)
	{
		cout<<1<<endl;
		return 0;
	}

	//cout<<count<<endl;
	int mm=1000000007;
	int out=2;
	for(int i=1;i<count;i++)
	{
		out=(out*2)%mm;
	}
	cout<<out<<endl;




}