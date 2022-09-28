#include <stdio.h>

// creating your own data type

typedef struct
{
    int age;
    int number
};
person;

int main(void)
{
    person people[2];

    people[0].age = 33;
    people[0].number = 10;

    people[1].age = 42;
    people[1].number = 5;

    for (int i = 0; i < 3; i++)

        printf(people[i]);
    // {
    //     if (names[i] == "fred")
    //     {
    //         printf("found\n");
    //         return 0;
    //     }
    // }

    printf("not found\n");

    return 1;
}
