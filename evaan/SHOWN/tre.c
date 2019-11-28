#include<stdio.h>
#include<stdlib.h>

struct tree
{
	int data;
	struct tree *lchild;
	struct tree *rchild;
};

struct tree *pos=NULL;

void display(struct tree *t)
{
	if(t!=NULL)
	{
		printf("%d\t",t->data);
		display(t->lchild);
		display(t->rchild);
	}
}

void create(struct tree *t)
{
	int choice;
	int item;
	struct tree *temp;
	if(t!=NULL)
	{
		printf("ANY LEFT NODE FOR %d\t//ENTER(1/0)?\n",t->data);
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("ENTER THE ELEMENT");
			scanf("%d",&item);
			temp=(struct tree *)malloc(sizeof(struct tree));
			temp->data=item;
			temp->rchild=NULL;
			temp->lchild=NULL;
			t->lchild=temp;
			create(temp);
		}
		printf("ANY RIGHT NODE FOR %d\t//ENTER(1/0)?\n",t->data);
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("ENTER THE ELEMENT");
			scanf("%d",&item);
			temp=(struct tree *)malloc(sizeof(struct tree));
			temp->data=item;
			temp->rchild=NULL;
			temp->lchild=NULL;
			t->rchild=temp;
			create(temp);
		}
	}
}


struct tree search(struct tree *t,int key)
{
if(t!=NULL)
{
if(t->data==key)
{
pos=t;
}
else
{
search(t->lchild,key);
search(t->rchild,key);
}
}
}


void insert(struct tree *t,int key,int item)
{
struct tree *temp;
int choice;
search(t,key);
if(pos==NULL)
	printf("KEY ELEMENT NOT FOUND\n");
else
	{
	printf("1-LEFT\t/\t2-RIGHT\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		if(pos->lchild==NULL)
		{
		temp=(struct tree *)malloc(sizeof(struct tree));
		temp->data=item;
		temp->lchild=NULL;
		temp->rchild=NULL;
		pos->lchild=temp;
		}
	else
	printf("INSERTION NOT POSSIBLE\n");
	}
if(choice==2)
{
	if(pos->rchild==NULL)
	{
	temp=(struct tree *)malloc(sizeof(struct tree));
	temp->data=item;
	temp->lchild=NULL;
	temp->rchild=NULL;
	pos->rchild=temp;
	}
	else
	printf("INSERTION NOT POSSIBLE\n");
}
}
}



void del(struct tree *t,int key)
{
struct tree *temp;
	if(t!=NULL)
	{
		if(t->lchild!=NULL)
		{
		if(t->lchild->data==key)
		{
		temp=t->lchild;
			if(temp->lchild==NULL&temp->rchild==NULL)
			{
				t->lchild=NULL;
				free(temp);
			}
			else
			printf("DELETION NOT POSSIBLE\n");
		}
		}
	else if(t->rchild!=NULL)
	{
	if(t->rchild->data==key)
		{
		temp=t->rchild;
			if(temp->lchild==NULL&temp->rchild==NULL)
			{
				t->rchild=NULL;
				free(temp);
			}
			else
			printf("DELETION NOT POSSIBLE\n");
		}
		}
		del(t->lchild,key);
		del(t->rchild,key);
}
}
int main()
{
	struct tree *root;
	int c,key,item,k;
	root=(struct tree *)malloc(sizeof(struct tree));
	printf("\t\t\t----BINARY TREE CREATION---\n");
	printf("ENTER THE ROOT NODE");
	scanf("%d",&root->data);
	create(root);
	do
	{
	printf("1.INSERTION\n2.DELETION\n3.SEARCH\n4.DISPLAY\n");
	scanf("%d",&c);
	if(c==1)
	{
		pos=NULL;
		printf("ENTER THE SEARCH ELEMENT\n");
		scanf("%d",&key);
		printf("ENTER THE ELEMENT TO BE INSERTED");
		scanf("%d",&item);
		insert(root,key,item);
	}
	if(c==2)
	{
		printf("ENTER THE ELEMENT TO BE DELETED\n");
		scanf("%d",&key);
		del(root,key);
	}
	if(c==3)
	{
		pos=NULL;
		printf("ENTER THE SEARCH ELEMENT\n");
		scanf("%d",&key);
		search(root,key);
		if(pos==NULL)
		printf("ELEMENT NOT FOUND\n");
		else
		printf("ELEMENT FOUND\n");
	}
	if(c==4)
	{
	printf("PREORDER DISPLAY\n");
	display(root);
	}
printf("DO YOU WISH TO CONTINUE?(1/0)");
scanf("%d",&k);
}
while(k==1);
}
