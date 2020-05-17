#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct cricket
{
    char fname[20];
    char lname[20];
    char tname[20];
    float bavg;
};
void add_player_file(FILE *,struct cricket c);
void sort_player_team(FILE *,char *);
void sort_player_batavg(FILE *);
void search_player_name(FILE *,char *);
void display_player_file(FILE *);



int main()
{
    FILE *fp;
    struct cricket k;
    int choice;
    char dummy_name[20];
    while(1)
    {
        printf("\n");
        printf("\nEnter choice ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:printf("Enter the player first name ");
                   scanf("%s",k.fname);
                   printf("Enter the player last name ");
                   scanf("%s",k.lname);
                   printf("Enter the player team name ");
                   scanf("%s",k.tname);
                   printf("Enter the player batting average ");
                   scanf("%s",&k.bavg);
                   fp=fopen("player_records.txt","a");
                   if(fp==NULL)
                   {
                       printf("Cannot open file ");
                       exit(0);
                   }
                       add_player_file(fp,k);
                       fclose(fp);
                       break;

            case 2:printf("Enter team name to be stored ");
                   scanf("%s",dummy_name);
                   fp=fopen("player_records.txt","r");
                    if(fp==NULL)
                   {
                       printf("Cannot open file ");
                       exit(0);
                   }
                   sort_player_team(fp,dummy_name);
                   fclose(fp);
                   break;

            case 3: fp=fopen("player_records.txt","r");
                    if(fp==NULL)
                   {
                       printf("Cannot open file ");
                       exit(0);
                   }
                   sort_player_batavg(fp);
                   fclose(fp);
                   break;

            case 4:printf("Enter the first name or last name to be searched ");
                   scanf("%s",dummy_name);
                    fp=fopen("player_records.txt","r");
                    if(fp==NULL)
                   {
                       printf("Cannot open file ");
                       exit(0);
                   }
                   search_player_name(fp,dummy_name);
                   break;

            case 5: fp=fopen("player_records.txt","r");
                    if(fp==NULL)
                   {
                       printf("Cannot open file ");
                       exit(0);
                   }
                   display_player_file(fp);
                   fclose(fp);
                   break;

            case 6:printf("We are leaving ");
                   exit(0);
                   break;

            default:printf("Invalid choice\n");
                    break;
        }
    }
}

void add_player_file(FILE *l,struct cricket c)
{
    fprintf(l,"%s\t%s\t%s\t%f\t",c.fname,c.lname,c.tname,c.bavg);

}

void sort_player_team(FILE *m,char *t)
{
    int h;
    struct cricket j;
    printf("TEAM\t%s\t",t);

    while(fscanf(m,"%s%s%s%f",j.fname,j.lname,j.tname,&j.bavg)!=EOF)
    {
        if((strcmp(j.tname,t))==0)
      printf("\n%s\t%s\t%f",j.fname,j.lname,j.bavg);
    }
}



void sort_player_batavg(FILE *n)
{
    {


    struct cricket *mn,*t;
    struct cricket j;
    int i=0,k,m;

      while(fscanf(n,"%s%s%s%f",j.fname,j.lname,j.tname,&j.bavg)!=EOF)
      {
          if(i==0)
          {
            mn=t=(struct cricket *)malloc(sizeof(struct cricket));
          }
          else
            t=(struct cricket *)realloc(t,sizeof(struct cricket));
      }
      i++;
struct cricket temp;
for(k=0;k<i;k++)
{
    for(m=k+1;m<i;m++)
    {
        if(t[m].bavg>t[k].bavg)
        {
            temp=t[k];
            t[k]=t[m];
            t[m]=temp;
        }
        }
    }
for(k=0;k<i;k++)
{
    printf("\n\t%s\t%s\t%s\t%f",(mn+k)->fname,(mn+k)->lname,(mn+k)->tname,(mn+k)->bavg);
}
}

void search_player_name(FILE *h,char *p)
{
    struct cricket t;
     while(fscanf(h,"%s%s%s%f",t.fname,t.lname,t.tname,&t.bavg)!=EOF)
      {
          if((strcmp(t.fname,p)==0) || (strcmp(t.lname,p)==0))
          {


     printf("Found\n ");
      printf("\n%s\t%s\t%s\t%f",t.fname,t.lname,t.tname,t.bavg);
      }
}
}
}
void display_player_file(FILE *m)
{
    printf("I am here\n ");
    struct cricket t;
     while(fscanf(m,"%s%s%s%f",t.fname,t.lname,t.tname,&t.bavg)!=EOF)
     {
         printf("\n%s\t%s\t%s\t%f",t.fname,t.lname,t.tname,t.bavg);
     }

}


