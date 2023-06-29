#include <stdio.h>

int main() {
int T,N,M,i=1;
printf("Enter the no of test cases ");
scanf("%d",&T);
while (i<=T)
{
    printf("Enter the no of bike and car for case %d \n",i);
    scanf("%d%d\n",&N,&M);
    printf("%d",N*2+M*4);
}
    return 0;
