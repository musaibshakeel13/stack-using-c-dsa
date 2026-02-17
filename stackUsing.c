#include <stdio.h>
#define maxsize 3
int stack[maxsize],top=-1;
void push();
void pop();
void display();
void main(){ int choice;
    do{
    printf("-------STACK--------");
    printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
    printf("--------------------\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1: push();break;
        case 2: pop();break;
        case 3: display();break;
        default : printf("invalid choice\n");
    }
    }
    while(choice!=4);
}
void push(){
    int n;
    if(top==maxsize-1){
        printf("stack is overflow\n");
    }
    else{
        printf("Enter an element to push into the stack:");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
}
void pop(){
     int n;
    if(top==-1){
        printf(" stack is empty\n");
    }
    else{
        n=stack[top];
        top--;
        printf("poped element is: %d\n",n);
    }
}
void display(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("Element of stack is\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}














