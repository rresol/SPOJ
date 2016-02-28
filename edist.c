#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[2005],b[2005];
    int a_len,b_len,diff,i,j,flag,count;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("\n");
        count = 0;
        flag  = 1;
        gets(a);
        gets(b);
        a_len= strlen(a);
        b_len= strlen(b);
        diff = a_len - b_len;
        
        count += fabs(diff);
        for(i=0;i<b_len;i++)
        {
            if(a[i]!=b[i])
            {
                count++;
            }
        }
        if(diff<0)
        {
            count+=diff;
        }
        printf("%d\n",count);
    }
    return 0;
}
            
                
