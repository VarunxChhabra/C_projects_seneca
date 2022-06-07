/*
*****************************************************************************
                          Workshop - #3 (P1)
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

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    
    const double testValue = 330.99; // constant given variable 
    int product_1_id, product_2_id, product_3_id; //variable for product id
    char product_1_taxed, product_2_taxed, product_3_taxed; //variable for mentioning tax
    double price_of_product_1, price_of_product_2, price_of_product_3; //variable for price
    double average; //variable for mentioning average
    printf("Product Information\n===================\n");
//Product 1 details
    printf("Product-1 ");
    scanf("(ID:%d)", product_1_id);
    printf("\nTaxed: ");
    scanf("%c", product_1_taxed);
    printf("\nPrice: $");
    scanf("%.4lf", price_of_product_1);
//Product 2 details
    printf("\nProduct-2 ");
    scanf("(ID:%d)", product_2_id);
    printf("\nTaxed: ");
    scanf("%c", product_2_taxed);
    printf("\nPrice: $");
    scanf("%.4lf", price_of_product_2);
//Product 3 details
    printf("\nProduct-3 ");
    scanf("(ID:%d)", product_3_id);
    printf("\nTaxed: ");
    scanf("%c", product_3_taxed);
    printf("\nPrice: $");
    scanf("%.4lf", price_of_product_3);
// Average
    printf("\nThe average of all prices is: $");
    scanf("%.4lf", average);
//print few statements
    printf("\nAbout Relational and Logical Expressions!\n========================================");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");
// conditional statements 
    printf("Some Data Analysis...\n=====================\n");
    printf("1. Is product 1 taxable? ->")


    return 0;
}