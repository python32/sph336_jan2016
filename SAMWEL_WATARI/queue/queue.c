#include<stdio.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
 
 


void insert_element()
{
  int num;
  printf("\n Enter the number to be inserted: ");
  scanf("%d",&num);
  if(front==0 && rear==MAX-1)
    printf("\n Queue OverFlow Occured");
  else if(front==-1&&rear==-1)
  {
      front=rear=0;
      queue[rear]=num;
 
  }
  else if(rear==MAX-1 && front!=0)
  {
    rear=0;
    queue[rear]=num;
  }
  else
  {
      rear++;
      queue[rear]=num;
  }
}
void delete_element()
{
  int element;
  if(front==-1)
  {
      printf("\n Underflow");
  }
  element=queue[front];
  if(front==rear)
     front=rear=-1;
  else
  {
    if(front==MAX-1)
      front=0;
    else
      front++;
       printf("\n The deleted element is: %d",element);
  }
 
}
void display_queue()
{
    int i;
    if(front==-1)
      printf("\n No elements to display");
    else
    {
      printf("\n The queue elements are:\n ");
      for(i=front;i<=rear;i++)
      {
          printf("\t %d",queue[i]);
      }
    }
}

int peek() 
{
printf("\n The front element is: %d",queue[front]);
   
}