#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,len,last_num,temp;
    long long b;
    char a[1005];
    scanf("%d",&t);
    while(t--)
    {
        temp=1;
        scanf("\n");
        scanf("%s",a);
        scanf("\n");
        scanf("%lld",&b);
        len = strlen(a);
        last_num = a[len-1] - '0';
        if(b)
        {
            b = b%4;
            if(!b)
            {
                b=4;
            }
        }
        else
        {
            b=0;
        }
        for(i=0;i<b;i++)
        {
            temp *= last_num;
        }
        temp %= 10;
        printf("%d\n",temp);
    }
    return 0;
}
        
