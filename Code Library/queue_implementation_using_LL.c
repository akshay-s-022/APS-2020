#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 20


struct node
{
    int data;
    char name[20];
    char id[20];
    struct node *next;
}*q,*front=NULL,*rear=NULL;

void enqueue();
void dequeue();
void display();


int main()
{
   int option;

   while(1)
   {
       printf("\n1.ENQUEUE\n");
       printf("2.DEQUEUE\n");
       printf("3.DISPLAY\n");
       printf("4.EXIT");
       printf("\n\n");
       printf("Enter the option : ");
       scanf("%d",&option);

       switch(option)
       {
           case 1:enqueue();
                  break;
           case 2:dequeue();
                  break;

           case 3:display();
                  break;
           case 4:exit(0);
                  break;

       }
   }
}

void enqueue()
{
    char name[20],id[20];
    int data;
    printf("ROLL No. = ");
    scanf("%d",&data);
    printf("Enter the name\n");
    scanf("%s",name);
    printf("Enter the id \n");
    scanf("%s",id);
    struct node*q1;
    q1=(struct node *)malloc(sizeof(struct node));
    if(front==NULL)
    {
        q1->data=data;
        q1->next=NULL;
        strcpy(q1->name,name);
        strcpy(q1->id,id);
        front=rear=q1;


    }
    else{
        q1->data=data;
        q1->next=NULL;
        strcpy(q1->name,name);
        strcpy(q1->id,id);
        rear->next=q1;
        rear=q1;
    }
    q=q1;
}

void dequeue()
{
        struct node *q1=front;
        if(front==NULL)
        {
            printf("Queue is empty !!!\n");
        }
        else{

                front=front->next;
                free(q1);
        }


}



void display()
{
    struct node *temp=front;
     if(front==NULL)
    {
        printf("Queue is empty \n");
    }

    else{
printf("ROLL NO.\t NAME \t\t ID\t");
printf("\n");
        while(temp->next!=NULL)
        {
            printf("%d\t\t%s\t\t%s",temp->data,temp->name,temp->id);
            temp=temp->next;
            printf("\n");
        }
          printf("%d\t\t%s\t\t%s",temp->data,temp->name,temp->id);
    }
}


