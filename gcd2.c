#include<stdio.h>
#include<string.h>
long long gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int t,a,num,rem,temp,i;
    long long res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        char b[255];
        scanf("\n");
        fgets(b,255,stdin);
        int n = strlen(b);
        temp = 0;

        if(a)
        {
        for(i=0;i<n;i++)
        {
            if(b[i]=='\n'||b[i]=='\0')
            {
                break;
            }

            num = b[i]-'0';
            num = num+temp;
            rem = num%a;
            temp = rem*10;


        }

                res = gcd(a,rem);
                printf("%lld\n",res);
        }
        else
        {
            for(i=0;i<n;i++)
            {
                printf("%c",b[i]);
            }
        }
    }
    return 0;
}
