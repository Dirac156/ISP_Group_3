#include "header.h"

/**
 * moveElevator: move from 1- 8;
 * @arr: The elevator list. 
 **/

void moveElevator(int *arr) {
    printf(">>>> Start <<<<\n");
    int position = 1;
    if (!arr) {
        printf("Error: Elevator is empty\n");
        exit(0);
    };
    // loop
    while (position <= 8) {
        if (!isEmpty(arr)) {
            break;
        }
        // wait for 1 second 
        sleep(1);
        // print position 
        position++;
        printf("Elevator is at position: %d\n", position);
        if (position < 9) {
            removeItem(arr, position);
        }
    }

    printf(">>>> End <<<<\n\n");
}