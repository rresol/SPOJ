#include<stdio.h>
inline void fastRead_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
    neg = 1;
        c = getchar_unlocked();}
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
        x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
        x = -x;
}
inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;
    while (c < 33)
        c = getchar_unlocked();
    while (c != '\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }
    str[i] = '\0';
}

int main()
{
    int t,m,n,i,j,k,l,small,d;
    fastRead_int(&t);
    while(t--)
    {
        fastRead_int(&n);
        fastRead_int(&m);
        int a[n][m];
        char c[m];
        int result[n][m];
        for(i=0;i<n;i++)
        {
            scanf("\n");
            gets(c);
            for(j=0;j<m;j++)
            {
                a[i][j] = c[j]-'0';

            }


        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
               small = m+n+1;
                for(k=0;k<n;k++)
                {
                    for(l=0;l<m;l++)
                    {

                        if(a[k][l]==1)
                        {
                            d = fabs(i-k) + fabs (j-l);

                            if(small>d)
                            {
                                small = d;
                            }

                        }

                    }
                }
                result[i][j] = small;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}


