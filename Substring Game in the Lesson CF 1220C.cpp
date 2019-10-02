#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >>s;
	char low='z';
	for(int i=0;i<s.size();i++){

		if(low<s[i])
			cout <<"Ann\n";

		else
			cout <<"Mike\n";

		low=min(low,s[i]);
	}
	return 0;
}