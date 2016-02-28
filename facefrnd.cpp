#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,m,count;

        count =0;
        int frnd[100000];
        scanf("%d",&n);
        j =0;
        i = 0;
        t=n;
        while(n--)
        {
            scanf("%d",&frnd[i]);
            i++;
            scanf("%d",&m);
            while(m--)
            {
                scanf("%d",&frnd[i]);
                i++;
            }
        }
        printf("size: %d",i);
        sort(frnd,frnd+i);
        printf("size: %d",i);
        for(j=0;j<i;j++)
        {
            printf("%d     ",frnd[j]);
        }
        for(j=0;j<i;j++)
        {
            count++;
            while(frnd[j]==frnd[j+1]&&j<=i)
            {
                j++;
            }
        }
        printf("%d\n",count-t);

    return 0;
}

