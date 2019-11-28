#include<stdio.h> 
#include<stdlib.h>
int front1=-1,front2=0,front3=0,rear1=-1,rear2=0,rear3=0,q[100],n1,cq1[100],n2,dq1[100],n3,item;
void lq();
void dq();
void cq();
void enq();
void deq();
void cenq();
void cdeq();
void denq_end();
void ddeq_beg();
void denq_beg();
void ddeq_end();
void main()
{
	int ch,ch1,ch2;
	printf("ENTER SIZE OF LINEAR QUEUE:");
	scanf("%d",&n1);
	printf("ENTER THE SIZE OF CIRCULAR QUEUE:");
	scanf("%d",&n2);
	printf("ENTER THE SIZE OF DOUBLE ENDED QUEUE:");
	scanf("%d",&n3);
	while(1)
	{
		printf("1.LINEAR QUEUE\n2.CIRCULAR QUEUE\n3.DEQUEUE\n4.EXIT\nENTER THE CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	lq();
				break;
			case 2:	cq();
				break;
			case 3:	dq();
				break;
			case 4: exit(0);
		}			
	}
}		
void lq()
{	
	int ch, ch1;
	do
	{
		printf("1.INSERTION\n2.DELETION\n3.DISPLAY\nENTER YOUR CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enq();
				break;
			case 2: deq();
				break;
			case 3: printf("LINEAR\n");
				for(int i=front1+1; i<=rear1; i++)
					printf("%d\n",q[i]);
				break;
		}
		printf("\nENTER 0 TO CONTINUE");
		scanf("%d",&ch1);
	}while(ch1=='0');
}
void cq()
{	
	int ch,ch1;
	do
	{
		printf("1.INSERTION\n2.DELETION\n3.DISPLAY\nENTER YOUR CHOICE:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: cenq();
				break;
			case 2: cdeq();
				break;
			case 3: printf("CIRCULAR QUEUE\n");
				for(int i=front2; i<=rear2; i++)
					printf("%d\n",cq1[i]);
				break;
		}
		printf("\nENTER 0 TO CONTINUE");
		scanf("%d",&ch1);
	}while(ch1=='0');
}
void dq()
{	
	int ch,ch1,ch2;
	do
	{
		printf("\n1.INSERTION AT END\n2.DELETION AT THE FRONT\n3.INSERT AT THE BEGININNING\n4.DELETE FROM END\n5.DISPLAY FROM END\n6.DISPLAY FROM FRONT\n7.EXIT\nENTER YOUR CHOICE:");
		scanf("%d",&ch2);
		switch(ch2)
		{
			case 1: denq_end();
				break;
			case 2: ddeq_beg();
				break;
			case 5: printf("DEQUEUE\n");
				for(int i=front3; i<=rear3; i++)
					printf("%d\n",dq1[i]);

				break;
			case 6: printf("DEQUEUE\n");
				for(int i=rear3; i>=front3; i--)
					printf("%d\n",dq1[i]);

				break;
			case 3:	denq_beg();
				break;
			case 4:	ddeq_end();
				break;
			case 7:ch1++;
		}
	}while(ch1==0);
}
void enq()
{
	printf("ENTER THE ITEM TO BE INSERTED");
	scanf("%d",&item);
	if(rear1==n1)
	{
		printf("QUEUE FULL!");
	}
	else
	{
		if(front1==rear1==0)
			front1=0;
		rear1++;
		q[rear1]=item;
	}
}
void deq()
{
	if(rear1==front1==-1)
		printf("QUEUE EMPTY!");
	else
	{
		item=q[front1];
		if(front1==rear1)
		{
			front1=0;
			rear1=0;
		}
		front1++;
	printf("DELETED ITEM IS%d",item);
	}
	
}
void cenq()
{
	printf("ENTER THE ITEM:");
	scanf("%d",&item);
	if(front2==(rear2%n2)+1)		
		printf("QUEUE FULL!");
	else
	{
		if(front2==0 && rear2==0)
			front2=1;
		rear2=(rear2%n2)+1;
		cq1[rear2]=item;
	}
}
void cdeq()
{
	int temp;
	if(front2==0 && rear2==0)
		printf("EMPTY QUEUE!");
	else
	{
		temp=cq1[front2];
		if(front2==rear2)
		{
			front2=0;
			rear2=0;
		}
		else
		{
			front2=(front2%n2)+1;
		}
	printf("DELETED ITEM IS%d",item);
	}
	
}
void denq_beg()
{
	printf("ENTER THE ITEM:");
	scanf("%d",&item);
	if((front3==(rear3%n3)+1))
		printf("QUEUE FULL");
	else
	{
		if(front3==0&&rear3==0)
		{
			front3=1;
			rear3=1;
		}
		else if(front3=1)
			front3=n3;
		else
			front3--;
		dq1[front3]=item;
	}
}
void ddeq_end()
{
	if(front3==0)
		printf("EMPTY QUEUE!!");
	else
	{
		item=dq1[rear3];
		if(front3==rear3)
		{
			front3=0;
			rear3=0;
		}
		else if(rear3==1)
			rear3=n3;
		else
			rear3--;
	printf("DELETED ITEM IS%d",item);
	}
	
}
void denq_end()
{
	printf("ENTER THE ITEM:");
	scanf("%d",&item);
	if(front3==(rear3%n3)+1)		
		printf("QUEUE FULL!");
	else
	
		if(front3==0 && rear3==0)
			front3=1;
		rear3=(rear3%n3)+1;
		dq1[rear3]=item;
	
}
void ddeq_beg()
{
	int temp;
	if(front3==0 && rear3==0)
		printf("EMPTY QUEUE!");
	else
	{
		temp=cq1[front3];
		if(front3==rear3)
		{
			front3=0;
			rear3=0;
		}
		else
		{
			front3=(front3%n3)+1;
		}
	printf("DELETED ITEM IS %d",item);
	}
	
}
