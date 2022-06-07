/*
*****************************************************************************
						  Workshop - #2 (Part2)
Full Name  : Varun Chhabra
Student ID#: 170279210
Email      : vchhabra1@myseneca.ca
Section    : NGG

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
	scanf("%d", &no_of_shirts_for_sally);
	printf("\n");

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
//Totaling
	int total_of_sub_total = patty_subtotal + sally_subtotal + tommy_subtotal;
	int total_of_taxes = tax1 + tax2 + tax3;
	int final_total = patty_total + sally_total + tommy_total;

//Output of billing
	printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
	printf("-------- ---- ----- --- --------- --------- ---------\n");
	printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, Small_Shirt, no_of_shirts_for_patty, (double)patty_subtotal / 100, (double)tax1 / 100, (double)patty_total / 100);
	printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, Medium_Shirt, no_of_shirts_for_sally, (double)sally_subtotal / 100, (double)tax2 / 100, (double)sally_total / 100);
	printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, Large_Shirt, no_of_shirts_for_Tommy, (double)tommy_subtotal / 100, (double)tax3 / 100, (double)tommy_total / 100);
	printf("-------- ---- ----- --- --------- --------- ---------\n");
	printf("%33.4lf %9.4lf %9.4lf\n",(double)total_of_sub_total/100,(double)total_of_taxes/100,(double)final_total/100);
	
//Sales Excluding Taxes

	printf("\nDaily retail sales represented by coins\n=======================================\n");
	printf("\nSales EXCLUDING tax\n");
	printf("Coin     Qty  Balance\n");
	printf("-------- --- ---------\n");
	printf("              %.4lf\n", (double)total_of_sub_total / 100);

//Toonies concept

	int Amount = total_of_sub_total/2; //This is because I need to display the amount in dollars
	int remainder = total_of_sub_total%200; //This is because I need to display the cents
    printf("Toonies   %d   %.4lf\n",Amount/100, (double)remainder/100);

//Loonies concept
	int loonies = remainder / 100; //because the amount is present in cents
	int loonies_remainder = remainder%100; 
	printf("Loonies     %d   %.4lf\n", loonies, (double)loonies_remainder/100);

//Quaters concept
	int quaters = (loonies_remainder * 100) / 25; //converting .25 to 250 to make calculation easy
	int quaters_reaminder =  loonies_remainder % 25; //
	printf("Quarters    %d   %.4lf\n", quaters/100, (double)quaters_reaminder/100);

//Dimes concept
	int dimes = (quaters_reaminder) / 10;
	int dimes_remainder = quaters_reaminder % 10;
	printf("Dimes       %d   %.4lf\n", dimes/10, (double)dimes_remainder /100);

//Nickels concept
	int nickels = (dimes_remainder) / 5;
	int nickels_remainder = dimes_remainder % 5;
	printf("Nickels     %d   %.4lf\n", nickels, (double)nickels_remainder/100);
	
//Pennies concept
	int pennies = (nickels_remainder) / 1;
	int pennies_remainder = (nickels_remainder) % 1;
	printf("Pennies     %d   %.4lf\n", pennies, (double)pennies_remainder / 100);

// avg cost
	int total_no_of_shirts = no_of_shirts_for_patty + no_of_shirts_for_sally + no_of_shirts_for_Tommy;
	int avg_cost = ((total_of_sub_total * 1000) / total_no_of_shirts);
	printf("\nAverage cost/shirt: $%.4lf\n", (double)avg_cost/100000)+.005;
	printf("\n");
// Sales including Tax
	printf("Sales INCLUDING tax\n");
	printf("Coin     Qty   Balance\n");
	printf("-------- --- ---------\n");
	printf("              %.4lf\n", (double)final_total/100);

// Toonies
	int Amount_with_tax = final_total / 2; //This is because I need to display the amount in dollars
	int remainder_with_tax = final_total % 200; //This is because I need to display the cents
	printf("Toonies  %d    %.4lf\n", Amount_with_tax / 100, (double)remainder_with_tax / 100);

// Loonies
	int loonies_with_tax = remainder_with_tax / 100; //because the amount is present in cents
	int loonies_remainder_with_tax = remainder_with_tax % 100;
	printf("Loonies    %d    %.4lf\n", loonies_with_tax, (double)loonies_remainder_with_tax / 100);
	
// Quaters
	int quaters_with_tax = (loonies_remainder_with_tax * 100) / 25; //converting .25 to 250 to make calculation easy
	int quaters_reaminder_with_tax = loonies_remainder_with_tax % 25; //
	printf("Quarters   %d    %.4lf\n", quaters_with_tax / 100, (double)quaters_reaminder_with_tax / 100);
	
//Dimes 
	int dimes_with_tax = (quaters_reaminder_with_tax ) / 10;
	int dimes_remainder_with_tax = quaters_reaminder_with_tax % 10;
	printf("Dimes      %d    %.4lf\n", dimes_with_tax , (double)dimes_remainder_with_tax / 100);
	
//Nickels
	int nickels_with_tax = (dimes_remainder_with_tax) / 5;
	int nickels_remainder_with_tax = dimes_remainder_with_tax % 5;
	printf("Nickels    %d    %.4lf\n", nickels_with_tax, (double)nickels_remainder_with_tax / 100);

//Pennies concept
	int pennies_with_tax = (nickels_remainder_with_tax) / 1;
	int pennies_remainder_with_tax = (nickels_remainder_with_tax) % 1;
	printf("Pennies    %d    %.4lf\n", pennies_with_tax, (double)pennies_remainder_with_tax / 100);

//avg cost
	int total_no_of_shirts_with_tax = no_of_shirts_for_patty + no_of_shirts_for_sally + no_of_shirts_for_Tommy;
	int avg_cost_with_tax = ((final_total * 1000) / total_no_of_shirts);
	printf("\nAverage cost/shirt: $%.4lf\n", (double)avg_cost_with_tax / 100000) + .005;
	return 0;
}