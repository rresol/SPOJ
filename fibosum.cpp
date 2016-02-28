#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,m,first,sum,i,k;
        scanf("%lld%lld",&n,&m);
        long long f[m];
        if(n==0)
        {
            first = 0;
            k=0;
        }
        if(n==1)
        {
            k=1;
            first =1;
        }
        
        f[0]=0;
        f[1]=1;
        for(i=2;i<=m+1;i++)
        {
            f[i] = f[i-1] + f[i-2];
            //sum+=f[i];
            if(i==n+1)
            {
                first = f[i]-1;
                k=f[i-1];
            }
        }
        //prlong longf("%d\n",first);
        //prlong longf("%d\n",sum);
        long diff = f[m+1]-1 - first+k;
        diff = diff%1000000007;
        printf("%lld\n",diff);
    }
    return 0;
}
