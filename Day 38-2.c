#include<stdio.h>
int main() {
int T;
scanf("%d", &T);
while (T--) {
char str[10000];
scanf("%s", &str);
int ans binary_to_decimal(str);
printf("%d\n", ans);
}
return 0;
}
int binary_to_decimal(char str[]) {
    // Code here.
   int n=strlen(str);
     int decimal = 0, base = 1, rem;
    while(n>0){
         int digit = str[n-1] - '0';
        decimal += digit * base;
        base *= 2;
       n--; 
    }
    return decimal;
}
