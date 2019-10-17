#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 10
int stack[max];
int tos=-1;
void push(int data)
{	
	if(tos==max-1)
	{
		printf("stack overflow");
	}
	else 
	{
	tos=tos+1;
	stack[tos]=data;
	}
}
int pop()
{
	if(tos==-1)
	{
	printf("stack underflow");
	}
	else
	{
	stack[tos]=0;
	tos=tos-1;	
	}
}
void display()
{
	int i;
	
	if(tos==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=tos;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
int main()
{	int n,b,c,data;
	printf("Enter 1 to PUSH 2 to POP 3 to DISPLAY 4 to STOP\n");
	scanf("%d",&n);
	
	while(1)
	{
	switch(n)
	{
	case 1:
		{
			printf("enter the number to PUSH\n");
			scanf("%d",&b);
			 push(data);
			break;
		}
	case 2:
		{
			printf("enter the number to POP\n");
			scanf("%d",&c);
			 pop();
			break;
		}
	case 3:
		{
			printf("the output is:\n");
			void display();
			break;
		}
	
	default:
		{
			printf("enter a valid number\n");
			break;
		}
	}
}
}
