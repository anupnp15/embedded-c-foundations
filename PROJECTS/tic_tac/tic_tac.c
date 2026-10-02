// Tic Tac Toe Game

/*
       o | x | o
      -----------
       x | o | x
      -----------
       o | x | o
*/

#include <stdio.h>
#include <unistd.h>

void pattern(char (*)[]);
void violation(int);
void rule(void);
void insert(int, char, char (*)[]);
int result(char (*)[]);
int duplicate(int);

int main()
{
    char a[3][3];
    int r, c, i, j;
    int l = 0;

    r = sizeof(a) / sizeof(a[0]);
    c = sizeof(a[0]) / sizeof(a[0][0]);

    // Initialize board
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            a[i][j] = ' ';
        }
    }

    printf(" ======================\n");
    printf("  WELCOME TO TIC TAC TOE\n");
    printf(" ======================\n");

    pattern(a);

    rule();

    while(1)
    {
        /* ---------------- PLAYER 1 ---------------- */

        l++;

        printf("\nPlayer 1 select position (X): ");
        scanf("%d", &i);

        if(i < 1 || i > 9 || duplicate(i))
        {
            if(i >= 1 && i <= 9 && duplicate(i))
                printf("\nxxx Duplicate number xxx\n");
            else
                printf("\nValue exceeded the range\n");

            violation(1);
            return 0;
        }

        insert(i, 'x', a);

        pattern(a);

        if(result(a))
        {
            printf("\n>>>>>> PLAYER 1 WON <<<<<<\n\n");
            return 0;
        }

        // Draw after 9 valid moves
        if(l == 9)
        {
            printf("\n>> DRAW MATCH <<\n");
            return 0;
        }


        /* ---------------- PLAYER 2 ---------------- */

        l++;

        printf("\nPlayer 2 select position (O): ");
        scanf("%d", &i);

        if(i < 1 || i > 9 || duplicate(i))
        {
            if(i >= 1 && i <= 9 && duplicate(i))
                printf("\nxxx Duplicate number xxx\n");
            else
                printf("\nValue exceeded the range\n");

            violation(0);
            return 0;
        }

        insert(i, 'o', a);

        pattern(a);

        if(result(a))
        {
            printf("\n>>>>>> PLAYER 2 WON <<<<<<\n\n");
            return 0;
        }
    }

    return 0;
}


/* --------------------------------------------------
                    CHECK RESULT
   -------------------------------------------------- */

int result(char (*a)[3])
{
    // Rows
    if(a[0][0] == a[0][1] &&
       a[0][1] == a[0][2] &&
       a[0][0] != ' ')
        return 1;

    if(a[1][0] == a[1][1] &&
       a[1][1] == a[1][2] &&
       a[1][0] != ' ')
        return 1;

    if(a[2][0] == a[2][1] &&
       a[2][1] == a[2][2] &&
       a[2][0] != ' ')
        return 1;


    // Columns
    if(a[0][0] == a[1][0] &&
       a[1][0] == a[2][0] &&
       a[0][0] != ' ')
        return 1;

    if(a[0][1] == a[1][1] &&
       a[1][1] == a[2][1] &&
       a[0][1] != ' ')
        return 1;

    if(a[0][2] == a[1][2] &&
       a[1][2] == a[2][2] &&
       a[0][2] != ' ')
        return 1;


    // Diagonal
    if(a[0][0] == a[1][1] &&
       a[1][1] == a[2][2] &&
       a[0][0] != ' ')
        return 1;

    if(a[0][2] == a[1][1] &&
       a[1][1] == a[2][0] &&
       a[0][2] != ' ')
        return 1;

    return 0;
}


/* --------------------------------------------------
                  CHECK DUPLICATE
   -------------------------------------------------- */

int duplicate(int n)
{
    static int a[10] = {0};

    if(a[n] == 1)
    {
        return 1;
    }

    a[n] = 1;

    return 0;
}


/* --------------------------------------------------
                       RULES
   -------------------------------------------------- */

void rule(void)
{
    printf("\n\n            >>>> RULES <<<<\n");

    printf(">> Players need to enter the given positions only\n\n");

    printf("       1 | 2 | 3\n");
    printf("      -----------\n");
    printf("       4 | 5 | 6\n");
    printf("      -----------\n");
    printf("       7 | 8 | 9\n\n");

    printf(">> Players don't repeat positions\n\n");

    printf(">> Violation of rules makes the opponent win\n");

    printf("\n    >> MULTIPLAYER GAME <<\n");
    printf("       Player 1 >> (X)\n");
    printf("       Player 2 >> (O)\n");

    sleep(2);
}


/* --------------------------------------------------
                     INSERT VALUE
   -------------------------------------------------- */

void insert(int i, char ch, char (*a)[3])
{
    switch(i)
    {
        case 1:
            a[0][0] = ch;
            break;

        case 2:
            a[0][1] = ch;
            break;

        case 3:
            a[0][2] = ch;
            break;

        case 4:
            a[1][0] = ch;
            break;

        case 5:
            a[1][1] = ch;
            break;

        case 6:
            a[1][2] = ch;
            break;

        case 7:
            a[2][0] = ch;
            break;

        case 8:
            a[2][1] = ch;
            break;

        case 9:
            a[2][2] = ch;
            break;
    }
}


/* --------------------------------------------------
                    VIOLATION
   -------------------------------------------------- */

void violation(int i)
{
    if(i)
    {
        printf("\nPlayer 1 violated the rule\n");
        printf("\n*** PLAYER 2 WON ***\n\n");
    }
    else
    {
        printf("\nPlayer 2 violated the rule\n");
        printf("\n*** PLAYER 1 WON ***\n\n");
    }
}


/* --------------------------------------------------
                    DISPLAY BOARD
   -------------------------------------------------- */

void pattern(char (*a)[3])
{
    printf("\n");

    printf("      %c | %c | %c\n",
           a[0][0], a[0][1], a[0][2]);

    printf("     -----------\n");

    printf("      %c | %c | %c\n",
           a[1][0], a[1][1], a[1][2]);

    printf("     -----------\n");

    printf("      %c | %c | %c\n",
           a[2][0], a[2][1], a[2][2]);

    sleep(1);
}