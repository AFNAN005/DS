#include<stdio.h>

void insertionSort(int arr[], int n){
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[10]={2,34,342,12,455,6,29,1,43,56};
    insertionSort(arr,10);
    printArray(arr,10);
    return 0;
}