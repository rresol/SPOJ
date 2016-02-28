#include <stdio.h>
long long n,m;
long long a[300001];

//using namespace std;
int main()
{
    long long i;

    scanf("%lld",&n);
    scanf("%lld",&m);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long p,q,sum=0,max_sum =-1;
    p=0;
    for(i=0;i<n;i++)
    {
        if(sum+a[i]<=m)
        {
            sum+=a[i];
            if(sum>max_sum)
            {
                max_sum=sum;
            }
        }
        else
        {
            while(p<=i&&sum+a[i]>m)
            {
                sum-=a[p];
                p++;
            }
            sum+=a[i];
            if(sum>max_sum)
            {
                max_sum = sum;
            }
        }
    }
    printf("%lld\n",max_sum);
    return 0;
}

