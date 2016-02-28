#include<stdio.h>
#include<bits/stdc++.h>
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
		mid =  ((high+low)/2);
        //printf("%lld\n",mid);
        long long pos;
            pos= folder[0];
        for(i=1;i<t;i++)
		{

			if((folder[i]-pos)>mid)
			{
				required++;
                //if(required==n)
                //{
                  //  break;
                //}
				pos = folder[i];
			}
		}
		if(required>=n)
		{
			low= mid+1;
		}
		else
		{

			high= mid;
		}
	}
	printf("%lld\n",low);
    }
    return 0;
}
