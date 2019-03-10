#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=1; i<=t; i++)
    {
        char ara1[100];
        char ara2[100];
        gets(ara1);
        gets(ara2);
        if(strcmp(ara1,ara2)==0)
            printf("Case %d: Yes\n",i);
        else if(strlen(ara1)==strlen(ara2))
            printf("Case %d: Wrong Answer\n",i);
        else
        {
            char ara3[100];
            int x=0;
            for(int j=0; j<strlen(ara1); j++)
            {
                if(ara1[j]!=' ')
                {
                    ara3[x]=ara1[j];
                    x++;
                }
            }
            ara3[x]='\0';
            if(strcmp(ara2,ara3)==0)
                printf("Case %d: Output Format Error\n",i);
            else
                printf("Case %d: Wrong Answer\n",i);
        }

    }
    return 0;
}
