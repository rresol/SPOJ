#include<stdio.h>
#include<string.h>
int main()
{
    char b[101];
    int i,n,flag;
    int a[101];
    int slang;
    while(gets(b))
    {
    slang =0;
    n = strlen(b);
    for(i=0;i<n;i++)
    {
        a[i] = b[i];

    }

    if(!(a[0]>=97&&a[0]<=122))
    {
        printf("Error!");

        slang  =1;
    }
    if(slang!=1)
    {
    flag =0;
    for(i=1;i<n;i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            flag = 1;

            break;
        }
        else if(a[i]==95)
        {
            flag =2;

            break;
        }
    }
    //printf("%d\n",flag);
    if(flag==1)
    {   
        for(i=1;i<n;i++)
        {
            if(!((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)))
            {
                printf("Error!");
                slang =1;
                break;
            }
        }
        if(slang!=1)
        {
        for(i=0;i<n;i++)
        {
            if(a[i]>=65&&a[i]<=90)
            {

                printf("_");
                a[i] +=32;

            }
            printf("%c",a[i]);
        }
        }
    }
    if(flag==2)
    {
        for(i=1;i<n;i++)
        {
            if(a[i]==95)
            {
                i++;
                if(i==n)
                {
                    printf("Error!");
                    slang =1;
                    break;
                }
                if(!(a[i]>=97&&a[i]<=122))
                {
                    printf("Error!");
                    slang = 1 ;
                    break;
                }
            }
            if(!((a[i]==95)||(a[i]>=97&&a[i]<=122)))
            {

                printf("Error!");
                slang = 1;
                break;
            }
        }
        if(slang!=1)
        {
        for(i=0;i<n;i++)
        {
            if(a[i]==95)
            {

                i++;
                a[i]-=32;
            }
            printf("%c",a[i]);
        }
        }
    }
    if(flag==0)
    {
        for(i=0;i<n;i++)
        {
            printf("%c",a[i]);
        }
    }
    
    }
    }
    return 0;
}
