#include<stdio.h>

struct create_account
{
    char first_name[50];
    char last_name[50];
    char user_name[50];
    char password[50];
    struct birthday
    {
        int day,month,year;
    }birth;
    struct Sex
    {
        int male,female;
    }sex;
};
void pass_gen(char pass[])
{
    int i=0;
    char ch;

    while(1)
    {
        ch=getch();
        if(ch==13)
            break;
        putchar('*');
        pass[i++]=ch;
    }
    pass[i]='\0';
}
int main()
{
    struct create_account user;
    char passck[50];
    char sexck[5];
    printf("Enter ur first name: \n");
    gets(user.first_name);
    printf("Enter ur last name: \n");
    gets(user.last_name);
    printf("Enter ur user name: \n");
    scanf("%s",user.user_name);
    printf("Enter ur password: \n");
    pass_gen(user.password);
    printf("\nRetype ur password:\n");
    pass_gen(passck);
    if(strcmp(user.password,passck)!=0)
    {
        printf("dont't match\n");
        return 0;
    }
    printf("\nEnter ur birthday: \n");
    printf("\tday : ");
    scanf("%d",&user.birth.day);
    printf("\tmonth  : ");
    scanf("%d",&user.birth.month);
    printf("\tYEAR : ");
    scanf("%d",&user.birth.year);
    printf("Enter Ur sex(if male press m else press f) :");
    scanf("%s",sexck);
    if(strcmp(sexck,"m")==0){
        user.sex.male=1;
        user.sex.female=0;
    }
    else if(strcmp(sexck,"f")==0){
        user.sex.male=0;
        user.sex.female=1;
    }
    else{
        printf("You have entered wrong key\n");
    }
    printf("First name: %s\n",user.first_name);
    printf("last name: %s\n",user.last_name);
    printf("User name: %s\n",user.user_name);
    printf("Password : %s\n",user.password);
    printf("Birthday : %d  %d  %d\n",user.birth.day,user.birth.month,user.birth.year);
    printf("Sex : ");
    if(user.sex.male==1)
        printf("male\n");
    if(user.sex.female==1)
        printf("Female\n");
    return 0;
}
