#include <stdio.h>

int main()
 {
     int player_1=0;
     int player_2=0;
     char roll;
     while(player_1<30 && player_2<30)
    {
     scanf("%c",&roll);

     if(roll == 'r')
     {
        srand (time(NULL));
        int n;
        n= rand();
        n = 1 + n % 6;
        player_1 = player_1 + n;
        switch (n)
        {
         case 1:
              one();
              break;
         case 2:
              two();
              break;
         case 3:
              three();
              break;
         case 4:
              four();
              break;
         case 5:
              five();
              break;
         case 6:
              six();
              break;
       }
       printf("player 1 Total = %d\n",player_1);
     }


     else if(roll == 'u')
     {
        srand (time(NULL));
        int n;
        n= rand();
        n = 1 + n % 6;
        player_2 = player_2 + n;
        switch (n)
        {
         case 1:
              one();
              break;
         case 2:
              two();
              break;
         case 3:
              three();
              break;
         case 4:
              four();
              break;
         case 5:
              five();
              break;
         case 6:
              six();
              break;
       }
       printf("Player 2 Total = %d\n",player_2);
     }
     else
     {
       printf("press 'r' or 'u' to roll the dice\n\n");
     }

       if(player_1 >= 30)
        {
            printf("!!!Player 1 is the WINNER!!!\n");
            break;
        }
        else if(player_2 >= 30)
        {
            printf("!!!Player 2 is the WINNER!!!\n");
            break;
        }
        else if(player_1 == player_2)
        {
            player_1=0;
            player_2=0;
        }

    }
}
        void one()
        {
          printf("|\n");
        }
        void two()
        {
          printf("||\n");
        }
        void three()
        {
          printf("|||\n");
        }
        void four()
        {
          printf("|V\n");
        }
        void five()
        {
          printf("V\n");
        }
        void six()
        {
          printf("V|\n");
        }
