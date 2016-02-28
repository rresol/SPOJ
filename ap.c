#include<stdio.h>
int main()
{
	int t;
 	long long m,lt,sum,n,a,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&m);
		scanf("%lld",&lt);
		scanf("%lld",&sum);
		n = (sum)*2/(m+lt);
		a = ((m*(n-3))-lt*(2))/(n-5);
		d = (m-a)/2;
		printf("%lld\n",n);
		while(n--)
		{
			printf("%lld ",a);
			a+=d;
		}
		printf("\n");
	}
	return 0;
}
