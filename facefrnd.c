#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,m,count;
    scanf("%d",&t);
    while(t--)
    {
        count =0;
        int frnd[100000];
        scanf("%d",&n);
        j =0;
        i = 0;
        while(n--)
        {
            scanf("%d",&frnd[i]);
            i++;
            scanf("%d",&m);
            while(m--)
            {
                scanf("%d",&frnd[i])
                i++;
            }
        }
        sort(frnd,frnd+i);
        for(j=0;i<i;j++)
        {
            count++;
            while(frnd[j]==frnd[j+1]&&j<=i)
            {
                j++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
        
