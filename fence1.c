#include<stdio.h>
int main()
{
	float pi = 3.1415926;
	float l,r,area;
	while(1)
	{
		scanf("%f",&l);
		if(!l)
		{
			break;
		}
		r = l/pi;
		area = (pi*r*r)/2;
		
		printf("%.2f\n",area);
	}
	return 0;
}
