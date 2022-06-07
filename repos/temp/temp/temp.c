#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a,b;
	printf("enter a no.");
	scanf("%d", &a);
	printf("2");
	scanf("%d", &b);
	if (a == 1 || b == 2) 
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
