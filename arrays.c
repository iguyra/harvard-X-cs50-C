#include <stdio.h>

int main(void)
{
    int scores[3];
    int value;
    int n;

    printf("how many scores: \n");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter scores: \n");

        scores[i] = scanf("%i", &value);
    }
    printf("average is %f", scores[0] + scores[1] + scores[2] / 3.0);

    // Print the number the user typed
}
