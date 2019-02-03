#include<stdio.h>
int main ()
{
    int i,j,k;
    scanf("%d",&i);
    int ara[3*i];
    for(j=0;j<3*i;j=j+3){
        scanf("%d %d %d",&ara[j],&ara[j+1],&ara[j+2]);
    }

    for(j=0,k=1;j<3*i,k<=i;j=j+3,k++){
            if(ara[j+1]>ara[j]&&ara[j+1]<ara[j+2]){
                printf("Case %d: %d\n",k,ara[j+1]);
            }
            else if(ara[j+1]<ara[j]&&ara[j+1]>ara[j+2]){
                printf("Case %d: %d\n",k,ara[j+1]);
            }
            else if(ara[j]>ara[j+1]&&ara[j]<ara[j+2]){
                printf("Case %d: %d\n",k,ara[j]);
            }
            else if(ara[j]<ara[j+1]&&ara[j]>ara[j+2]){
                printf("Case %d: %d\n",k,ara[j]);
            }
            else if(ara[j+2]>ara[j+1]&&ara[j+2]<ara[j]){
                printf("Case %d: %d\n",k,ara[j+2]);
            }
            else if(ara[j+2]<ara[j+1]&&ara[j+2]>ara[j]){
                printf("Case %d: %d\n",k,ara[j+2]);
            }




}



    return 0;
}
