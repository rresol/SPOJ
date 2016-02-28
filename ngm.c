#include<stdio.h>

int main()
{
	long a;
	scanf("%ld",&a);
	
	int first;
    
	if(a)
	{
        if(a%10==0)
        {
            printf("2\n");
        }
        else
        {
            first = a%10;
            printf("1\n");
            printf("%d\n",first);
        }
	}
    else
    {
	        printf("2\n");
        
    }
return 0;
	
}
