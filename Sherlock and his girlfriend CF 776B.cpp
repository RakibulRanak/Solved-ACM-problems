#include<bits/stdc++.h>
using namespace std;
bool prime[50005];

void SieveOfEratosthenes(int n)
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
//    for (int p=2; p<=n; p++)
//       if (prime[p])
//          cout << p << "ygy ";

}
int main()
{
    int n;
    int x=0;
    cin>>n;
    n++;
    SieveOfEratosthenes(sqrt(n)+1);
    if(n<=3)
        cout<<1<<endl;
    else
        cout<<2<<endl;
    for(int i=2;i<=n;i++)
    {
        x=0;
        for(int j=2;j*j<=i+1;j++)
        {
            if(i%j==0 &&prime[j]){
                cout<<2;
                x=1;
                break;
            }
        }
        if(x==0)
            cout<<1;
        if(i!=n)
            cout<<" ";
        else
            cout<<endl;

    }
    return 0;

}

