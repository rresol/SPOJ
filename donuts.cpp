#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,i,cnt=0,r;
        cin>>n>>m;
        long long int a[m];
        for(i=0; i<m; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                cnt++;
            }
        }
        r = m-cnt;
        r = r-1;
        if(cnt)
        {
            if(r!=1)
            {    
            cnt = cnt -1;
            r ++;
            cnt = cnt/2;
            cnt = r+cnt;
            }
            else
            {
                cnt = (cnt+1)/2;
            }
        }
        else
        {
            cnt = r;
        }
        printf("%lld\n",cnt );

    }
}
