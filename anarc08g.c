#include<stdio.h>
int main()
{
    int t,i,j,k,n,all,sum,out,inc;
    t=1;
    scanf("%d",&n);
    while(n)
    {
        all =0;
        
        int a[n][n];
        
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                all += a[i][j];
                
            }
                
            
        }
        sum =0;
        for(i=0;i<n;i++)
        {
            out = 0;
            inc = 0;
            for(j=0;j<n;j++)
            {
                out+=a[i][j];
                inc+=a[j][i];
            }
            if(out-inc>=0)
            {
                sum = sum+ out-inc;
            }
        }
        printf("%d. %d %d\n",t,all,sum);
        t++;
        scanf("%d",&n);
    }
    return 0;
}
