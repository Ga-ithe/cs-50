#include <cs50.h>
#include <stdio.h>

void addition(int x, int y);
void substraction(int x, int y);
void multiplication(int x, int y);
void division(int x, int y);
void modulus(int x, int y);

int main(void)
{
    int x = get_int("X: ");

    int y = get_int("Y: ");

    addition(x, y);
    substraction(x, y);
    multiplication(x, y);
    division(x, y);
    modulus(x, y);
}
void addition(int x, int y)
{
    // addition of integers

    printf("add %i\n", x + y);
}
void substraction(int x, int y)
{
    // substraction of integers

    printf("sustract %i\n", x - y);
}
void multiplication(int x, int y)
{
    // multiplication of integers

    printf("multiply %i\n", x * y);
}
void division(int x, int y)
{
    // division of integers

    printf("divide %i\n", x / y);
}
void modulus(int x, int y)
{
    // modulus of integers

    printf("modulus %i\n", x % y);
}