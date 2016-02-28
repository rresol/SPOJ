#include<stdio.h>
int main()
{
    int a ,d,i,small_id,flag=0,j,temp;
    while(1)
    {
    scanf("%d",&a);
    scanf("%d",&d);
    if(!a&&!d)
    {
        return 0;
    }
    flag=0;
    int b[a] , c[d];
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<d;i++)
    {
       scanf("%d",&c[i]);
    }
    for(i=0;i<d-1;i++)
    {
        small_id = i;
        for(j=i;j<d;j++)
        {
            if(c[j]<c[small_id])
            {
                small_id = j;
            }
        }
        temp= c[i];
        c[i]=c[small_id];
        c[small_id]=temp;
    }
    
    for(i=0;i<a;i++)
    {
        if(b[i]<c[1])
        {
            flag=1;
            break;
        }
    }
    if(flag!=1)
    {   
        printf("N\n");
    }
    else
    {
        printf("Y\n");
    }
   }
}
    
        
            
