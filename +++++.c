#include<stdio.h>
int main()
{
	int j,i=1;
	j=10*i;
printf("%d\n",j);
j=10*i++;
printf("%d\n",j);
j=10*i++;
printf("%d\n",j);
j=10*i;
printf("%d\n",j);
j=10*++i;
printf("%d\n",j);
return 0;
}
