#include<stdio.h>
int find(int  x,int  A[],int n)
{
    int low =0 , high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(x == A[mid]) return mid;
        else if (x<A[mid])
        {
            high = mid-1;
        }
        else
        {
            low  = mid +1;
        }
    }
    return -1;

}

int main()
{
    int n1,n2,i,j,k,sum1,sum2,sum,index;
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n2];
    scanf("%d",&n2);
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    k=0;
    sum1=0;
    sum2=0;
    while(i<=n1)
    {
        index=find(b,a[i],n2);
        if(index==-1)
        {
            sum1+=a[i];
        }
        else
        {
            for(j=k;j<=index;j++)
            {
                sum2+=b[i];
            }
            sum1+=a[i];
            if(sum1>sum2)
            {
                sum+=sum1;
            }
            else
            {
                sum+=sum2;
            }
            sum1=0;
            sum2=0;
            k = index+1;
        }
        i++;
    }
    printf("%d\n",sum);
    return 0;
}

