#include <iostream>
using namespace std;
#define mod 1000000007


long long int modfun(long long int a,long long int b)
{
     long long int result = 1;

    while (b > 0)
       {
           if (b & 1)
           {
               a=a%mod;
               result = (result * a)%mod;
               result=result%mod;
           }
        b=b>>1;
        a=a%mod;
        a = (a*a)%mod;
        a=a%mod;
       }
    return result;
}
int main()
{
    int t;
    //cin>>t;
    unsigned long long int a,b;
    cin>>a;
    a=a*a;
    b=10+a;

    cout<<b%a;
    getchar();
    while(t--)
        {
           long long int a,b;
           cin>>a>>b;
           if(a==0)
            cout<<0<<"\n";
           else if(b==0)
            cout<<1<<"\n";
           else if(b==1)
            cout<<a%mod<<"\n";
           else
           {
               cout<<(modfun(a,b))%mod<<"\n";
           }

        }
    return 0;
}
