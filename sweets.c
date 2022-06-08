#include <cs50.h>
#include <stdio.h>

int without_discount(int sweets, int priceS);
int with_discount(int sweets, int prices, int discounts);

int main(void)
{
    // prompt user for sweets
    int sweets = get_int("number of sweets:");

    // prompt user for discount
    float discount = get_int("discount:");

    // prompt user for price
    float price = 10;
    int discounted_total_price = with_discount(sweets, price, discount);
    int without_discount_price = without_discount(sweets, price);
    printf("price with discount:%i\n", discounted_total_price);
    printf("price without discount:%i\n", without_discount_price);
}

int without_discount(int sweets, int priceS)
{
    int total = sweets * priceS;
    return total;
}
int with_discount(int sweets, int prices, int discounts)
{
    float total = (discounts * prices) / 100;
    int total_discount = total * sweets;
    int discounted_total = sweets * prices - total_discount;
    return discounted_total;
}