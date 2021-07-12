#include<stdio.h>
struct birthday
    {
        int day,month,year;
    };
    struct Sex
    {
        int male,female;
    };
struct Student
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct Sex sex;
};
struct Teacher
{
    char first_name[50];
    char last_name[50];
    struct birthday birth;
    struct Sex sex;
    int salary;
};
int main()
{
    struct create_account user;
    char passck[50];
    char sexck[5];
    printf("Enter ur first name: \n");
    gets(user.first_name);
    printf("Enter ur last name: \n");
    gets(user.last_name);
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

