#include<stdio.h>
int main() {
//code
int t;
scanf("%d", &t);
while(t--)
int n; scanf("%d", &n);
toBinary(n); printf("\n");
}
return 0;
}
void toBinary(int N)
{
    // your code here
    int binary[32],i=0;
    while(N>0){
        binary[i]=N%2;
        N=N/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    printf("%d",binary[j]);
        
}
