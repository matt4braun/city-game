#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
void Wtop();
void Wbottom();
void Etop();
void Ebottom();
void brokey();
void H1();
void H2();
void H3();
char a[1];
int text;
int rich;
int steve;
int passport;
int coat;
int pick;
int poor;
bool key;
bool bath;
bool paper;
bool bank;
bool won;
bool rock;
bool package;
bool spoon;
bool deliver;
bool belt;
bool water;
bool weed;
bool J;
int wins;
int USB;
bool cents;
bool hobo;
bool chal;
bool unlock;
int P;
int R;
int A;
int b;
int guess;
int length;
char input2[100];
char input3[100];
int WMap[] = {         //31 * 31
    0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 2,
    2, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2,
    2, 0, 1, 0, 4, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5, 0, 0, 0, 6, 0, 1, 0, 0, 2,
    2, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 4, 5, 0, 6, 4, 0, 1, 0, 0, 2,
    2, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2,
    2, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 2,
    2, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2,
    2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 2, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 2, 3, 2, 0, 0, 2, 0, 0, 0, 6, 5, 0, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 2, 0, 2, 0, 0, 2, 0, 0, 0, 5, 6, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 3, 3, 3, 3, 3, 3, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 2, 0, 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 2, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 0, 0, 4, 1, 0, 0, 0, 0, 5,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,//805
    2, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    2, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 6,

    
    
    
    
    
};
int EMap[] = {         //31 * 31
    0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0,
    2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 4, 0, 4, 0, 0, 0, 0, 2, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 0, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2,
    2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 3, 3, 3, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 2,
    2, 0, 3, 3, 3, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 2, 0, 2, 0, 2, 0, 0, 0, 0, 4, 0, 4, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 3, 3, 3, 3, 3, 3, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 5, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 6, 0, 6, 0, 5, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,//805
    3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
    5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 6,

    
    
    
    
    
};
void draw()
{

    
   /*
   length = sizeof(Map)/sizeof(Map[0]);
      for(int i = 0; i < length; i++){
          
      display[i] = Map[i];
      
      }
      */
printf("       ");
    for (int i = 0; i < 31; i++)//HEIGHT
    {

        for (int i = 0; i < 31; i++)//LENGTH
        {  
            

            
            if (WMap[b] == 0)
              printf("  ");
            else if (WMap[b] == 1)
            printf("O ");
            else if (WMap[b] == 2)
            printf("| ");
            else if (WMap[b] == 3)
            printf("_ ");
            else if (WMap[b] == 4)
            printf("o ");
            else if (WMap[b] == 5)
            printf("\\ ");
            else if (WMap[b] == 6)
            printf("/ ");
            else if (WMap[b] == 7)
            printf("�");
            else
            printf("MISSED INPUT");
            

            b++;
        }  
    printf("\n       ");

    }
    b = 0;
    
    
    
}
void Edraw()
{

    printf("       ");
    for (int i = 0; i < 31; i++)//HEIGHT
    {

        for (int i = 0; i < 31; i++)//LENGTH
        {  
            

            
            if (EMap[b] == 0)
              printf("  ");
            else if (EMap[b] == 1)
            printf("O ");
            else if (EMap[b] == 2)
            printf("| ");
            else if (EMap[b] == 3)
            printf("_ ");
            else if (EMap[b] == 4)
            printf("o ");
            else if (EMap[b] == 5)
            printf("\\ ");
            else if (EMap[b] == 6)
            printf("/ ");
            else
            printf("MISSED INPUT");
            

            b++;
        }  
    printf("\n       ");

    }
    b = 0;
   /*
   length = sizeof(Map)/sizeof(Map[0]);
      for(int i = 0; i < length; i++){
          
      display[i] = Map[i];
      
      }
      */

    
    
    
}
int main()
{
srand(time(NULL));
P = rand() % 9;
P++;
srand(time(NULL));
P = rand() % 9;
R++;
srand(time(NULL));
P = rand() % 9;
A++;
    puts("Wander around the city\n");
    getchar();
    puts("NOTE: TEXT WILL BE ERASED SOMETIMES");
    sleep(3);
Wtop();

return 0;
}
void H3()
{
    system("clear");
    puts("You are in the third room.\n");
  getchar();
   puts("There is an poor looking man in the bed\n");
  getchar();
   puts("You can also go the second house in the block.\n");
   while (a[0] != 'P' || a[0] != 'T' || a[0] != '2'){
    puts("P=talk to poor man, T=leave house, 2=leave house\n");
    scanf("%s", &a[0]);
    if (a[0] == 'P'){
        if (chal == 0){
        puts("Poor  man : I only talk to people who talk to Steve-looking people\n");
       getchar();
        a[0];
        }
        else{
            
            if (poor == 0)
            {
            puts("Guess my number.\n");
            scanf("%d", &guess);
            sleep(3);
            if (P == guess)
            {
                puts("Poor : CORRECT!");
                wins++;
                if (wins == 3)
                {
                    puts("Poor : WOW, You're really good at this.\n");
                    getchar();
                    puts("Poor : Allow me to reward you with a small token.\n");
                    getchar();
                    puts("You got a shabby coat.\n");
                    coat++;
                    getchar();
                    puts("Poor : That should help you escape this city\n");
                    
                }
                else
                {
                    puts("Poor : Now go guess the other's numbers\n");
                    getchar();
                }
            }
            else
            {
                puts("Poor : WRONG!\n");
                getchar();
                puts("Poor : you have lost your one and only chance to win. Reset the game bozo.\n");
                getchar();
                
            }
            steve++;
        }
        else
        {
            puts("Steve\" : You've already guessed fool\n");
            getchar();
        }
        
            
        }
    }

    else if (a[0] == 'T'){
       getchar();
    Etop();
    }
    else if (a[0] == '2'){
       getchar();
    H2();
        
    }  
      
      
  }

      
}
void H2()
{
    system("clear");
   puts("You are in the second room\n");
  getchar();
   puts("There is a steve-looking man in the bed\n");
  getchar();
   puts("You can also go the 3rd or rich mans room in the row.\n");
   while (a[0] != 'S' || a[0] != 'R' || a[0] != 'T' || a[0] != '3'){
    puts("S=talk to steve, T=leave house, R (rich mans house), 3(3rd house)  \n");
    scanf("%s", &a[0]);
    if (a[0] == 'S'){
        if (chal == 0){
        puts("Steve: I only talk to people who talk to rich people\n");
       getchar();
        a[0];
        }
        else{
            
            if (steve == 0)
            {
            puts("Guess my number.\n");
            scanf("%d", &guess);
            sleep(3);
            if (A == guess)
            {
                puts("Steve! : CORRECT!");
                wins++;
                if (wins == 3)
                {
                    puts("Steve. : WOW, You're really good at this.\n");
                    getchar();
                    puts("Steve; : Allow me to reward you with a small token.\n");
                    getchar();
                    puts("You got a pickaxe.\n");
                    pick++;
                    getchar();
                    puts("Steve, : That should help you escape this city\n");
                    
                }
                else
                {
                    puts("Steve. : Now go guess the other 2 peoples' numbers\n");
                    getchar();
                }
            }
            else
            {
                puts("Steve : WRONG!\n");
                getchar();
                puts("Steve- : you have lost your one and only chance to win. Reset the game bozo.\n");
                getchar();
                
            }
            steve++;
        }
        else
        {
            puts("Steve\" : You've already guessed fool\n");
            getchar();
        }
        
            
        }
    }

    else if (a[0] == 'T'){
       getchar();
    Etop();
    }
    else if (a[0] == '3'){
       getchar();
    H3();
        
    }  
      
      
  }

    
 } 
