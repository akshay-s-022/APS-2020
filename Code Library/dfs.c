#include<stdio.h>
#include<stdlib.h>
void print_adjacency(int a[100][100],int n);
void DFS(int a[100][100],int visited[100],int sv,int v);
void reconstruct();
int a[100][100];
int main()
{
    int visited[100],i,v,e,u1,v1,option;
    printf("Enter the number of vertices : ");
    scanf("%d",&v);

    printf("Enter the number of edges : ");
    scanf("%d",&e);

    for(i=0;i<e;i++)
    {
        printf("Enter the vertices (u,v) : ");
        scanf("%d %d",&u1,&v1);
        a[u1][v1]=1;
        a[v1][u1]=1;

    }
    while(option!=4){
            printf("\n1.Adjacency matrix \n2.DFS \n3.Reconstruct the graph \n");
            for(i=0;i<v;i++)
            {
                visited[i]=0;
            }
        printf("Enter the option :");
        scanf("%d",&option);

        switch(option)
        {
            case 1:print_adjacency(a,v);
                break;
            case 2:DFS(a,visited,0,v);

                break;
            case 3:reconstruct();
                break;
            case 4:exit(0);
        }
    }
}


void DFS(int a[100][100],int visited[100],int sv,int v)
{
    int i;
    printf("%d\n",sv);
    visited[sv]=1;
    for(i=0;i<v;i++)
    {
    if(i==sv)
        continue;
    else
    {
        if(a[sv][i]==1 & !visited[i]){
        DFS(a,visited,i,v);
        }
    }
    }
}



void print_adjacency(int a[100][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void reconstruct()
{
    int u1,v1,i,e,v;
    printf("Enter the number of vertices : ");
    scanf("%d",&v);

    printf("Enter the number of edges : ");
    scanf("%d",&e);

    for(i=0;i<e;i++)
    {
        printf("Enter the vertices (u,v) : ");
        scanf("%d %d",&u1,&v1);
        a[u1][v1]=1;
        a[v1][u1]=1;

    }
}

/*int func(int a[3][3])
{
    int i,j,v=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
        a[i][j]+=1;
    }
    }
    return a;
}

int main()
{
    int a[]={{1,2,3},{4,5,6},{7,8,9}},i,*z,j;
    z=func(a);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d\t",(*(z+i)+j));
    }
    printf("\n");
}
}*/
