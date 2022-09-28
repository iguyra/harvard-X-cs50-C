#include <stdio.h>

int main()
{

    int n;

    do
    {

        // Ask the user to type a number
        printf("width: \n");
        scanf("%i", &n);

    } while (n < 1);

    // for each row
    for (int i = 0; i < n; i++)
    {
        // for each column
        for (int j = 0; j < n; j++)
        {
            // print brick
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
