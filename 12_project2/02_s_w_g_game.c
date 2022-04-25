#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you loss and 0 if draw

    // condition for draw
    // cases covered
    // ss
    // gg
    // ww
    if (you == comp)
    {
        return 0;
    }

    // non draw condition
    // cases coverd
    // sg
    // gs
    // sw
    // ws
    // gw
    // wg

    if (you == 's' && comp == 'g')
    { // yaha hm 'snake' chuna or computer 'gun' chuna to snake ko gun sai mar degai to yaha hm loss kar jyigai islye -1 return kariga
        return -1;
    }
    else if (you == 'g' && comp == 's')
    { // yaha hm 'gun' chuna or computer 'snake' chuna to yaha hm gun sai snake ko mar degai or hm win ho jyigao  islye 1 return kar raha hai
        return 1;
    }

    if (you == 's' && comp == 'w')
    { // snake water pi jyiga islye 1 return kariga
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 'w')
    { // water mai gun dub jyiga islye -1 return kar raha hai
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}

int main()
{
    char you, comp; // yaha hm 2 charcter banya ak you dusra computer(comp)
    srand(time(0)); // yaha ak randum number genrate kiya
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("enter 's' for snake, 'w' for water , 'g' for gun\n");
    scanf("%c", &you);

    int result = snakeWaterGun(you, comp);
    printf("you chose %c and computer chose %c:", you, comp);
    if (result == 0)
    {
        printf("game draw\n");
    }
    else if (result == 1)
    {
        printf("you win\n");
    }
    else
    {
        printf("you loss");
    }

    return 0;
}