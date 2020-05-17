#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*head1;
void insert_at_beg();
void insert_at_end();


int c;
int main()
{

int option;
int i,n;

while(1)
{
    int data;
    printf("\n\n");
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
        case 5:destroy();
                break;
       
        case 6:even_odd_split();
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
void even_odd_split()
{
    int a;
    struct node*temp=head,*temp1=head;
    while(temp!=NULL)
    {
        while(temp1->next!=NULL)
        {
            if((temp1->data)%2==0)
            {
                a=temp1->data;
                temp1->data=temp1->next->data;
                temp1->next->data=a;
            }
            temp1=temp1->next;
        }
        temp1=head;
        temp=temp->next;
    }
    display();
}