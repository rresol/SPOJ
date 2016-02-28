#include<stdio.h>
int a[100005];
main()
{
	int n,flag,t,i;
	while(1)
	{
		flag=0;
		scanf("%d",&n);
		if(n)
		{	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		i=0;
		while(i<n)
		{
			t= a[i];
			if((a[t-1])!= i+1)
			{
				flag=1;
				break;
			}
			i++;
		}
		if(flag==1)
		{
			printf("not ambiguous \n");
		}
		else
		{
			printf("ambiguous \n");
		}
		}
		else
		{
			return 0;
		}	
	}
	
}
