#include <stdio.h>

float discount(float price, int percentage)
{
    // float sale = price * .85;

    // return sale;
    return price * (100 - percentage) / 100;
}

int main()
{
    // Create an integer variable that will store the number we get from the user
    float regular;
    int percent_off;

    // Ask the user to type a number
    printf("enter regular price: \n");
    scanf("%f", &regular);

    // percent off
    // Ask the user to type a number
    printf("enter off percent: \n");
    scanf("%i", &percent_off);

    // Get and save the number the user types

    float dis = discount(regular, percent_off);

    // Print the number the user typed
    printf("the discount is: %.2f", dis);

    return 0;
}