void H1()
{
    system("clear");
   puts("You are in the  house of\n");
  getchar();
   puts("There is a rich man in the bed\n");
  getchar();
   puts("You can also go through a door to a second room\n");
   while (a[0] != 'R' || a[0] != '2' || a[0] != 'T'){
    puts("R=talk to rich man, T=go outside, 2=second room  \n");
    scanf("%s", &a[0]);
    if (a[0] == 'R'){
        if (chal == 0)
        {
            puts("Rich man : I only talk to rich people\n");
           getchar();
            a[0];
            if (cents == 1)
            {
                puts("Rich man : ........\n");
               getchar();
               getchar();
                puts("Rich : IS THAT 25 CENTS?\n");
               getchar();
                puts("Rich : ZOO-WEE MAMA you are LOADED.\n");
               getchar();
                puts("Rich : If you pay me those 25 cents i'll let you play a game!\n");
               getchar();
                puts("Rich : But i must warn you. If you fail, this run will be DEAD.\n");
               getchar();
                puts("Rich : You could still wander, but you will be doomed to a half-life FOREVER.\n");
               getchar();
                puts("Rich : The rules of the game are simple.\n");
               getchar();
                puts("Rich : Each of the people in the houses have a digit. You have to guess all 3 of them.\n");
               getchar();
                puts("Rich : There are no hints in this house. You might find a hint outside of this house though.\n");
               getchar();
                puts("Rich : Do you still wish to play?(Y or N)");
                scanf("%s", &a[0]);
                if (a[0] == 'Y')
                {
                    puts("Are you sure? (Y or N)");
                    scanf("%s", &a[0]);
                    if (a[0] == 'Y')
                    {
                        puts("Don't Talk to me again until you're ready to guess my number\n");
                        cents--;
                        chal++;
                       getchar();
                    }
                    else
                    {
                        puts("Rich : Good choice.\n");
                        getchar();
                    }
                }
                else
                {
                puts("Rich : good choice.\n");
               getchar();
                }
            
            }   
        }
        else
        {
            if (rich == 0)
            {
            puts("Guess my number.\n");
            scanf("%d", &guess);
            sleep(3);
            if (R == guess)
            {
                puts("Rich : CORRECT!");
                wins++;
                if (wins == 3)
                {
                    puts("Rich : WOW, You're really good at this.\n");
                    getchar();
                    puts("Rich : Allow me to reward you with a small token.\n");
                    getchar();
                    puts("You got a passport.\n");
                    passport++;
                    getchar();
                    puts("Rich : That should help you escape this city\n");
                    
                }
                else
                {
                    puts("Rich : Now guess the other 2 peoples' numbers\n");
                    getchar();
                }
            }
            else
            {
                puts("Rich : WRONG!\n");
                getchar();
                puts("Rich : you have lost your one and only chance to win. Reset the game bozo.\n");
                getchar();
                
            }
            rich++;
        }
        else
        {
            puts("Rich : You've already guessed fool\n");
            getchar();
        }
        }
        
    }

    else if (a[0] == 'T'){
       getchar();
    Etop();
    }
    else if (a[0] == '2'){
       getchar();
    H2();
        
    }  
      
      
  }

    
}
int hotel()
{
    system("clear");
    puts("landlord : Welcome to our hotel\n");
   getchar();
    puts("landlord : You cant buy a room but feel free to explore!\n");
   getchar();
    a[0];
    while (a[0] != 'B' || a[0] != '1' || a[0] != '2' || a[0] != '3' || a[0] != 'R'){
        puts("B = outside, 1 = room 1, 2 = room 2, 3 = room 3, R = go to the bathroom\n");
        scanf("%s", &a[0]);
        if (a[0] == 'B'){
           getchar();
            
            Wbottom();
        }
        else if (a[0] == '1')
        {
            puts("Inside the room there is a poster for a local band, but nothing else\n");
           getchar();
            a[0] = '0';
        }
    
    
        else if (a[0] == '2')
        {
            if (key != 1){
                puts("Its locked and you dont have the key\n");
               getchar();
                a[0] = '0';
            }
            else {
                if (won == 0){
            puts("Inside the room you see Matt, the game developer\n");
           getchar();
            puts("Matt : Congrats on beating my game\n");
           getchar();
            puts("Matt : I hope to add more features later\n");
           getchar();
            puts("Matt : Soon there will be settings and such\n");
           getchar();
            puts("Matt : You have completed the first chapter.\n");
           getchar();
            puts("Matt : Bye, and remember, I am better at C then Omar\n");
           getchar();
            puts("Matt gave you a plastic spoon\n");
            spoon = 1;
            a[0] = '0';
            won = 1;
                }
            else{
            puts("Matt : You've already finshed this section. now leave my room, you creep.\n");
           getchar();
            a[0] = '0';
            }
            }
        
    }
    
    
    else if (a[0] == '3')
    {
        puts("Inside the room there is a man changing.\n");
       getchar();
        puts("Man : GET OUT GET OUT GET OUT!\n");
       getchar();
        if (belt == 0)
        puts("As you leave you hear, \"I should've gotten the deluxe room with the lock\"\n");

        else if (belt == -1)
            puts ("Man : This belt is too small anyways. You scammed me.\n");

        else{
            puts("Man : Actually.... is that a belt you have?\n");
           getchar();
            puts("Man : I'll give you this water for it.\n");
           getchar();
            puts("You gave the belt and got a bottle of water.\n");
            water++;
            belt = -1;
            }
           getchar();
        a[0] = '0';
    }
    
    
    else if (a[0] == 'R')
    {
        if (bath != 1)
        {
            puts("You try to open the door to the bathroom but find it's occupied.\n");
           getchar();
            puts("But as you leave you hear a man on the other side saying : \n");

           getchar();
            puts("Man : Do you have any toilet paper?\n");
           getchar();
            puts("Man : tbh i would take any kind of paper\n");
           getchar();
            if (paper != 1)
            {
                puts("Man : ah nvm, you dont have any.\n");
               getchar();
                a[0] = '0';
            }
            else
            {
                puts("you give the poor man your banknote\n");
               getchar();
                puts("Man : AHHHHH thank you......\n");
               getchar();
                puts("Man : I tried using a key to clean myself but it didnt work.\n");
               getchar();
                puts("Man : You can have it\n");
               getchar();
                key++;
                bath++;
                puts("You got a key!\n");
               getchar();
                puts("Man : dont wait on me, my butt has fused with the toilet seat.\n");
               getchar();
            }
        }
        else{
            puts("Man : im never coming out of here\n");
           getchar();
        }
        
    }
    }
}
void Immigration()
{
    system("clear");
    puts("You enter the immigration offices.\n");
   getchar();
    puts("Secretary : We're not open yet");
   getchar();
   if (pick == 0 && passport == 0 & coat == 0){
    puts("You leave.\n");
   getchar();
   }
   else if (pick == 1){
       puts("You whip out your pickaxe and look threateningly at the secretary");
   }
}
void Wtop()
{
    system("clear");
  puts("You're in the top of the city (west)\n");
 getchar();
  puts("There are 2 NPCs. Juggling man and businessman\n");
 getchar();
  puts("You can also head to the bottom of the city\n");
 getchar();

  while (a[0] != '1' || a[0] != '2' || a[0] != 'B'){
    puts("1, 2, or B, M(map)\n");
    scanf("%s", &a[0]);
    if (a[0] == '1'){
        if (chal == 0)
        {
            puts("Juggler : What do termites eat for breakfast?\n");
           getchar();
            puts("Juggler : Oakmeal. hyuk hyuk hyuk!\n");
           getchar();
            
        }
        else{
            int added = P+R+A;
            printf("Juggler : I hear all 3 digits added is %d\n\n", added);
           getchar();
        }
    }
    else if (a[0] == '2'){
        puts("Businessman : Out the way. I got business to do.\n");
       getchar();
        if (package == 1){
            puts("Business : Hm? What's this? You have a package for me?.\n");
           getchar();
            puts("Business : That idiot miner! He thinks this is a precious gem! ITS GRANITE.\n");
           getchar();
            puts("Business : here you go kid, go throw it a window or something.\n");
           getchar();
            puts("You got a rock!\n");
            rock++;
            
        }
        
    }
    else if (a[0] == 'B'){
       getchar();
    Wbottom();
    }
    else if (a[0] == 'M'){

      draw();
    puts("Map of the city-west. (Top and Bottom)\n");
   getchar();
        
    }  
      
      
  }
}
void Wbottom()
{
    system("clear");
    if (spoon == 1){
puts("as you leave the hotel you accidentaly drop your spoon.\n");
   getchar();
    puts("You swear and throw the broken fragments at the mayor.\n");
   getchar();
    puts("He pulls out his Colt 49 and shoots at you, but, hits the banker instead.\n");
   getchar();
    puts("He, in turn, pulls out his Glock 17 and shoots at the mayor.\n");
   getchar();
    puts("As the situation escalates, you see the janitor break down and run through a secret compartment in the wall.\n");
   getchar();
   getchar();
    puts("You follow him into the east half of the city.\n");
   getchar();
    spoon--;
    WMap[805] = 0;
    unlock = 1;
    Ebottom();

    }
    puts("You're in the bottom of the city (west)\n");
   getchar();
    puts ("NPCs 3 mayor banker janitor\n");
   getchar();
    puts("Building : hotel\n");
   getchar();
    while (a[0] != '1' || a[0] != '2' || a[0] != '3' || a[0] != 'T' || a[0] != 'H' || a[0] != 'B'){
    puts("1, 2, 3, T, H, M(map)\n");
    if (unlock == 1)
    {
        puts("B to go to bottom-east of city\n");
    }
    scanf("%s", &a[0]);
    if (a[0] == '1'){
        if (chal == 0)
        {
        puts("Mayor : Nice city isnt it!\n");
       getchar();
        puts("Mayor : tbh im using it as a money-laundering scheme\n");
       getchar();
        }
        else
        {
            int mult = P*R*A;
            printf("Mayor : I hear all 3 numbers multiplied is %d\n\n", mult);
           getchar();
        }
    }
    else if (a[0] == 'H'){
       getchar();
        hotel();
    }
    else if (a[0] == 'B' && unlock == 1)
    {
        if (won == 1){
       getchar();
        Ebottom();
        }
    }
    else if (a[0] == 'B')
    {
        a[0];
    }
    else if (a[0] == '2'){
        if (bank != 1){
          puts("banker : Hey there!\n");
               getchar();
                puts("banker : If you can answer my riddle you can join my bank!\n");
               getchar();
                puts("bank : What do termites eat for breakfast? (ALL LOWERCASE)\n");
                scanf("%s", input2);
                if (strcmp(input2, "oakmeal")==0 )
                {
                    puts("bank : WOW how did you know that?\n");
                   getchar();
                    puts("bank : Well then answer my last question...\n");
                   getchar();
                    puts("bank : what food item did the janitor eat yesterday? (1 word all LOWERCASE)\n");
                    scanf("%s", input3);
                    if (strcmp(input3, "burrito")==0)
                    {
                        puts("bank : Nice job!\n");
                        puts("bank : Well here's a welcome gift to my bank!\n");
                       getchar();
                        puts("You got a banknote!\n");
                        paper++;
                        bank++;
                    }
                    else
                        puts("bank : WRONG\n");
                }
                else
                    puts("bank : WRONG\n");
            }
            else{
                puts("banker : We dont have any money yet. That banknote is worthless\n\n");
               getchar();
            }
    }

    
        
        
        
        
        
        
    
    else if (a[0] == '3'){
        
        if (J == 0 ){
            if (weed == 0){
        puts("Janitor : Hey little man!\n");
       getchar();
        puts("janitor : Welcome to the big city!\n");
       getchar();
        puts("janitor : You would not beleive what these people throw away!\n");
       getchar();
        puts ("janitor : Just yesterday i found and ate a half-eaten burrito\n");
       getchar();
        
            }
        else{
        puts("Janitor : Man, that burrito did NOT agree with my stomach.\n");
       getchar();
        puts("Janitor : Got any medicine to fix up my stomach? (Y or N)\n");
        scanf("%s", &a[0]);
        if (a[0] == 'Y'){
            if (weed == 0)
                puts("Janitor : Dont lie to me. you dont have any medicine.\n");
        
            else{
                puts("You give the man your weed\n");
               getchar();
                puts("Janitor : WOW how did you know I liked this stuff! ");
               getchar();
                puts("Janitor : You can have this. I tried smoking it but that did'nt turn out well.\n");
               getchar();
                puts("You got a male USB port.\n");
               getchar();
                USB = 1;
                J++;
                printf("%d", USB);
            }
        }
        else{
            puts("Janitor : Then dont waste my time.\n");
           getchar();
        }
        }
        }
        else{
        puts("Janitor : That weed goes CRAZY man");
        }
    }
    else if (a[0] == 'T'){
       getchar();
        Wtop();
    }
    else if (a[0] == 'M'){

      draw();
    puts("Map of the city-west. (Top and Bottom)\n");
   getchar();
        
    } 
}
}
void Ebottom()
{
    system("clear");
    puts("You are in the bottom of the city (east).\n");
   getchar();
    puts("NPCs 3. Rock man, Fish man, plant man.\n");
   getchar();
    puts("Buildings: Immigration offices.\n");
   getchar();
    while (a[0] != '1' || a[0] != '2' || a[0] != '3' || a[0] != 'B' || a[0] != 'T' || a[0] != 'M'){
    puts("1, 2, 3, B, T, I, M");
    scanf("%s", &a[0]);
    if (a[0] == '1'){
        if (rock == 0){
        puts("Rock Man : I have come from the mountains of the north.\n");
       getchar();
        puts("Rock : I wish to eat the most delectable rocks this city has.\n");
       getchar();
        puts("Rock : Sadly i have to get through immigration firsy.\n");
       getchar();
        puts("Rock : But you know what they say. Its about drive its about power.\nWe stay hungry we devour\nPut in the work put in the hours\nAnd take whats ours.\n");
        a[0];
        }
        else {
            puts("Rock Man : Nice...... chunk of granite you got there...\n");
           getchar();
            puts("Rock : Mind if......");
           getchar();
            puts("      I have a lick?\n");
           getchar();
            puts("You give him the rock\n");
           getchar();
            puts("Rock : Thanks. I was getting hungry.\n");
           getchar();
            puts("Rock : You can have this if you want.\n");
           getchar();
            puts("You get a belt!\n");
           getchar();
            belt++;
            rock--;
            puts("Rock : I dont even wear pants. I really dont need that");
           getchar();
            
            
        }
        }
    else if (a[0] == '2'){
        if (chal == 0)
        {
            if (water == 1){
                puts("Fish Man : Is that water??");
                getchar();
                puts("Fish : The low-quality stuff. dont waste my time.");
                getchar();
            }
            puts("Fish Man : I have come from the ocean of the west.\n");
           getchar();
            puts("Fish : Its so dry in this city. I could really use a drink.\n");
        }
        else
        {
            int sub = R-P-A;
            printf("Fish : I hear Rich-Average-Poor = %d\n\n", sub);
           getchar();
        }
        
    }
    else if (a[0] == 'M'){
        Edraw();
        puts("Map of the city (east). (Top and Bottom)\n");
       getchar();
        
    }
    else if (a[0] == '3'){
        if (water == 0){
        puts("Plant Man : I aint even gonna cap. I am so high rn.\n");
       getchar();
        puts("Plant : on the way to the city i had a bit too much fun in the marijuana around my forest.\n");
       getchar();
        puts("Plant : If you're wondering, i come from the forest in the south.\n");
        }
        else {
        puts("Plant : Is that some water?\n");
       getchar();
        puts("Plant : All the drugs i took really dried my throat out. I'll give you some weed if you let me drink that water.\n");
       getchar();
        weed++;
        puts("You got weed! Dont do drugs kids. They dry out your throat.\n");
       getchar();
        
        
            
            
            
        }
    }
    else if (a[0] == 'B'){
       getchar();
    Wbottom();
    }
    else if (a[0] == 'T'){
       getchar();
        Etop();
    }
    else if (a[0] == 'I'){
       getchar();
    Immigration();    
        
    
    }
  }
}
void Etop()
{
    system("clear");
    puts("You are in the top of the city (east)\n");
   getchar();
    puts("2 npcs : hobo and miner\n");
   getchar();
    puts("Buildings : a  house\n");
   getchar();
    while (a[0] != '1' || a[0] != '2' || a[0] != 'B' || a[0] != 'M' || a[0] != 'H'){
    puts("1, 2, B, H, M(map)\n");
    scanf("%s", &a[0]);
    if (a[0] == '1'){
        if (hobo == 0){
            puts("Hobo : I've been saving up all my money to buy something in particular...\n");
            getchar();
            puts("Hobo : Do you have it? \n");
            getchar();
            if (USB == 1){
                puts("The Hobo smells the air.\n");
                getchar();
                puts("Hobo : Yes... you have it\n");
                getchar();
                puts("Hobo : Give me it.\n");
                getchar();
                puts("You give the hobo the USB drive.\n");
                getchar();
                puts("Hobo : FINALLY AT LAST.\n ");
                getchar();
                puts("Hobo : I have regained my lost object!");
                getchar();
                puts("  5 terrabytes of anime and NSFW content!\n");
                getchar();
                puts("Hobo : Please. take my life savings. It's the least i can do.\n");
                getchar();
                cents++;
                hobo++;
                USB--;
                puts("The hobo gave you 25 cents.\n");
                getchar();
        puts("Hobo : spend it wisely.\n");
       getchar();
        }
        }
        else {
            puts("Hobo : Now i just need a computer with a USB port...\n");
           getchar();
        }
    }
    else if (a[0] == '2'){
        if (deliver == 0 ){
            puts("Miner : Well hi there little boy!\n");
           getchar();
            puts("Miner : I work for the businessman in the west.\n");
           getchar();
            puts("Miner : Would you mind delivering a package for me?\n");
           getchar();
            puts("Miner : Take this to him.\n");
           getchar();
            puts("You got a package!");
            package++;
            deliver++;
            a[0];
        }
        else{ 
            puts("Miner : Did you deliver my package? Was the boss impressed?\n");
           getchar();
            
        }
    }
    else if (a[0] == 'B'){
       getchar();
        Ebottom();
    }
    else if (a[0] == 'M'){
        Edraw();
        puts("Map of the city (east). (Top and Bottom)\n");
       getchar();
        
    }  
     else if (a[0] == 'H'){
         H1();
     }
         
      
  }
}






















