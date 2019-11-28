#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *list=NULL;
struct node *head;
int count=0;
void insertb()
{
    struct node *temp;
    int item;
    printf("ENTER THE ITEM TO BE INSERTED");
    scanf("%d",&item);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->next=NULL;

    if(list==NULL)
    {
        list=temp;
    }
    else
    {
        temp->next=list;
        list=temp;
    }
    count++;
}
void inserte()
{
    struct node *temp,*t;
    int item;
    printf("ENTERED THE ITEM TO BE INSERTED");
    scanf("%d",&item);
    temp=(struct node*)malloc(sizeof(struct node));
    t=list;
     if(list==NULL)
    {
        list=temp;
        temp->data=item;
        temp->next=NULL;
    }
    else
    {
        while(t->next!=NULL)
            t=t->next;
        t->next=temp;
        temp->data=item;
        temp->next=NULL;
    }
    count++;
}
void insert()
{
    struct node *temp,*t;
    int search,item;
    printf("ENTER THE ITEM TO BE SEARCHED");
    scanf("%d",&search);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->next=NULL;

     if(list==NULL)
    {
        list=temp;
    }
    else
    {
        t=list;
        while(t->next!=NULL)
        {
            if(t->data==search)
            {
                printf("ENTER THE ITEM TO BE INSERTED");
                scanf("%d",&item);
                temp=(struct node*)malloc(sizeof(struct node));
                temp->data=item;
                temp->next=t->next;
                t->next=temp;
                count++;
                return;
            }
            else
            {
               t=t->next;
            }
        }
        if(t->data==search)
            {
                 printf("ENTER THE ITEM TO BE INSERTED");
                scanf("%d",&item);
                temp=(struct node*)malloc(sizeof(struct node));
                temp->data=item;
                temp->next=NULL;
                t->next=temp;
                count++;
                return;
            }
    }
        printf("ELEMENT DOES'NT EXIT\n");
}
void deleteb()
{
    struct node *temp;
    int item;
    if(list==NULL)
        {
        printf("LINKED LIST IS EMPTY\n");
        return;
        }
    item=list->data;
    temp=list;
    list=list->next;
    free(temp);
    printf("\n%dHAS BEEN DELETED\n",item);
    count--;
}
void deletee()
{
    struct node *temp,*t;
    int item;
    if(list==NULL)
    {
        printf("LINKED LIST IS EMPTY\n");
        return;
    }
    else if(list->next==NULL)
    {
        count--;
        item=list->data;
        free(list);
        list=NULL;
        printf("\n%d HAS BEEN DELETED",item);
        return;
    }
    else
    {
        count--;
        t=list;
        while(t->next!=NULL)
        {
        temp=t;
        t=t->next;
        }
        item=t->data;
        temp->next=NULL;
        free(t);
        printf("\n%d HAS BEEN DELETED\n",item);
        return;
    }
    printf("ENTERED ELEMENT DOES'NT EXIT\n");
}
void deleten()
{

    struct node *temp,*t;
    int search,item;

    if(list==NULL)
    {
        printf("LINKED LIST IS EMPTY\n");
        return;
    }
    else
    {
    	printf("ENTER THE ITEM TO BE SEARCHED");
        scanf("%d",&search);
    }
    if(list->next==NULL&&list->data==search)
    {
        count--;
        item=list->data;
        free(list);
        list=NULL;
        printf("\n%d HAS BEEN DELETED\n",item);
        return;
    }
    else if(list->data==search)
    {
        count--;
        temp=list;
        list=list->next;
        free(temp);
        printf("\n%d HAS BEEN DELETED\n",search);
        return;
    }
    else
    {
        t=list;
        while(t->next!=NULL)
        {
            if(t->data==search)
            {
                count--;
                temp->next=t->next;
                free(t);
                printf("\n%d HAS BEEN DELETED\n",search);
                return;
            }
            else
            {
                temp=t;
                t=t->next;
            }
        }
        if(t->data==search)
        {
                count--;
                temp->next=NULL;
                free(t);
                printf("\n%d HAS BEEN DELETED\n",search);
                return;
        }
    }
    printf("%d DOES'NT EXIST\n",search);
}
void main()
{
    int op,x=0,z,oo,ci;
    head=list;
    do
    {
        printf("1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\nENTER YOUR CHOICE");
        scanf("%d",&z);
	switch(z)
	{
	case 1:
		printf("1:INSERT AT BEGINNING\n2:INSERT AT END\n3:INSERT AFTER SPECIFIED ELEMENT\n\n");
		scanf("%d",&ci);
		if(ci==1)
			insertb();
		if(ci==2)
			inserte();
		if(ci==3)
			 insert();
		break;
	case 2:
		printf("1:DELETE AT BEGINNING\n2:DELETE FROM END\n3:DELETE FROM SPECIFIED PLACE\n");
		scanf("%d",&oo);
		if(oo==1)
		deleteb();
		if(oo==2)
		deletee();
		if(oo==3)
		deleten();
		break;
	case 3:
		head=list;
            if(count==0)
                printf("LINKED LIST IS EMPTY\n");
            else
            {

                printf("\nELEMENTS ARE:%d",head->data);
                head=head->next;
                for(int i=2;i<=count;i++)
                {
                    printf(",%d",head->data);
                    head=head->next;
                }
                printf("\n");
            }
            break;			
	case 4:
		x++;
		break;
	default:
            printf("INVALID OPTION\n");
        }
    }while(x==0);

}

