#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int no_of_iteration, i;
    char loop_type;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");
    do
    {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loop_type, &no_of_iteration);
        if (loop_type == 'D')
        {
            if (no_of_iteration >= 3 && no_of_iteration <= 20)
            {
                i = 0;
                printf("DO-WHILE: ");
                do
                {
                    printf("D");
                    i++;
                } while (i < no_of_iteration);
                printf("\n");
            }
            else
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            printf("\n");
        }
        else if (loop_type == 'W')
        {
            if (no_of_iteration >= 3 && no_of_iteration <= 20)
            {
                i = 0;
                printf("WHILE   : ");
                while (i < no_of_iteration)
                {
                    i++;
                    printf("W");
                }
                printf("\n");
            }
            else
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            printf("\n");
        }
        else if (loop_type == 'F')
        {
            if (no_of_iteration >= 3 && no_of_iteration <= 20)
            {
                printf("FOR     : ");
                for (i = 0; i < no_of_iteration; i++)
                {
                    printf("F");
                }
                printf("\n");
            }
            else
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            printf("\n");
        }
        else if (loop_type == 'Q')
        {
            if (no_of_iteration == 0)
            {
                printf("\n+--------------------+\n");
                printf("Loop application ENDED\n");
                printf("+--------------------+\n");
            }
            else
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
        }
        else
            printf("ERROR: Invalid entered value(s)!\n\n");

    } while (loop_type != 'Q' || no_of_iteration != 0);

    return 0;
}