#include<stdio.h>

int main()
{
	int t,i,j,flag,n1,n2,large1,large2;
	scanf("%d",&t);	
	while(t--)
	{
		flag=0;
		scanf("%d",&n1);	
		scanf("%d",&n2);
		int a[n1] ,b[n2];
		for(i=0;i<n1;i++)
		{
			scanf("%d",&a[i]);
		}
		for(j=0;j<n2;j++)
		{
			scanf("%d",&b[j]);
		}
		large1 = a[0];
		for(i=1;i<n1;i++)
		{
			if(a[i]>large1)
			{
				large1 =a[i];
			}
		}
		large2 = b[0];		
		for(i=1;i<n2;i++)
		{
			if(b[i]>large2)
			{
				large2 =b[i];
			}
		}		
		
		if(large1>=large2)
		{
			printf("Godzilla\n");
		}
		else
		{
			printf("MechaGodzilla\n");
		}
		
		
	}
	return 0;
}
