#include <stdio.h>
#include <stdlib.h>

int main()
{int N;
printf("Enter the value of N:");
scanf("%d",&N);
if(N>0&&N<=10^9);
isPrime(N);
}
int isPrime(n)
{int i,c=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c>1)
        printf("1");
    else
        printf("0");
}
