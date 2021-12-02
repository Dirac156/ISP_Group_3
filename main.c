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

    signal(SIGINT, handleSignint);

    while (1) {
        int i = 0;
        int maximum_people=10;
        while (maximum_people) {
            int item = 0;
            printf("Please enter your floor number \n:");
            scanf("%d", &item);
            else if (item < 2 || item > 8) printf("Please enter a value between 2 - 8\n");
            else {
                array[i] = item;
                maximum_people--;
                i++; 
            } 
        }
        moveElevator(array);
    }
    free(array);
    return 0;
}


