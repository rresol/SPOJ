#include<stdio.h>
int main()
{
    char a[5000];
    long long  dp[5000];
    int x,i,l;
    while(1)
    {
        gets(a);
        if(a)
        {
            dp[0]=1;
            l = strlen(a);
            if((((s[0]-'0')*10)+s[1])<27)
            {
                dp[1] = 2;
            }
            else
            {
                dp[1] =1;
            }
            for (i=2;i<l;i++)
            {
                if(((((s[i-1]-'0')*10)+(s[i]-'0'))<27) && s[i]!='0') 
                {
                    dp[i] = dp[i-1]+dp[i-2];
                }
                else
                {
                    dp[i]= dp[i-1]+ 0;
                }
            }
        }
        printf("%d\n",dp[i]); 
    }