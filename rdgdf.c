#include<stdio.h>
//#include<conio.h>
#include<string.h>
//#include<stdlib.h>



char date[20];
char uname[20];
char bname[20];
char mno[15];
int cost;
int n,i;
char dat[20];
char unam[20];
char bnam[20];
char mn[15];
int cos;


void write()
{
   FILE *fp;
   //char dat[100];
   //char unam[100];
   //char bnam[100];

   //long int cos;
   printf("\nEnter Date::");
   scanf("%s",dat);
   printf("Enter Name of customer::");
   scanf("%s",unam);
   printf("Enter mobile no::");
   scanf("%s",mn);
   printf("Enter name of book ::");
   scanf("%s",bnam);
   printf("Enter cost of book ::");
   scanf("%d",&cos);

   fp=fopen("book.txt","a");

   fprintf(fp,"%s%s%s%s%d\n",dat,unam,mn,bnam,cos);
   printf("\n\t\ndata written successfully!!!!");
   fclose(fp);
   getch();
}



void display(char da[])
{
    FILE *fp;
    int res;
    fp=fopen("book.txt","w");
    while(fscanf(fp,"%s%s%s%s%d\n",date,unam,mn,bnam,&cos)!=EOF)
    {
        res=strcmp(date,da);
        if(res==0)
        {
            printf("\n\nCustomer name=%s",unam);
            printf("\nmobile number=%s",mn);
            printf("\nBook name=%s",bnam);
            printf("\nBook cost=%d",cos);
        }

        if(res==1)
        {
            printf("No record is found");
        }
    }

    fclose(fp);
    //getch();
}
void main()
{
    int cho;
    char lm[20];
    system("COLOR 79 ");

    do
    {
        printf("\n****welcome to THE BOOKSHOP of PARTHA_PRATIM_MAZUMDER****\n");
        printf("\npress<1> to create entry for books");
        printf("\npress<2> to display on specific date");
        printf("\npress<0> to exit");

        printf("\n\nEnter Choice::");
        scanf("%d",&cho);
        switch(cho)
        {
            case 1:
            {
            write();
            printf("data writen successfully");
            break;
            }
            case 2:
            {
            printf("\nEnter Date::");
            scanf("%s",lm);

            display (lm);
            break;
            }
            case 0:
            {
                exit(0);
            }

            default:
                printf("\ninvalid selection");
        }


    }
    while(cho!=0);
    getch();
}
