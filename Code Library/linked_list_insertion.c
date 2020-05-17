#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*head1;
void insert_at_beg();
void insert_at_end();
void display();
int c;
int main()
{

int option;
int i,n;

while(1)
{
    int data;
    printf("");
    printf("\n1.CREATE LINKED LIST\n2.INSERT AT BEGINNING\n3.INSERT AT END\n4.DISPLAY\n");
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
        case 4:display();
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
    }
    else
    {
        temp->next=head;
    }

head=temp;

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
        head=temp;
    }
else
    {
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;

    }
    temp1->next=temp;
    return;

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
t->next=temp;
    }

}
