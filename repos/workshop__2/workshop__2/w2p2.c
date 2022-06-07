/*
*****************************************************************************
                          Workshop - #2 (P2)
Full Name  :
Student ID#:
Email      :
Section    :

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
	const double TAX = 0.13;
	const char patSize = 'S', salSize = 'M', tomSize = 'L';
	printf("Set Shirt Prices\n================");
	double Small_Shirt, Medium_Shirt, Large_Shirt; // defining variables for size of the shirt 
	printf("\nEnter the price for a SMALL shirt: $");
	scanf("%lf", &Small_Shirt); //Taking user input for the price of small shirt
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%lf", &Medium_Shirt); //Taking user input for the price of medium shirt
	printf("Enter the price for a LARGE shirt: $");
	scanf("%lf", &Large_Shirt); //Taking user input for the price of large shirt

//displaying output of entered prices

	printf("\nShirt Store Price List\n======================\n");
	printf("SMALL  : $%.2lf\n", Small_Shirt);
	printf("MEDIUM : $%.2lf\n", Medium_Shirt);
	printf("LARGE  : $%.2lf\n", Large_Shirt);

	// displaying no. of shirts for patty

	int no_of_shirts_for_patty; //declaring variable for no. of shirts for patty
	printf("\nPatty's shirt size is '%c'\n", patSize);
	printf("Number of shirts Patty is buying: ");
	scanf("%d", &no_of_shirts_for_patty); //taking input from user of no. of shirts

// displaying no. of shirts for Tommy
	int no_of_shirts_for_Tommy; //declaring variable for no. of shirts for Tommy
	printf("\nTommy's shirt size is '%c'\n", tomSize);
	printf("Number of shirts Tommy is buying: ");
	scanf("%d", &no_of_shirts_for_Tommy);

	// displaying no. of shirts for Sally
	int no_of_shirts_for_sally; //declaring variable for no. of shirts for Sally
	printf("\nSally's shirt size is '%c'\n", salSize);
	printf("Number of shirts Sally is buying: ");
	scanf("%d\n", &no_of_shirts_for_sally);

	// Patty Billing
	int patty_subtotal = no_of_shirts_for_patty * Small_Shirt * 100;
	int tax1 = (TAX * patty_subtotal) + .5;
	int patty_total = tax1 + patty_subtotal;
	// Sally Billing
	int sally_subtotal = no_of_shirts_for_sally * Medium_Shirt * 100;
	int tax2 = (TAX * sally_subtotal) + .5;
	int sally_total = tax2 + sally_subtotal;
	// Tommy Billing
	int tommy_subtotal = no_of_shirts_for_Tommy * Large_Shirt * 100;
	int tax3 = (TAX * tommy_subtotal) + .5;
	int tommy_total = tax3 + tommy_subtotal;

	printf("Customer Size Price Qty Sub-Total\tTax     Total\n");
	//printf("-------- ---- ----- --- --------- --------- ---------\n");
	//printf("Patty    %c    %.2lf %d    %.4lf   %.4lf   %.4lf", patSize, Small_Shirt, no_of_shirts_for_patty, (double)patty_subtotal / 100, (double)tax1 / 100, (double)patty_total / 100);
	//printf("\nSally    %c    %.2lf %d    %.4lf   %.4lf   %.4lf", salSize, Medium_Shirt, no_of_shirts_for_sally, (double)sally_subtotal / 100, (double)tax2 / 100, (double)sally_total / 100);
	//printf("\nTommy    %c    %.2lf %d    %.4lf   %.4lf   %.4lf", tomSize, Large_Shirt, no_of_shirts_for_Tommy, (double)tommy_subtotal / 100, (double)tax3 / 100, (double)tommy_total / 100);
	return 0;
}