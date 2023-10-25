// dynamic implementation of queue
// header files
#include<stdio.h>
#include<conio.h>
#define maxsize 5
//main function
void main()
{
//decleration
int i,a[maxsize];
clrscr();
printf("Enter the 5 Queue elements you want:\t");
// for loop to get the queue elements from user
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\nimplimentation of Queue is as follows:\n");
// for loop to print the stack elements
for(i=0;i<=maxsize-1;i++)
{
printf("\t%d",a[i]);
}
getch();
}
