#include <stdio.h>

int main(void)
{

    // int numbers[7];
    // numbers[0] = 4;
    // numbers[1] = 6;
    // numbers[2] = 8;

    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == -1)
        {
            printf("found\n");
            return 0;
        }
    }

    printf("not found\n");

    return 1;
}
