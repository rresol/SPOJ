#include<stdio.h>

int main()
{
    int t;
    long long r;
    double s;
    scanf("%d",&t);
    int i=1;
    while(i<=t)
    {
        scanf("%lld",&r);
        s= ((4*r*r) - .25) + .50;
        printf("Case %d: %.2f\n",i,s);
        i++;
    }
    return 0;
}
