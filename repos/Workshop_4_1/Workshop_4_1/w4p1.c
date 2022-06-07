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
    int times_of_loop = 0, count; // declaring two different int variables
    char  iterations_for_c; // declaring one character variable as per question
    //for (times_of_loop =0; times_of_loop <100 && count == 0; times_of_loop++)
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");
    do {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &iterations_for_c, &times_of_loop);
        if (iterations_for_c == 'D' && iterations_for_c >= 3 && iterations_for_c <= 20)
        {

            (count = 1);
            printf("DO-WHILE: ");
            do
            {
                printf("D");
            } while (count++ <= iterations_for_c - 1);
        }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            }
            if (iterations_for_c == 'W')
            {
                if (iterations_for_c >= 3 && iterations_for_c <= 20)
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
                if (iterations_for_c == 'F')
                {
                    if (iterations_for_c >= 3 && iterations_for_c <= 20)
                    {
                        (count = 1);
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
                    if (iterations_for_c == 'Q')
                    {
                        if (times_of_loop == 0)
                        {
                            printf("\n+--------------------+\n");
                            printf("Loop application ENDED\n");
                            printf("+--------------------+\n");
                        }
                        else
                        {
                            printf("ERROR: To quit, the number of iterations should be 0!\n\n");
                        }
                    }
                    else
                    {
                        printf("ERROR: Invalid entered value(s)!\n\n");
                    }

                }
            }
        }
    while (iterations_for_c != 'Q' || times_of_loop != 0);
        return 0;
    }
    