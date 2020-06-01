#include<stdio.h>
int main()
{
    int k,l,m,n,d,i,count=0,ans;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    int ara[d];
    for(i=0;i<d;i++){
        ara[i]=i+1;
    }
    for(i=0;i<d;i++){
        if(ara[i]%k!=0 &&ara[i]%l!=0 &&ara[i]%m!=0 &&ara[i]%n!=0){
            count++;
        }
    }
  ans=d-count;
  printf("%d\n",ans);
  return 0;
}

