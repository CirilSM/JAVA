#include<stdio.h>
#include<stdlib.h>
int A[100];
int n;
int B[100];
void linear()
{
printf("ENTER NO OF ELEMENTS IN ARRAY");
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&A[i]);
int item,flag=0;
printf("ENTER ITEM TO SEARCH FOR\n");
scanf("%d",&item);
for(int i=0;i<n;i++)
{
if(A[i]==item)
{
flag=1;
printf("\nITEM FOUND AT %d",i);
}
}
if(flag==0)
printf("ITEM NOT FOUND");
} 
int binary(int l, int r, int x) 
{ 
if(r>=l)
{ 
int mid=(l+r)/2; 
        if(B[mid]==x) 
            return mid; 
        if(B[mid]>x) 
            return binary(l,mid-1,x); 
        return binary(mid+1,r,x); 
}   
return -1; 
} 
void main()
{
int ch;
int it;
int m;
int z=0;
do
{
printf("\n\n1:LINEAR SEARCH 2:BINARY SEARCH 3:EXIT\n");
scanf("%d",&ch);
if(ch==1)
linear();
if(ch==2)
{
printf("ENTER THE MAXIMUM NUMBER OF ELEMENTS");
scanf("%d",&m);
printf("ENTER ELEMENTS IN ASCENDING ORDER");
for(int i=0;i<m;i++)
scanf("%d",&B[i]);
printf("ENTER ITEM TO SEARCH FOR");
scanf("%d",&it);
int b=m-1;
int a=0;
int ret=binary(a,b,it);
if(ret!=-1)
printf("ELEMENT FOUND AT %d",ret);
else 
printf("ELEMENT NOT FOUND");
}
else if(ch==3)
z++;
}while(z==0);
}
