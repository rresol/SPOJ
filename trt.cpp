#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int N;
int v[2001];
long  cache[2001][2001];

long profit(int be , int en)
{
    if(be>en)
    {
        return 0;
    }
    if(cache[be][en]!=-1)
    {
        return cache[be][en];
    }
    int age = N - (en-be+1) +1;
    return cache[be][en] = max(
    profit(be+1, en) + age * v[be],
    profit(be, en-1) + age * v[en]);
}


int main()
{
    int i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&v[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cache[i][j]=-1;
        }
    }
    long ans;
    ans = profit(0,N-1);
    printf("%ld\n",ans);
    return 0;
}





