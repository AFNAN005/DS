#include<stdio.h>
int a[] = {1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,66,77,88,99,100};
int rbs(int low, int high, int key){
    if(low==high){
        if(a[low]==key){
            return low;
        } else{
            return 0;
        }
    } else{
        int mid = (low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]>key){
            return rbs(low,mid-1,key);
        }
        if(a[mid]<key){
            return rbs(mid-1,high,key);
        }
    }
    return 0;
}
int main(){
     printf( "%d",rbs(0,19,5));  
    return 0;
}