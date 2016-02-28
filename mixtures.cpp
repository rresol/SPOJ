#include<bits/stdc++.h>
long long color[1000][1000];
long  long MatrixChainOrder(long long n)
{

    long long i,j,k,q,l;
    long long m[n][n];
    for(i=0;i<n;i++)
    {
        m[i][i]=0;
    }
    for(l=1;l<n;l++)
    {
        for(i=0;i<n-l;i++)
        {
            //j= i+l-1;
            m[i][i+l]=LONG_LONG_MAX;
            for(k=i;k<i+l;k++)
            {
                q= m[i][k]+m[k+1][i+l]+color[i][k]*color[k+1][i+l];
                if(q<m[i][i+l])
                {
                    m[i][i+l]= q;
                    color[i][i+l]=(color[i][k]+color[k+1][i+l])%100;
                }
            }
        }
    }
    return m[0][n-1];
}
int main()
{
    long long n,i;
    while(scanf("%lld",&n)>0)
    {
    long long c[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        color[i][i]= c[i];
    }
    long long a ;
    a= MatrixChainOrder(n);
    printf("%lld\n",a);
    }
    return 0;
}
