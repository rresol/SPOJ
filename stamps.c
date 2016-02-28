#include<stdio.h>
int main()
{
	long xtra,temp,sum;
	int t,flag,n,i,j,max_id,cou=0;
	scanf("%d",&t);
	while(cou!=t)
	{
		flag = 0;
		scanf("%ld",&xtra);
		scanf("%d",&n);
		long a[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			max_id = i;
			for(j=i+1;j<n;j++)
			{
				if(a[j]>a[max_id])
				{
					max_id = j;
				}
			}
			temp =a[i];
			a[i]= a[max_id];
			a[max_id]=temp;
		}
		sum =0;
		i=0;
		while(i<n)
		{
			sum += a[i];
			
			if(sum>=xtra)
			{
				flag =1 ;
				break;
			}
			i++;
		}
		if(flag==1)
		{
			printf("Scenario #%d:\n",(cou+1));
			printf("%d\n",(i+1));
			printf("\n");
		}
		else
		{
			printf("Scenario #%d:\n",(cou+1));
			printf("impossible\n");
			printf("\n");
		}
		cou++;
	}
	return 0;
}
