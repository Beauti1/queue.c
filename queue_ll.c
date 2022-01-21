#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
        int data;
        struct node *next;
}*front=NULL, *rear=NULL;

insert()
{
	struct node *temp;
    temp=malloc (sizeof (struct node));
    printf("Enter data part:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(front==NULL)
    {
    	front=temp;
    }
    else
    {
    	rear->next=temp;
    }
    rear=temp;
}

delete()
{
	struct node *temp;
    temp=malloc(sizeof (struct node));
    if(front==NULL)
    {
    	printf("Queue Underflow \n");
    }
    else
    {
    	temp=front;
    	printf("Delete element is %d\n",temp->data);
    	front=front->next;
    	free(temp);
    }
}

display()
{
	struct node *q;
	q=malloc(sizeof(struct node));
	q=front;
	if(front==NULL)
	{
		printf("Queue is empty\n");
	}
	else 
	{
		printf("Queue elements: \n");
		while(q!=NULL)
		{
			printf("%d ",q->data);
			q=q->next;
		}
		printf("\n");
	}
}


main()
{
	int choice;
	while(1)
	{
		printf("1.Insert \n");
		printf("2.Delete \n");
		printf("3.Display \n");
		printf("4.Quit \n");
		printf("Enter your choice:");
		scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                insert();
                                break;
                        case 2:
                                delete();
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                exit(1);
                                break;
                         default:
                                printf("Please enter a valid choice");
                }
      }
}
