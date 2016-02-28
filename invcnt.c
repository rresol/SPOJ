#include<stdio.h>

int main()
{
    long long t,n,j,i,count;
    scanf("%lld",&t);y

    while(t--)
    {
        count =0;
        scanf("%lld",&n);
        long long array[n];
       
        
        for(i=0;i<n;i++)
        {   

            scanf("%lld",&array[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(array[j]<array[i])
                {
                    count++;
                }
            }
        }
        printf("%lld\n",count);
        
        
    }
    return 0;   
}
