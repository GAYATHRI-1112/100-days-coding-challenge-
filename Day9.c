#include <stdio.h>

int main() {
int T,C,X,Y;
printf("Enter the no of test cases=%d",T);
scanf("%d",&T);
while (T--)
{
    printf("Enter the C,X and Y values");
    scanf("%d%d%d",&C,&X,&Y);
    printf("Min money=%d\n",(C-X)*Y);
}
