#include<stdio.h>
int A[100];
int top=-1;
int n;
int t;
void pop()
{
if(top<0)
{
printf("STACK IS EMPTY");
}
else
top--;
}
void push()
{
if(top<n-1)
{
top++;
scanf("%d",&t);
A[top]=t;
}
else
printf("STACK IS FULL");
}
void peep()
{
printf("\n%d",A[top]);
}
void isfull()
{
if(top>=n-1)
printf("FULL");
else 
printf("NOT FULL");
}
void isempty()
{
if(top<0)
printf("EMPTY");
else if(top>=0)
printf("NOT EMPTY");
}
void display()
{
for(int i=top;i>=0;i--)
printf("\n%d   ",A[i]);
printf("\n");
}
void main()
{
int u;
int p=0;
printf("\nENTER MAX NUMBER OF ELEMENTS");
scanf("%d",&n);
do
{
printf("\n1:POP\n2:PUSH\n3.DISPLAY LAST ADDED ELEMENT\n4.CHECK IF STACK IS EMPTY\n5:CHECK IF STACK FULL\n6:DISPLAY ALL ELEMENTS\n7.EXIT");
scanf("%d",&u);
if(u==1)
pop();
else if(u==2)
push();
else if(u==3)
peep();
else if(u==4)
isempty();
else if(u==5)
isfull();
else if(u==6)
display();
else if(u==7)
{
p++;
}
}
while(p==0);
}
