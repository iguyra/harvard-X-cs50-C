#include <stdio.h>

int main(void)
{
    // Create an integer variable that will store the number we get from the user
    char n;

    // Ask the user to type a number
    printf("do you agree: \n");

    // Get and save the number the user types
    scanf("%c", &n);

    if (n == 'y' || n == 'Y')
    {
        printf("AGREED: \n");
    }
    else if (n == 'n' || n == "N")
    {
        printf("NOT AGREED");
    }

    // Print the number the user typed
}
