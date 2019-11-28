#include<stdio.h>
void main()
{
int A[100][100],B[100][100],C[100][100];
printf("ENTER THE NUMBER OF ROWS/COLOUMNS\n");
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("ENTER THE %d|%d ELEMENT OF THE FIRST MATRIX",i,j);
		scanf("%d",&A[i][j]);
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("ENTER THE %d|%d ELEMENT OF THE SECOND MATRIX",i,j);
		scanf("%d",&B[i][j]);
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		C[i][j]=A[i][j]+B[i][j];
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("%d",C[i][j]);
	}
	printf("\n");
}
}
