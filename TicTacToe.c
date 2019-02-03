#include<stdio.h>
int main()
{
    int i,j;
    char ara[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ara[i][j]='x';
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%c %c %c\n",ara[i][j]);
        }
    }

    printf("Input your choice:(r,c)\n");
    scanf("%d %d",&ara[i][j]);

}
