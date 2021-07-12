
#include <stdio.h>
int main()
{
   int *ptr, q;
   q = 50;
   ptr = &q;
   /* address of q is assigned to ptr */
   //ptr = &q;
   /* display q's value using ptr variable */
   printf("%d\n%x\n", *ptr,ptr);
   return 0;
}
