#include <stdio.h>
int isvowel(char chk);
int main(){
  char text[1000], chk;
  int count;
  count = 0;
  while((text[count] = getchar()) != '\n')
            count++;
  text[count] = '\0';
  count = 0;
  while ((chk = text[count]) != '\0'){
      if (isvowel(chk)){
           if((chk = text[++count]) && isvowel(chk)){
               putchar(text[count -1]);
              putchar(text[count]);
              putchar('\n');
           }
      }
      else
           ++count;
  }
  return 0;
}
int isvowel(char chk){
  if(chk == 'a' || chk == 'e' || chk == 'i' || chk == 'o' || chk == 'u')
      return 1;
  return 0;
}