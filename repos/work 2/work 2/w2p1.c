#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	const double TAX = 0.13;
	const char patSize = 'S';
	printf("Set Shirt Prices\n================\n");
	double small_shirt, meduim_shirt, large_shirt;
	printf("Enter the price for a SMALL shirt: $");
	scanf("%lf", &small_shirt);
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%lf", &meduim_shirt);
	printf("Enter the price for a LARGE shirt: $");
	scanf("%lf", &large_shirt);
	printf("Shirt Store Price List\n======================\n");
	printf("SMALL\t:%.2lf\t\n", small_shirt);
	printf("MEDIUM\t:%.2lf\t\n", meduim_shirt);
	printf("LARGE\t:%.2lf\t\n", large_shirt);
	printf("\nPatty's shirt size is '%c'\n", patSize);
	printf("Number of shirts Patty is buying: ");
	
	int number_of_shirt;
	scanf("%d", &number_of_shirt);
	printf("\nPatty's shopping cart...\n");
	printf("Contains :%d shirts", number_of_shirt);
	
	int price_of_small_shirt, price_after_taxes, total_price;
	price_of_small_shirt = small_shirt * number_of_shirt * 100;
	printf("\nSub-total: $%.4f ",(double)price_of_small_shirt/100);
	price_after_taxes = (price_of_small_shirt * TAX * 100);
	printf("\nTaxes : $%.4f", (double)price_after_taxes/10000);
	printf("\nTotal :$%fl", (double)(price_after_taxes / 10000) + (double)(price_of_small_shirt / 100));
	return 0;
}