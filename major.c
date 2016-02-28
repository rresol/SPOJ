#include<stdio.h>
int main()
{
    int t,flag,n,i,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            count =0;
            while(a[i]==a[i+1])
            {
                count++;
                if(count>n/2)
                {
                    printf("YES %d\n",a[i]);
                    flag =1;
                    break;
                }
                i++;
            }
            if(flag==1)
            {
                break;
            }
        }
        if(!(count>n/2))
        {
            printf("NO\n");
        }
    }
    return 0;
}
