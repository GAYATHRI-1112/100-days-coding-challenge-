#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
    return 0;
}
int fib(int n){
int f[n],i=2;
f[0]=0;
f[1]=1;
while(i!=n+1)
{f[i]=f[i-1]+f[i-2];
i++;
}
printf("%d",f[n]);

}
