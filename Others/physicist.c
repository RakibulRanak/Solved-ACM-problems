#include<stdio.h>
int main()
{
    int i,j,a,o=0;
    scanf("%d",&a);
    int ara[a][3];
    int num[a];
    num[0]=0;
    for(i=0; i<a; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&ara[i][j]);

        }
        num[i+1]=0;
    }
    i=0;
    for(j=0; j<a; j++)
    {
        num[i]=num[i]+ara[j][i];
        num[i+1]=num[i+1]+ara[j][i+1];
        num[i+2]=num[i+2]+ara[j][i+2];

    }
    printf("(%d) (%d) (%d)",num[0],num[1],num[2]);

    for(i=0;i<3;i++){
        if(num[i]!=0){
            printf("NO\n");
            o=1;
            break;
        }
   }
    if(o==0)
        printf("YES\n");
    return 0;
}
