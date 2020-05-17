#include<stdio.h>
#include<stdlib.h>
#define MAX 20

struct node
{


int data;
char name[20];
char id[20];

struct node *s;
}*top,*temp,*top1;


void push();
void pop();
void display();

int main()
{
struct node *stack=(struct node*)malloc(sizeof(struct node));
struct node *temp=stack;
    int choice,data;
    while(1){

         printf("\n1. PUSH\n");
         printf("2.POP \n");
         printf("3.DISPLAY \n");
         printf("0.EXIT\n");

    printf("Enter choice\n ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push(stack);
               break;
        case 2:pop();
               break;

        case 0:printf("Exit \n");
               break;
        case 3:display();
               break;
    }



    }
}



void push(struct node *stack)
{
    int data;
    char name[20];
    char id[20];
    printf("Enter the ROLL NO. :");
    scanf("%d",&data);
    printf("Enter the name of the student :");
    scanf("%s",name);
    printf("Enter the id :");
    scanf("%s",id);


    if(top==NULL)
    {

       top=(struct node*)malloc(sizeof(struct node));
       top->s=NULL;
       top->data=data;
       strcpy(top->name,name);
       strcpy(top->id,id);
    }
    else{

        temp=(struct node*)malloc(sizeof(struct node));
        temp->s=top;
        temp->data=data;
        strcpy(temp->name,name);
        strcpy(temp->id,id);
        top=temp;
    }

}
void pop()
{
    top1=top;
    if(top1==NULL)
    {
        printf("Stack is empty\n ");
    }
    else{

    top1=top1->s;
    free(top);
    top=top1;
    }
}



void display()
{
    top1=top;
    int i;
    if(top1==NULL)
    {
        printf("Stack is empty \n\n");
    }
    else{
    printf("\n\tNAME\t\tROLL NO.\t\tID\t\t\n ");
    while(top1!=NULL)
    {
        printf("\t%s\t\t%d\t\t\t%s\t\t",top1->name,top1->data,top1->id);
        printf("\n");
        top1=top1->s;


    }
  }
}



