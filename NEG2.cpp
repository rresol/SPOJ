#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
    int n,i=0;
    scanf("%d",&n);
    int a[100000];
    //printf("%d",(n%(-3)));
    while(n)
    {
        if(n>=0)
        {
        a[i++] = (n%(-2));
        n = n/(-2);
        }
        else
        {
            a[i++] = n%(-2) + n;
            n = n/(-2);
        }
    }
    i=i-1;
    while(i>=0)
    {
        printf("%d",a[i]);
        i--;
    }
    cout<<endl;
    }
    return 0;
}
