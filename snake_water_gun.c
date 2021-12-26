#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakewatergun(char you, char comp)
{
    //return 1 if you win
    //return -1 if you lose
    //return 0 if draw
    //conditions for draw are
    // ss
    //gg
    //ww
    if (you == comp)
    {
        return 0;
    }
    //Non draw conditions are :
    //sw
    //ws
    //sg
    //gs
    //gw
    //wg
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return -1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    int result, num;
    srand(time(0));
    num = rand() % 100 + 1;
    //printf("the num is %d\n" ,num);
    if (num < 33)
    {
        comp = 's';
    }
    else if (num > 33 && num < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
        printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
        scanf("%c", &you);
        result = snakewatergun(you, comp);
        printf("You choose %c and comp choose %c .\n", you, comp);
        if (result == 0)
        {
            printf("Game Draw\n");
        }
        else if (result == 1)
        {
            printf("You Win\n");
        }
        else
        {
            printf("You Lose\n");
        }
    return 0;
}