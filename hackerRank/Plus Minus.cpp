#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double temp,pos=0,neg=0,zero=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==0)
            zero++;
        else if(temp<0)
            neg++;
        else if(temp>0)
            pos++;
    }
    cout.precision(6);
    cout<<fixed<<pos/n<<endl<<neg/n<<endl<<zero/n<<endl;
    return 0;
}
