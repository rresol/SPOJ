#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;



int main()
{
    
	long n,t,i,required=1,test;
    long long sum , high,low ,mid;
    scanf("%ld",&test);
    while(test--)
    {	    
    scanf("%ld",&t);
	scanf("%ld",&n);
	long long folder[t];
	for(i=0;i<t;i++)
	{
		scanf("%lld",&folder[i]);
	}
		sum =0;
    sort(folder,folder+t);
	for(i=0;i<t;i++)
	{
        
		sum += folder[i];
	}
   
	low= folder[0];
	high = folder[t-1];
	
	while(low<high)
	{
        //printf("low: %lld High: %lld mid: ",low,high);
        sum =0;
        required = 1;   
		mid = low + ((high-low)/2);
        //printf("%lld\n",mid);		
        for(i=1;i<t;i++)
		{   
			sum+= folder[i]-folder[i-1];
			if(sum>mid)
			{
				required++;
				sum = folder[i]-folder[i-1];
			}
		}
		if(required==n)
		{
			low = mid;
		}
		else
		{
			high = mid+1;
		}
	}
	printf("%lld\n",low);
    }
}
