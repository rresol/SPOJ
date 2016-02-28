#include<stdio.h>
int main()
{
    int t,n,i,m,j,min,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        int b[m];
        for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
        if(n>m)
        {
            int c[n];
            for(i=0;i<n;i++)
            {
                min=100000;
                for(j=0;j<m;j++)
                {
                    d = fabs(a[i]-b[j]);
                    if(d<min)
                    {
                        min=d;
                    }
                    if(d==0)
                    {
                        min=0;
                        break;
                    }
                }
                c[i]= min;
            }
        }
        else
        {
            int c[n];
            for(i=0;i<m;i++)
            {
                min=100000;
                for(j=0;j<n;j++)
                {
                    d = fabs(a[i]-b[j]);
                    if(d<min)
                    {
                        min=d;
                    }
                    if(d==0)
                    {
                        min=0;
                        break;
                    }
                }
                c[i]= min;
            }
        }
        sort(c,c+(n>m?n:m));
        printf("%d\n",c[0]);
    }
}
