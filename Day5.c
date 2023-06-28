#include <stdio.h>

int main() {
int T,A,B,i=1;
scanf("%d",&T);
while (i<=T)
{printf("\nEnter A and B for case %d\n",i);
scanf("%d%d",&A,&B);
printf("%d",A%B);
i++;}
 
}
