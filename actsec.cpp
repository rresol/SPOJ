#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
bool compare(pair<long,long>p1,pair<long,long>p2)
{
	if((p1.second)==(p2.second))
		return p1.first<p2.first;
	return p1.second<p2.second;
}
long selectMaxActivities(vector< pair<long,long> > v1)
{
	int j;
	long count =1;
	pair<long,long>  prev_task = v1[0];
	for(j=1;j<v1.size();j++)
	{
		pair<long,long> curr_task = v1[j];
		if(prev_task.second<=curr_task.first)
		{
			count++;
			prev_task=curr_task;
		}
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		long s[n],f[n];
		for(i=0;i<n;i++)
		{
			cin>>s[i]>>f[i];
		}
		vector< pair<long,long> > tasks;
		for(i=0;i<n;i++)
		{
			tasks.push_back(make_pair(s[i],f[i]));
		}
		sort(tasks.begin(),tasks.end(),compare);
		long res;
		res = selectMaxActivities(tasks);
		printf("%lld\n", res);
	}
	cin>>t;
	return 0;
}
