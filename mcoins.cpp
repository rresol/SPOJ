#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k,l,m;
	cin>>k;	
	cin>>l;
	cin>>m;
	char ans[m];
	int j=0;
	while(m--)
	{
		int n,i;
		cin>>n;
		bool a[n+1];
		a[0]=false;
		a[1]=true;
		for(i=2;i<=n;i++)
		{
			if(a[i-1]&&a[(i-k)>=0?(i-k):(i-1)]&&a[(i-l)>=0?(i-l):(i-1)])
			{
				a[i] = false;
			}
			else
			{
				a[i] = true;
			}
		}
		if(a[i-1])
		{
			ans[j]='A';
		}
		else
		{
			ans[j]='B';
		}
		j++;
	}
	ans[j]='\0';
	cout<<ans<<endl;
	return 0;
}

