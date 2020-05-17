#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*link,*head,*tail;
void insert_at_beg();
void insert_after_a_number();
void insert_at_end();
void insert_before_a_number();
void display();

int main()
{

int option;
int i,n;

while(1)
{
    printf("\n\n");
    printf("\n1.CREATE LINKED LIST\n2.INSERT AT BEGINNING\n3.INSERT AT END\n4.INSERT AFTER A NUMBER\n5.INSERT BEFORE A NUMBER\n6.DELETION\n7.SEARCH\n8.DISPLAY\n9.DESTROY LINKED LIST\n");
    printf("10.LENGTH OF LINKED LIST\n11.COUNT OF PARTICULAR DATA IN LINKED LIST\n12.INTERCHANGE DATA BETWEEN TWO NODES\n13.SUM OF ALL DATA IN THE LIST\n0.EXIT\n\n");
    printf("Enter the option  : ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:printf("Enter the number of data to be inserted :\n");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    insert_at_end();
                }
                break;
        case 2:insert_at_beg();
               break;

        case 3: insert_at_end();
                break;
        case 4:insert_after_a_number();
                break;
        case 5:insert_before_a_number();
                break;
        case 6:display();
		break;
        case 0:exit(0);
                break;

    }
}
}



void insert_at_beg()
{
    int data;
    struct node*temp;

    printf("Enter the data to be inserted : ");
    scanf("%d",&data);

      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=data;

    if(head==NULL)
    {
      temp->next=NULL;
      temp->prev=NULL;
      head=tail=temp;
    }
    else
    {
        temp->next=head;
        temp->prev=NULL;
        head=temp;
    }



}


void display()
{

    struct node*temp=head;
    if(head==NULL)
    {
        printf("List is empty!!\n");
    }
    else{
    while(temp->next!=NULL)
    {

        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    printf("\n\n");
}
}

void insert_at_end()
{
    int data;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    struct node*temp1=head;
    printf("Enter the data to be inserted : ");
    scanf("%d",&data);

    temp->data=data;
    temp->next=NULL;


if(head==NULL)
    {
        head=tail=temp;
        temp->prev=NULL;
    }
else
    {
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;

    }
    temp1->next=temp;
    temp->prev=temp1;
    tail=temp;


    }
}


void insert_after_a_number()
{

    int data,n;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    struct node*temp1=head;
    printf("Enter the data to be inserted : ");
    scanf("%d",&data);

    printf("Enter the number after which data needs to be inserted : ");
    scanf("%d",&n);

    while(temp1!=NULL)
    {
        if(temp1->data==n)
        {
            temp->data=data;
            break;
        }
        else{
        temp1=temp1->next;
        }
    }

temp->next=temp1->next;
temp1->next->prev=temp;
temp1->next=temp;
}

void insert_before_a_number()
{

    int data,n;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    struct node*temp1=head,*t=head;


    printf("Enter the number before which data needs to be inserted : ");
    scanf("%d",&n);

    if((temp1==head) & (temp1->data==n))
    {
        insert_at_beg();
    }
    else
    {
         printf("Enter the data to be inserted : ");
    scanf("%d",&data);


    while(temp1!=NULL)

    {
        if(temp1->data==n)
        {
            temp->data=data;

            break;

        }
        else{
                 t=temp1;
        temp1=temp1->next;

        }

    }

temp->next=temp1;
temp->prev=t;
t->next=temp;
    }

}






void destroy()
{
    struct node*temp=head;
    if(temp==head)
    {
        head=NULL;
    }
 else{
   while(temp!=NULL)
   {
        temp->next=NULL;
        temp=temp->next;

    }
    }
    printf("Successfully destroyed linked list!!\n");
}












