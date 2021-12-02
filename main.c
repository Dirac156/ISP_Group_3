#include "header.h"

/**
 * @brief 
 * 
 * @return int 
 */

int main()
{ 
    int *array = malloc(sizeof(int) * 10);
    if (!array) return (0);
    for (int j = 0; j < 10; j++ ) array[j] = 0;

    while (true) {
        int i = 0;
        int maximum_people=10;
        while (maximum_people) {
            printf("Please enter your floor number \n:");
            scanf("%d", array + i);
            maximum_people--;
            i++;  
        }
        moveElevator(array);
    }
    free(array);
    return 0;
}


