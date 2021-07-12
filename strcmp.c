
#include <stdio.h>
#include <string.h>
int main( )
{
   char str1[ ] = "fresh" ;
   char str2[ ] = "refresh" ;
   int i, j, k ;
   i = strcmp ( str1, "reshf" ) ;
   j = strcmp ( str1, str2 ) ;
   k = strcmp ( str1, "f" ) ;
   printf ( "\n%d %d %d", i, j, k ) ;
   return 0;
}
