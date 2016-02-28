#include <ios>
#include <algorithm>
#include <vector>
using namespace std;
#include<bits/stdc++.h>
#define MAX 4000
#define pb(v) push_back(v)
#define ub(X,v) upper_bound(X.begin(),X.end(),v)
#define lb(X,v) lower_bound(X.begin(),X.end(),v)

int a[MAX][4];

int main() {
	int n, i, j, val, cnt = 0;
	vector <int> V1,V2;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			V1.pb(a[i][0]+a[j][1]);
			V2.pb(a[i][2]+a[j][3]);
        }
    }
	sort(V1.begin(), V1.end());
	sort(V2.begin(), V2.end());
    for(i=0;i<n;i++)
    {
        cnt += (ub(V2,V1[i])-lb(V2,V1[i]));
    }
	printf("%d\n", cnt);
	return 0;
}
