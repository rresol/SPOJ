#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,k,n,b,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[(n*n)][2],s=0;
		for(i=0;i<n;i++)
		{
			//cout<<"hi";
			for(j=0;j<n;j++)
			{
				//cout<<"hi";
				cin>>b;
				a[b-1][0]=i;
				a[b-1][1]=j;

			}
			//cout<<"HI";
		}
		for(i=1;i<(n*n);i++)
		{

				s += fabs(a[i][0]-a[i-1][0]) + fabs(a[i][1]-a[i-1][1]);


		}
		cout<<s<<endl;
	}
	return 0;
}
