#include<stdio.h>
#include<math.h>
void printArray(int arr[], int size)
int i;
for (i=0; i < size; i++) printf(", arr[i]); printf("");
}
}
int main()
int arr[1000],n,t,i;
scanf("d",&T);
while(T--){
scanf("d",&n);
for(i=0;i<n;i++) scanf(d",&arr[i]);
insertionSort(arr, n); printArray(arr, n);
}
return 0;
}
void insert(int arr[], int i)
    {
        // Your code here
        int temp= arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        int i,j;
        for(i=1;i<n;i++){
            j=i;
            while(j>0&&arr[j-1]>arr[j]){
                insert(arr,j);
                j--;
            }
        }
    }
