//implement a stack using the static method 

// Header Files 

#include<stdio.h> 

#include<conio.h> 

#define maxsize 6 

// Main function 

void main() 

{ 

// Declaration  

int i,a[maxsize]={27,56,7,17,36,98}; 

clrscr(); 

// program to print stack 

printf("\n Implementation of stack is as follows:\n"); 

for(i=0;i<=maxsize-1;i++) 

{ 

printf("\n%d",a[i]); 

} 

getch(); 

} 
