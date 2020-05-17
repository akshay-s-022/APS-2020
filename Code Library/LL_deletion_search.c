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
int main()
{
    int option;
int i,n;

while(1)
{
    int data;
    printf("\n\n");
    printf("\n1.CREATE LINKED LIST\n2.DELETE A NUMBER\n3.SEARCH\n4.DISPLAY\n");
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
        case 2:deletion();
               break;

        case 3: search();
                break;
        case 4:display();
                break;
        case 0:exit(0);
                break;

}
void search()
{
    int data,flag=0;
    struct node *temp=head;
    printf("Enter the data to be searched : ");
    scanf("%d",&data);

    while(temp->next!=NULL)
    {
        if(temp->data==data)
        {
            flag=1;
            break;
        }
        else{
            temp=temp->next;
        }
    }

    if(flag==1)
    {
        printf("\n\nFound !!\n\n");
    }
    else{
        printf("\n\nNot found\n\n");
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


int deletion(int data)
{

    struct node *temp=head;

    if(head==NULL)
    {
        printf("\nList is empty !! \n");
    }

    if((temp->data==data) & (temp==head))
        {
            head=temp->next;
        }
    else{
        while(temp!=NULL)
    {
        if(temp->next->data==data)
        {
            temp->next=temp->next->next;
            printf("Successfully deleted !!\n");
            break;
        }
        else{
            temp=temp->next;
        }
    }
    }
}
