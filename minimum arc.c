#include<stdio.h>
#include<math.h>
int main()
{
    double ax,ay,r1,r,ang,bx,by,ox,oy,s;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        r1=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        r=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        ang=acos((r*r+r*r-r1*r1)/(2*r*r));
        s=r*ang;
        printf("Case %d: %lf\n",i,s);
    }
    return 0;
}
