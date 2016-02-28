#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int N;
int v[2001];
long  cache[2001][2001];

long profit(int beg , int end)
{
    if(beg>end)
    {
        return 0;
    }
    if(cache[beg][end]!=-1)
    {
        return cache[beg][end];
    }
    int age = N - (end-beg+1) +1;
    return cache[beg][end] = max(age*v[beg]+profit(beg+1,end),age*v[end]+pofit(beg,end-1));
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
    return 0;
}





