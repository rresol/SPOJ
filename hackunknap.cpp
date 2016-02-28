#include<bits/stdc++.h>
using namespace std;
vector <int>c;
int a[3000];
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		c.clear();
		memset(a,0,sizeof(a));
        int n,k;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			int d;
			cin>>d;
			c.push_back(d);
		}
		sort(c.begin(),c.end());
		for(int g=1;g<=b;g++)
		{
			for(i=0;i<c.size();i++)
			{
				if(c[y]>g)
				{
					continue;
				}
				a[g] = max(a[g],c[y]+a[g-c[y]]);
			}
		}
		cout<<a[b]<<endl;
	}
	return 0;
}
/*#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[3000];
int b[3000][3000];
int max(int a, int b)
{
    return a>b?a:b;
}
int knapsack(int n, int k)
{
    if(b[n][k]!=-1)
    {
        return b[n][k];
    }
	if(n<0||k<0)
	{
        b[n][k]=0;
		return b[n][k];
	}
	if(n==0||k==0)
	{
		b[n][k]=0;
		return b[n][k];
	}
	if(a[n-1]>k)
	{
        b[n][k]= knapsack(n-1,k);
        return b[n][k];
	}
	b[n][k]= max(a[n-1]+knapsack(n,k-a[n-1]),knapsack(n-1,k));
	return b[n][k];
}
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
        int n,k,i,j;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<=n;i++)
		{
            for(j=0;j<=k;j++)
            {
                if(i==0||j==0)
                {
                    b[i][j]=0;
                }
            }
		}
		int res = knapsack(n,k);
		cout<<res<<endl;
	}
	return 0;
}*/
