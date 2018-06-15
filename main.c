#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n){

    for(int i = 0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
    }
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int index = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>index){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=index;
    }

}
int* p;
int main()
{
//   int arr[] = {64,34,25,12,22,11,90};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   //bubbleSort(arr,n);
//   //selectionSort(arr,n);
//   insertionSort(arr,n);
//   for (int i=0; i<n; i++){
//    printf("%d ",arr[i]);
//   }
//   printf("\n");
    int *ptr, i , n1, n2;
    printf("Enter size of array: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Address of previously allocated memory: ");
    for(i = 0; i < n1; ++i)
         printf("%u\t",ptr + i);

    printf("\nEnter new size of array: ");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2);
    for(i = 0; i < n2; ++i)
         printf("%u\t", ptr + i);
    return 0;

}
