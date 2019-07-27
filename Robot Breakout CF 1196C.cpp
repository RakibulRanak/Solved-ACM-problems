#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,bame,upore,dane,niche,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int lowx=-100000,highx=100000,lowy=-100000,highy=100000;
        while(n--)
        {
            scanf("%d %d %d %d %d %d",&x,&y,&bame,&upore,&dane,&niche);
            if(bame==0 &lowx<x)
                   lowx=x;
            if(dane==0 &&highx>x)
                   highx=x;
            if(upore==0 && highy>y)
                   highy=y;
            if(niche==0 &&lowy<y)
                   lowy=y;

        }
        if(lowx<=highx && lowy<=highy)
            printf("%d %d %d\n",1,lowx,lowy);

        else
            printf("0 \n");

    }
    return 0;
}

