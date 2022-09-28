#include <stdio.h>

int getNumber();

int main(void)
{

    char myString[] = "my string";

    printf("The length of my string is %d", strlen(myString));

    return 0;
}

int getNumber()
{

    int value;

    printf("enter a value to add");

    scanf("%i", &value);

    return value + 4;
}
