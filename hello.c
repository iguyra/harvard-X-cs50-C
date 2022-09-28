#include <stdio.h>

int main()
{
    // Create an integer variable that will store the number we get from the user
    long myNum;
    long myNum2;

    // Ask the user to type a number
    printf("Type first number and press enter: \n");
    scanf("%li", &myNum);

    printf("Type second a number and press enter: \n");

    // Get and save the number the user types
    scanf("%li", &myNum2);

    long answer = myNum + myNum2;

    // Print the number the user typed
    printf("Your added number is: %li", answer);

    return 0;
}
