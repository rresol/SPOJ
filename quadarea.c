#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double a,b,c,d,s=0,ar=1;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        s = (a+b+c+d)/2.0;
        ar = sqrt((s-a)*(s-b)*(s-c)*(s-d)) ;
        printf("%0.2lf\n",ar);
    }
    return 0;
}

