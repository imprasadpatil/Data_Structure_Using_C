// Application of queue 

// Header files 

#include<stdio.h> 

#include<conio.h> 

#define maxsize 5 

// functions to perform on the queue 

void insert(); 

void del(); 

void display(); 

// globle decleration 

int front = -1, rear = -1; 

int queue[maxsize]; 

// main function 

void main () 

{ 

// static decleration  

    int choice; 

    clrscr(); 

    while(choice != 4) 

    { 

printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n"); 

printf("\nEnter your choice :"); 

scanf("%d",&choice); 

switch(choice) 

{ 

case 1: 

insert(); 

break; 

case 2: 

del(); 

break; 

case 3: 

display(); 

break; 

case 4: 

exit(0); 

break; 

default: 

printf("=====Enter valid choice====\n"); 

} 

    } 

getch(); 

} 

// block to perform the insertion function 

void insert() 

{ 

    int item; 

    printf("\nEnter the element\n"); 

    scanf("\n%d",&item); 

    if(rear == maxsize-1) 

    { 

printf("====OVERFLOW====\n"); 

return; 

    } 

    if(front == -1 && rear == -1) 

    { 

front = 0; 

rear = 0; 

    } 

    else 

    { 

rear = rear+1; 

    } 

    queue[rear] = item; 

    printf("=====Value inserted=====\n "); 

 

} 

// block to perform the deletion function 

void del() 

{ 

    int item; 

    if (front == -1 || front > rear) 

    { 

printf("=====UNDERFLOW=====\n"); 

return; 

 

    } 

    else 

    { 

 

if(front == rear) 

{ 

    front = -1; 

    rear = -1 ; 

} 

else 

{ 

    front = front + 1; 

} 

printf("=====value deleted======\n "); 

    } 

} 

// block to perform the display function 

void display() 

{ 

    int i; 

    if(rear == -1) 

    { 

printf("=====Empty queue=====\n"); 

    } 

    else 

    {   

printf(" Inserted values are :\n"); 

for(i=front;i<=rear;i++) 

{ 

    printf("\t%d",queue[i]); 

} 

    } 

} 
