#include <bits/stdc++.h>
using namespace std;
int gcdExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}

int main()
{
    int x, y,g;
    int a,b;
    while(cin>>a)
    {
        cin>>b;
        if(a==b)
        {
            x=0;
            y=1;
            g=a;
        }
        else
            g = gcdExtended(a, b, &x, &y);
        cout<<x<<" "<<y<<" "<<g<<endl;
    }

    return 0;
}

