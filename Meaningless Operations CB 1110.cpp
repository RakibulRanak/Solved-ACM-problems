#include<bits/stdc++.h>
using namespace std;
int x[]={0,0,1,1,5,1,21,1,85,73,341,89,1365,1,5461,4681,21845,1,87381,1,349525,299593,1398101,178481,5592405,1082401};
int main()
{
    int q;
    cin>>q;
    int temp;
    for(int i=0;i<q;i++)
    {
        cin>>temp;
        int n=log2(temp)+1;
        //int n=ceil(x);
       // cout<<n<<endl;
       if(pow(2,n)-1==temp)
        cout<<x[n]<<endl;
       else
        cout<<(int)pow(2,n)-1<<endl;

    }
    return 0;


}
