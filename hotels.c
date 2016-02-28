#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
    long long n,m,max_ending_here,max_so_far,i,flag,j ;
    scanf("%lld",&n);
    scanf("%lld",&m);
    long long a[n],sum1[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
       for(j=i;j<n;j++)
        {
            if(sum>m)
            {
                sum = sum-a[j-1];
                break;
            }
            sum+=a[j];
        }
        sum1[i]= sum;
    }
    sort(sum,sum+n);
    printf("%lld",sum[n-1]);
    return 0;
}
