#include<stdio.h>
#include<math.h>
int main()
{
    long long t,i,j;
    long long n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        i = sqrt(n);
        j  =0;
        while(1)
        {
            if(j*j>n)
            {
                printf("No\n");
                break;
            }
            if(i*i + j*j == n)
            {
                printf("Yes\n");
                break;
            }
            if(i*i + j*j <=n)
            {
                j++;
            }
            else
            {
                i--;

            }
        }
    }
}


