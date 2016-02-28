#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    int n,m,d,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&d);
        int h[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&h[i]);

        }
        sort(h,h+n);
        int k =0;
        for(i=n-1; i; i--)
        {
            if(k<m)
            {
                if(h[i]>d)
                {
                    while(((h[i]-d)>0)&&(k<m))
                    {
                        h[i] = h[i]-d;
                        k++;

                    }
                }
                else
                {
                    break;
                }
            }

        }
            if(k==m)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
 return 0;
    }


