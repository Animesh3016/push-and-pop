#include<stdio.h>
#define max 10
int stack[max],ch,tos=-1,x,i;

int push(int);
int pop();
int main()
{
while(1)
{
printf("enter choice 1 for push and 2 for pop ");
scanf("%d",&ch);
switch(ch)
{case 1: printf("enter the data to be pushed ");
         scanf("%d",&x);
         push(x);
         break;
 case 2: pop();
         break;       
 
}}
for(i=0;i<=max-1;i++)
printf("%d",stack[i]);
}

int push(int a)
{
if(tos==max-1)
printf(" \n overflow ");
else
{
tos=tos+1;
stack[tos]=x;
}}
int pop()
{
if(tos==-1)
printf(" \n underflow ");
else
{
stack[tos]=0;
tos=tos-1;
}}

