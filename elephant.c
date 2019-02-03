#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d/n",&a);
    if(a>4){
        b=a/5;
        c=a%5;
    }
    else if(a>3){
        b=a/4;
        c=a%4;
    }
    else if(a>2){
        b=a/3;
        c=a%3;
    }
    else if(a>1){
        b=a/2;
        c=a%2;
    }
    else {
        b=1;
        c=0;
    }
    if(c>0){
        c=1;
    }
    printf("%d",b+c);



return 0;
}













