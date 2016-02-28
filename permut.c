#include<stdio.h>
#include<string.h>
char a[200001];
int main()
{
	long n;
	int i,l,flag,t;
	while(1)
	{
		scanf("%ld",&n);
		if(n)
		{
		flag=0;
		
		scanf("\n");
		gets(a);
		l = strlen(a);
		i=0;
		while(i<l)
		{
			
			t = a[i]-'0';
			if ((a[2*t-2]-'0')!= ((i/2)+1))
			{
				flag=1;
				break;
			}
			i+=2;
		}
		if (flag!=1)
		{
			printf("ambiguous \n");
		}
		else
		{
			printf("not ambiguous \n");
		}
		}
		else
		{
			break;
		}
	}
	return 0;
}
