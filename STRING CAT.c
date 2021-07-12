#include <stdio.h>
#include <string.h>

int main( )
{
   char source[ ] = " fresh2refresh" ;
   char target[ ]= " C tutorial" ;

   printf ( "\nSource string = %s", source ) ;
   printf ( "\nTarget string = %s", target ) ;

   strcat ( source,target ) ;

   printf ( "\nTarget string after strcat( ) = %s", source ) ;
}
