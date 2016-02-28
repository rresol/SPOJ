#include<bits/stdc++.h>

using namespace std;

const int MAX = 1024;
const int INF = 999999999;

int N, O, n, t, cs;
int nitro[MAX], oxi[MAX], w[MAX];
int dp[MAX][22][80], visited[MAX][22][80];

int solve(int i, int co, int cn) 
{
	if(dp[i][co][cn]!=-1){
		return dp[i][co][cn];
	}
	if(co==0&&cn==0){
		dp[i][co][cn]= 0;
	}
	else if(i==0){dp[i][co][cn]= INF;
	 }else{
		dp[i][co][cn]=min(solve(i-1,co,cn),solve(i-1,max(co-oxi[i-1],0),max(cn-nitro[i-1],0))+w[i-1]);
	}
	return dp[i][co][cn];
}

int main() 
{
	scanf("%d", &t);
	while(t--){
		
		scanf("%d %d %d", &O, &N, &n);
		for(int i=0;i<n+1;i++)
			for(int j=0;j<O+1;j++)
				for(int k=0;k<N+1;k++)
					dp[i][j][k]=-1;
	
		for(int i = 0; i < n; i++) 
            scanf("%d %d %d", &oxi[i], &nitro[i], &w[i]);
		printf("%d\n", solve(n, O, N));
	}
	return 0;
}