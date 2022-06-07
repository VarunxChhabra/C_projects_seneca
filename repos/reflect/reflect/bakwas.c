#include <stdio.h>
int main(void)
{
	int amount = 7245;
	int cents = 100;
	float solution = (float)amount / cents;
	printf("amount is $ %.2f",solution);
	return 0;
}