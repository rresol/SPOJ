#include<stdio.h>
int main()
{
    int t;
    long long a,temp;
    char b,c ;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%lld",&a);
        scanf("%c",b);
        c =b;
        temp = a;
        while(c!='=')
        {
            scanf("%lld",&a);
            if(c == '+')
            {
                temp+=a;
            }
            else if(c=='-')
            {
                temp-=a;
            }
            else if(c=='*')
            {
                temp*=a;
            }
            else if (c=='/')
            {
                temp/=a;
            }
            scanf("%c",b);
            c = b;
        }
        printf("%lld\n",temp);
    }
    return 0;
}
