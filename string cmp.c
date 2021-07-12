#include <stdio.h>
#include <string.h>
int main( )
{
   char str1[ ] = "dekh" ;
   char str2[ ] = "movie" ;
   int i, j, k ;
   i = strcmp ( str1, "fresh" ) ;
   j = strcmp ( str1, str2 ) ;
   k = strcmp ( str1, "f" ) ;
   printf ( "\n%d %d %d", i, j, k ) ;
   return 0;
}
