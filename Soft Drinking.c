#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,temp,ans;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int tbd,tbl,tbs;
    tbd=(k*l)/nl;
    tbl=c*d;
    tbs=p/np;
    if(tbd<=tbl&&tbd<=tbs)
        temp=tbd;
    else if(tbl<=tbd&&tbl<=tbs)
        temp=tbl;
    else
        temp=tbs;
    ans=temp/n;
    printf("%d\n",ans);
    return 0;
}
