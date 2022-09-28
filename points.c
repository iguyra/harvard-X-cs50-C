#include <stdio.h>

int main(void)
{
    // Create an integer variable that will store the number we get from the user
    long points;
    const long myPoint = 2;

    // Ask the user to type a number
    printf("how many points did  you lose: \n");

    // Get and save the number the user types
    scanf("%li", &points);

    if (points < myPoint)
    {
        printf("you lost more fewer points: \n");
    }
    else if (points > myPoint)
    {
        printf("you lost more points");
    }
    else
    {
        printf("we lost same points");
    }

    // Print the number the user typed
}
