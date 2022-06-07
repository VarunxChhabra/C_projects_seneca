/*
*****************************************************************************
                       Workshop - 2 (Part - 1)
    Full Name   : Varun Chhabra
    Student ID# : 170279210
	Email       : vchhabra1@myseneca.com
	Section     : NGG
	Authenticity Declaration :
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider.This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	const double TAX = 0.13;
	const char patSize = 'S';
	printf("Set Shirt Prices\n================\n");
	float small_shirt, meduim_shirt, large_shirt;
	printf("Enter the price for a SMALL shirt:  $");
	scanf("%lf" , &small_shirt);
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%lf" , &meduim_shirt);
	printf("Enter the price for a LARGE shirt:  $");
	scanf("%lf" , &large_shirt);
	printf("Shirt Store Price List\n======================\n");
	printf("SMALL\t:%d\t\n",(int)small_shirt);
	printf("MEDIUM\t:%d\t\n",(int)meduim_shirt);
	printf("LARGE\t:%d\t\n",(int)large_shirt);
	printf("\nPatty's shirt size is", patSize);
	printf("Number of shirts Patty is buying: ");
	scanf("%d");
	return 0;
}
