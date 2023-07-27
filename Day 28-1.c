#include <stdio.h>
#include <stdlib.h>
void printTriangle(int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
      for(j=0;j<=i;j++)
        printf("*");
      printf("\n");
}
for(i=n-1;i>=0;i--)
  {
      for(j=0;j<i;j++)
        printf("*");
      printf("\n");
}
}
int main()
{
    int N;
    scanf("%d",&N);
    if(N>=0&&N<=20)
    printTriangle(N);
    else
        printf("Invalid input");
    return 0;
