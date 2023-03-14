#include<stdio.h>

int main(){
    int key;
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,434,234,12,334,324,425,45,53,65,756};
    printf("Enter any number:");
    scanf("%d",&key);
    for (int i = 0; i < 21; i++){
        if(arr[i]==key){
             printf("Found at index %d",i);  
             break;
        }
        if(i==20 && arr[i]!=key){
             printf("Not found");  
        }
    }
    return 0;
}