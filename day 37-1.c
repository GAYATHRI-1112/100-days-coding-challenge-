#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int N;
scanf("%d",&N);
printf("The factorial od %d is %lld\n",N,factorial(N));
}
}
long long int factorial(int N){
       //code here
      if(N>=1)
      return N*factorial(N-1);
      else
      return 1;
}
