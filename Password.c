#include<stdio.h>
#include<conio.h>
#include<string.h>
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
    char password[50];
    char passwordck[50];
    printf("Give your password: ");
    pass_gen(password);
    printf("\nRepeat your password: ");
    pass_gen(passwordck);
    if(strcmp(password,passwordck)!=0)
    {
        printf("\nPassword did not match....");
        return 0;
    }
    printf("\n\nYour password is: ");
    printf("%s\n",password);
    return 0;
}
