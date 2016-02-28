#include<stdio.h>
int max(int x,int y)
{
    return x>y?x:y;
}
long long int arr[10005];
long long int dp[10005];
int n;
//dp[i] --> maximum coin sum till i monsters
long long int solve(int i){
    //printf("%lld\n",dp[i]);
	if(i>=n)
	  return 0;
	if(i==n-1)//if it is the last monster ,you have to choose it coz our aim is to maximize the coin sum
	  return arr[i];
    if(dp[i]!=-1)
      return dp[i];
    dp[i]=max(arr[i]+solve(i+2),solve(i+1));//if you choose the ith monster's coins you cannot choose the next so you 
    //move to the i+2th monster. if you do not choose the ith monster's coins you still have a chance to choose i+1th monster's 
    //coins.So you move to i+1th monster 
    return dp[i];
}
int main()
{	
    int t,j=1,i;
    scanf("%d",&t);
    while(j<=t)
    {
        i=0;
        scanf("%d",&n);
        while(1)
        {
            if(i==n)
            {
                break;
            }
            scanf("%lld",&arr[i]);
            i++;
        }
        
        for(i=0;i<n;i++)
        {
            dp[i] = -1;
        }
        printf("Case %d: %lld\n",j,solve(0));
        j++;
    }
    return 0;
}
        

