#include <stdio.h>

int main() {
int T,i=1;
float D,N,M,K;
scanf("%d",&T);
while (i<=T)
{printf("\nEnter N,M and K for case %d\n",i);
scanf("%f%f%f",&N,&M,&K);
D=N/M;
if(D<=K)
printf("Yes");
else
printf("No");
i++;}
 
