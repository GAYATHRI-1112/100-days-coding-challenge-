#include <stdio.h>

int main() {
int T,K,X,i=1;
scanf("%d",&T);
while (i<=T)
{printf("\nEnter K and X for case %d\n",i);
scanf("%d%d",&K,&X);
printf("%d",K-X);
i++;}
 
