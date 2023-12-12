#include <stdio.h>
#include <stdlib.h>

int main()
{int N;
    printf("N=");
    scanf("%d",&N);
   int f=factorial(N);
    printf("%d",f);
}
void factorial(int n)
{int i,f=1;
    for(i=n;i>00;i--)
    {
        f=i*f;
    }
    return(f);
