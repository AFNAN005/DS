#include<stdio.h>
#define MAX  10
int arr[MAX],top=-1;
void display(){
    if(top>=0){
        for(int i = 0; i <=top; i++)
        {
         printf("%d\t",arr[i]);  
        } 
    printf("\n");
    }
    else{
         printf("Stack is empty\n");  
    }
}
void push(){
    if(top==MAX-1){
         printf("Overflow\n"); 
        return; 
    }
    else{
        int data;
        printf("Enter the data :");
        scanf("%d",&data);

        top++;
        arr[top]=data;
    }
}
void pop(){   
    if(top == -1){   
    printf("Underflow");  
    }
    else{
         printf("The popped elements is %d",arr[top]);  
        top = top-1;
    }
}   
int main(){
    int choice;
    printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n\n");
    do{
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                push();
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                printf("\n\t EXIT POINT ");
                break;
            }
            default:{
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
                 }
        }
    }while(choice!=4);
    return 0;
}