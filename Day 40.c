#include<stdio.h>
int main()
{
int arr[1000],n,T,i;
scanf("%d",&T);
while(T--){
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&arr[i]);
bubbleSort(arr, n); printArray(arr, n);
}
return 0;;
}
void bubbleSort(int arr[], int n)
{
    // Your code here    
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++)
       {if(arr[j]>arr[j+1]){
swap(&arr[j],&arr[j+1]);
       }   
       }
    }
}
void swap(int xp, int *yp)
{
int temp = *xp;
xp =
*yp = temp;
}
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d", arr[i]);
printf("\n");
}
