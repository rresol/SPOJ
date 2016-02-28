#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
    scanf("%d",&budget);
    scanf("%d",&party);
    int val[party];
    int weight[party];
    for(i=0;i<party;i++)
    {
        scanf("%d",&val[i]);
        scanf("%d",&weight[i]);
    }
    int k[party+1][budget+1];
    for(i=0;i<=party;i++)
    {
        for(j=0;j<=budget;j++)
        {
            if(i==0 || j==0)
            {
                k[i][j]=0;
            }
            else if(weight[i-1]<=budget)
            {
                k[i][j] = max(val[i-1] + k[i-1][j-weight[i-1]],k[i-1][w]);
            }
            else
            {
                k[i][w] =k[i-1][w];
            }
        }
    }
    return k[n][w];
}
