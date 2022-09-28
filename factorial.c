#include <stdio.h>
int factorial(int n);

// recursive function
int main()
{

    int n = factorial(15);

    printf("n is %i\n", n);
}

int factorial(int n)
{
    printf("hello %i \n", n);

    if (n == 1)
    {

        return n;
    }

    else
    {

        n *factorial(n - 1);
    }
}