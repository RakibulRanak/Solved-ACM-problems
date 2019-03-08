#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,temp1=0,temp2=0;
    char c;
    cin>>h1>>c>>m1>>h2>>c>>m2;
   if((h1+h2)%2==1)
        temp2=30;
    temp1=(h1+h2)/2;
    if(m2-m1>=0)
        temp2+=(m2+m1)/2;
    else
        temp2=((60+m2-m1)/2)+m1;
    if(temp2>59){
        temp2=temp2-60;
        temp1++;
    }
    if(temp1<10)
        cout<<0<<temp1<<":";
    else
        cout<<temp1<<":";
    if(temp2<10)
        cout<<0<<temp2<<endl;
    else
        cout<<temp2<<endl;
    return 0;

}
