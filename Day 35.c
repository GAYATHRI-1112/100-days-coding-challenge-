#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,t,d=0;
    printf("Enter the value:");
    scanf("%d",&x);
    t=x;
    while(t!=0)
    {
        a=t%10;
        d=(d*10)+a;
        t=t/10;
    }
    printf("%d",d);

    return 0;
}
