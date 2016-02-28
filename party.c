#include<stdio.h>
int max(int x , int y)
{
    return x>y?x:y;
}
int main()
{
    int t,n,w,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&w);
        int val[n+1],wt[n+1];
        for(i=0; i<n; i++)
        {
            scanf("%d",&val[i]);
            scanf("%d",&wt[i]);
        }
        int k[n+1];
        for(i=0; i<=n; i++)
        {
            for(j=0; j<=w; j++)
            {
                if((i==0)||(j==0))
                {
                    k[i][j]=0;
                }
                else if(wt[i-1]<=j  )
                {
                    k[i][j] = max(val[i-1] + k[i-1][j-wt[i-1]],k[i-1][j]);
                }
                else
                {
                    k[i][j] = k[i-1][j];
                }
            }
        }
        int best = k[n][w];
        for(i=w; i; i--)
        {
            if(k[n][i]<best)
            {
                break;
            }
        }
        printf("%d %d",i+1,k[n][w]);
    }
    return 0;
}
