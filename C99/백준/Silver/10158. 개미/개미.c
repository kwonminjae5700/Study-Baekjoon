#include <stdio.h>
int main()
{
   int w,h;
   int p,q,t;
    scanf("%d %d",&w,&h);
    scanf("%d %d",&p,&q);
    scanf("%d",&t);
    p+=t;
    q+=t;
    printf("%d %d",(p/w)%2?w-(p%w):p%w, (q/h)%2?h-(q%h):q%h);

    return 0;
}