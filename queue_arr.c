#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue_arr [MAX];
int rear=-1;
int front=-1;

insert()
{
	int added_item;
	if(rear==MAX-1)
	{
		printf("Queue Overflow");
	}
	else
	{
		if(front==-1)
			front=0;
		printf("Input the element for adding in queue:");
		scanf("%d",&added_item);
		rear=rear+1;
		queue_arr[rear]=added_item;
	}
}

delete()
{
	if(front==-1 || front>rear)
	{
		printf("Queue underflow.\n");
		return ;
	}
	else
	{
		printf("Element delete from queue is:%d\n",queue_arr[front]);
		front=front+1;
	}
}

display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty");
		return;
	}
	else
	{
		printf("Queue is:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue_arr[i]);
			printf("\n");
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

