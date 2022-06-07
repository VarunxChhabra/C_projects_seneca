/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  :Varun Chhabra
Student ID#:
Email      :vchhabra1@mysenca.ca
Section    :NGG

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int times_of_loop=0, count; // declaring two different int variables
    char  iterations_for_c; // declaring one character variable as per question
    //for (times_of_loop =0; times_of_loop <100 && count == 0; times_of_loop++)
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");
    do 
       
    {
        times_of_loop;
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &iterations_for_c, &times_of_loop);
        switch (iterations_for_c)
        {
        case 'D':
            if (times_of_loop >= 3 && times_of_loop <= 20)
            {
                (count = 1);
                printf("DO-WHILE: ");
                do
                {
                    printf("D");
                } while (count++ <= times_of_loop - 1);
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            break;
        case 'W':
            if (times_of_loop >= 3 && times_of_loop <= 20)
            {
                (count = 1);
                printf("WHILE   : ");
                while (count++ <= times_of_loop)
                {
                    printf("W");
                }
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            break;
        case 'F':
            if (times_of_loop >= 3 && times_of_loop <= 20)
            {
                printf("FOR   : ");
                for (count = 1; count <= times_of_loop; count++)
                {
                    printf("F");
                }
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            break;
        case 'Q':
            if (times_of_loop == 0)
            {
                printf("\n+--------------------+\n");
                printf("Loop application ENDED\n");
                printf("+--------------------+\n");
            }
            else
            {
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
                break;
            }
        default:
            printf("ERROR: Invalid entered value(s)!\n\n");
            break;
        }
    } while (times_of_loop < 100,times_of_loop++);
    /*if (a >= 3 && a <= 20);
    (b = 1);
    do
    {
        printf("D");
    } while (b++ <= a-1);*/
     return 0;
     
}