#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x;
    scanf("%d %d %d",&n,&a,&b);
    x=n-a;
    if((x-1)>b)
    {
        while((x-1)!=b)
        {
            x--;

        }
    }
    printf("%d",x);
    return 0;
}
