#include <stdio.h>

int main(void)
{
    // Create an integer variable that will store the number we get from the user
    long n;

    // Ask the user to type a number
    printf("enter number: \n");

    // Get and save the number the user types
    scanf("%li", &n);

    if (n % 2 == 0)
    {
        printf("Number is even: \n");
    }
    else
    {
        printf("Number is odd");
    }

    // Print the number the user typed
}
