#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N,a,t,b=0,i=100;
    printf("Enter the value:");
    scanf("%d",&N);
    a=N;
    while(a>0)
    {
        t=a%10;
        b=t*i+b;#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N,a,t,b=0;
    printf("Enter the value:");
    scanf("%d",&N);
    a=N;
    while(a>0)
    {
        t=a%10;
        b=pow(t,3)+b;
        a=a/10;

    }
    if(N==b)
        printf("Yes");
    else
        printf("No");
    return 0;
}

        a=a/10;
        i=i/10;
    }
    if(N==b)
        printf("Yes");
    else
        printf("No");
    return 0;
}
