#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int sum=0,temp;
    char point='a';
    for(int i=0;i<a.size();i++)
    {
        temp=abs(a[i]-point);
        if(temp>13)
            temp=25-temp+1;
        //cout<<temp<<" ";
        sum=sum+temp;
        point=a[i];

    }
    cout<<sum<<endl;
    return 0;
}
