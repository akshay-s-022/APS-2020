#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* right;
    struct node* left;
    int data;
};
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        root=root->left;
        printf("%d ",root->data);
        root = root->right;
    }
}

struct node* insert(struct node *root,int data)
{
    if(root==NULL)
    {
        root=(struct node*)malloc(sizeof(struct node));
        root->right=NULL;
        root->left=NULL;
        root->data=data;
        return root;
    }
    else if(root->data < data)
    {
        root->right =insert(root->right,data);
    }
    else
    {
        root->left =insert(root->left,data);

    }
};

int main()
{
    struct node *root,*head;
    int data;
    //scanf("%d",&data);
    //while(data>0)
    //{
        head=insert(root,2);
        insert(root,4);
        insert(root,1);
        inorder(head);

    //}

}
