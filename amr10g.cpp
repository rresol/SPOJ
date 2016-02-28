#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,j,k,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        long long a[n],small;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        i=0;
        j=k-1;
        small = 1000000000;
        if(k==n)
        {
            small = a[k-1]-a[0];
        }
        else
        {
        while(j<n)
        {
            if(small > a[j]-a[i])
            {
                small = a[j]-a[i];
            }
            i++;
            j++;
        }
        }
        printf("%lld\n",small);
    }
    return 0;
}

