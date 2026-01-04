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
        default : printf("invalid choice");
    }
    }
    while(choice!=4);


}
void push(){
    int n;
    if(top==maxsize-1){
        printf("\nstack is overflow");
    }
    else{
        printf("Enter an element to push into the stack:");
        scanf("%d",&n);
        top++;
        stack[top]=n;

    }

}
void pop(){

}
void display(){

}