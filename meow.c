#include <stdio.h>

void meow(int n)
{
    for (n = 0; n < 3; n++)
    {
        printf("meow\n");
    }
}

void main(void)
{

    //// WHILE LOOP
    // while (n <= 3)
    // {

    //     printf("meow\n");

    //     n++;
    // }

    /// FOR LOOP
    meow(3);
}
