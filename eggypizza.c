#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,n,j,extra,sum,count1=0,count2=0,count3=0 ;

    scanf("%d",&n);
    char temp[4];
    float a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",temp);
        if(temp[0]=='1' && temp[2]=='4')
        {
            a[i] = 0.25;
            count1 ++;
        }
        if(temp[0]=='1' && temp[2]=='2')
        {
            a[i] = 0.50;
            count2++;
        }
        if(temp[0]=='3' && temp[2]=='4')
        {
            a[i] = 0.75;
            count3++;
        }
    }

    sum  =1;
    sum+= count3 + ceil(count2/2.0);
    extra = count3 + ((count2%2)*2);
    if(count1>extra)
    {
        count1-=extra;
        sum+= ceil(count1/4.0);
    }

    printf("%d\n",sum);
}
