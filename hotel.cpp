#include <cstdio>
long long n,m;
long long a[300001];
inline int gint()
{
    int n = 0;
    int sign=1;
    register char c=0;
    while(c<33)
        c=getchar_unlocked();
    if (c=='-')
    {
        sign=-1;
        c=getchar_unlocked();
    }
    while(c>='0'&&c<='9')
    {
        n=(n<<3)+(n<<1)+(c-'0');
        c=getchar_unlocked();
    }
return n*sign;
}
//using namespace std;
int main()
{
    long long i;

    n=gint();
    m=gint();

    for(i=0;i<n;i++)
    {
        a[i]=gint();
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

