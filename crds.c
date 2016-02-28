#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long n,s,i;
    while(t--)
    {
        scanf("%lld",&n);
       
        s= (n*(3*n+1))/2;
        s = s%1000007;
        printf("%lld\n",s);
    }
    return 0;
}
