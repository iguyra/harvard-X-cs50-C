#include <stdio.h>
#include <stdlib.h>

//
int main(void)
{

    // int list[3];
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;

    // for (int i = 0; i < 3; i++)
    // {

    //     printf("%i\n", list[i]);
    // }

    // dynamically alocate an array of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 0;
    }

    // assign 3 numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // changing the array size

    // allocate new array of size 4
    // int *tmp = malloc(4 * sizeof(int));
    int *tmp = realloc(list, 4 * sizeof(int));

    if (tmp == NULL)
    {
        free(list);
        return 0;
    }

    // copy numbers ofrom old array into new array //if malloc F is used
    // for (int i = 0; i < 3; i++)
    // {
    //     tmp[i] = list[i];

    //     // printf("%i\n", list[i]);
    // }

    // add fourth numer to new array
    tmp[3] = 4;

    // free old array // if malloc is used
    // free(list);

    // remember new array
    list = tmp; //

    // print ew array
    for (int i = 0; i < 4; i++)
    {

        printf("%i\n", list[i]);
    }

    // free new array
    free(list); // free the original list
    return 0;
}
