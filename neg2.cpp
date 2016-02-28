#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r,i;
    string s= "";
    //int a[100000];

    i=0;
    scanf("%lld",&n);
    if(n==0)
    {
        printf("0\n");
        return 0;
    }
    while(n)
    {
        r = n%(-2);
        n= n/(-2);
        if(r<0)
        {
            r = r + 2;
            n = n+1;
        }
        s = char(r + '0') +s;
    }
    cout<<s<<endl;

    return 0;
}

