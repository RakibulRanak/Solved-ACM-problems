
#include<stdio.h>
int main()
{
    int i,j,n,min,count=0;
    scanf("%d",&n);
    int ara1[n],ara2[n],temp;
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara1[i]);
    }
    min=ara1[0];
    for(i=1; i<n; i++)
    {
        if(ara1[i]<min)
        {
            min=ara1[i];
        }
    }
    j=0;
    for(i=0; i<n; i++)
    {
        if(ara1[i]==min)
        {
            ara2[j]=i;
            j++;
            count++;
        }
    }

    int fin[count];
    for(i=0; i<count-1; i++)
    {
        fin[i]=ara2[i+1]-ara2[i];

    }
    min=fin[0];
    for(i=1; i<count-1; i++)
    {
        if(fin[i]<min)
        {
            min=fin[i];
        }
    }

    printf("%d\n",min);
    return 0;

}
