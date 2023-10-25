// Implement applications of stack 

// Header Files 

#include<stdio.h> 

#include<conio.h> 

#define CAPACITY 5 

// Universal declaration  

int stack[CAPACITY]; 

int top=-1; 

// functions that will be performed  

push(int); 

isfull(); 

show(); 

isempty(); 

peek(); 

// main function  

void main() 

    { 

// declaration  

int ch, item; 

clrscr(); 

while(1) 

    { 

    printf("Different choices are:\n"); 

    printf("1.push\n"); 

    printf("2.pop\n"); 

    printf("3.peek\n"); 

    printf("4.show\n"); 

    printf("5.exit\n"); 

    printf("enter your choice: "); 

    scanf("%d",&ch); 

    printf("your choice was: %d\n",ch); 

switch(ch) 

    { 

case 1: 

printf("enter element for push:"); 

scanf("%d",&item); 

push(item); 

break; 

case 2: printf("pop command is given\n"); 

pop(); 

break; 

case 3: peek(); 

break; 

case 4: show(); 

break; 

case 5: exit(0); 

default: printf("invalid input\n"); 

    } 

printf("\n"); 

} 

} 

// block that will perform the push function 

    push(int ele) 

{ 

if(isfull()) 

{ 

printf("stack is overflow\n"); 

} 

else 

{ 

top++; 

stack[top]=ele; 

printf("pushed element is %d\n",stack[top]); 

} 

return(0); 

} 

// block that will execute when the stack is full 

  isfull() 

   { 

     if(top==CAPACITY-1) 

      { 

       	return 1; 

      } 

     else 

      { 

     	return 0; 

      } 

   } 

// block that will perform the show function  

    show() 

    { 

if(isempty()) 

{ 

printf("stack is empty\n"); 

} 

else 

{ 

int i; 

printf("stack elements are: "); 

for(i=0;i<=top;i++) 

{ 

printf("\n%d ",stack[i]); 

} 

} 

printf("\n"); 

return(0); 

    } 

// block that will execute when the stack is empty 

    isempty() 

    { 

if(top==-1) 

{ 

return 1; 

} 

else 

{ 

return 0; 

} 

    } 

// operation to get top element without deleting 

    peek() 

    { 

      printf("peek element is: %d\n",stack[top]); 

   	 return(0); 

    } 

// block that will perform the pop function  

    pop() 

    { 

if(isempty()) 

{ 

printf("stack is underflow\n"); 

} 

else 

{ 

printf("popped element is: %d\n",stack[top]); 

top--; 

} 

return(0); 

    }
