#include<stdio.h>
#include<math.h>
double expo(double x, long long n)
{
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else {
        if (n % 2 == 0) {
            return expo(x, n / 2) * expo(x, n / 2);
        } else {
            return x * expo(x, n / 2) * expo(x, n / 2);
        }
    }
}
int main()
{
    long long m,n,run;
    int t;
    double p,q,s,sum;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld",&m);
        q = ((1+sqrt(5))/2.0);
        p = expo(q,n+1);
        p = p * (1.0/sqrt(5))
;        s = expo(q,m-n);
        sum = ((1-s)/(1-q))*p + 0.5;
        run = sum;
        printf("%lld\n",run);
    }
}
