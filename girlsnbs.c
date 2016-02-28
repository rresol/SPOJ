#include<stdio.h> 
int main() { int g,b,c,d,n; scanf("%d",&g); scanf("%d",&b); while(b!=-1&&g!=-1) { if(g==0) printf("%d\n",b); else if(b==0) printf("%d\n",g); else if(b==g) printf("1\n"); else { if(b>g) { c=g; d=b; } else { c=b; d=g; } c++; n=d/c; if(d%c!=0) n++; printf("%d\n",n); } scanf("%d",&g); scanf("%d",&b); } return 0; } 
