#include<stdio.h>
#include<math.h>
int main()
{
	int i,flag =0;
	long long int a ;
	scanf("%lld",&a);
	for(i=0;i<53;i++)
	{
		if(pow(2,i)==a)
		{
			flag =1;
			break;
		}
	}
	if (flag==1)
	{
		printf("TAK\n");
	}
	else
	{
		printf("NIE");
	}
	return 0;
}
