// application of linked list  

// header files

#include<stdio.h> 

#include<conio.h> 

struct node 

{ 

    int data; 

    struct node *next; 

}; 

struct node *head; 

// functions to perform on the linked list  

void insert (); 

void delete(); 

void display(); 

void main () 

{ 

    int choice =0; 

    clrscr(); 

    while(choice != 9) 

    { 

printf("\nChoose one option from the following list\n"); 

printf("\n1.Insert an element "); 

printf("\n2.delete an element "); 

printf("\n3.Show"); 

printf("\n4.Exit"); 

printf("\nEnter your choice :\n"); 

scanf("\n%d",&choice); 

switch(choice) 

{ 

case 1: 

insert(); 

break; 

case 2: 

delete(); 

break; 

case 3: 

display(); 

break; 

case 4: 

exit(0); 

break; 

default: 

printf("=====Please enter valid choice====="); 

} 

    } 

    getch(); 

} 

// block to insert the element in a linked list 

void insert() 

{ 

    struct node *ptr; 

    int item; 

    ptr = (struct node *) malloc(sizeof(struct node *)); 

    if(ptr == NULL) 

    { 

printf("\n=====OVERFLOW====="); 

    } 

    else 

    { 

printf("\nEnter value\n"); 

scanf("%d",&item); 

ptr->data = item; 

ptr->next = head; 

head = ptr; 

printf("\n=====Node inserted====="); 

    } 

} 

// block to Delete the element of the linked list 

void delete() 

{ 

    struct node *ptr; 

    if(head == NULL) 

    { 

printf("\n=====List is empty=====\n"); 

    } 

    else 

    { 

ptr = head; 

head = ptr->next; 

free(ptr); 

printf("\n=====Node deleted=====\n"); 

    } 

} 

// display the linked list element 

void display() 

{ 

    struct node *ptr; 

    ptr = head; 

    if(ptr == NULL) 

    { 

printf("\n=====Nothing to print=====\n"); 

    } 

    else 

    { 

printf("\n=====values are: =====\n"); 

while (ptr!=NULL) 

{ 

printf("\n%d",ptr->data); 

ptr = ptr -> next; 

} 

    } 

} 
