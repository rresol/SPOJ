#include<stdio.h>
#include<string.h>
int main()
{
    char a[42];
    int p,n,len,i;
    scanf("%d",&p);
    while(p--)
    {
        scanf("%d",&n);
        scanf("%s",a);
        len = strlen(a);
        i=0;
        while(i!=len)
        {
            char b[3];
            char c[1] = a[i];
            char d[1] = a[i+1];
            char e[1] = a[i+2];
            strcpy(b,c);
            strcat(b,d);
            strcat(b,e);
            printf("%s",b);
            i++;
        }
    }
    return 0;
}
