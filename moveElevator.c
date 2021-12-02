#include "header.h"

/**
 * moveElevator: move from 1- 8;
 * @arr: The elevator list. 
 **/

int moveElevator(int *arr) {
    int position = 1;
    if (!arr) {
        printf("Error: Elevator is empty\n");
        exit(0);
    };
    // loop
    while (position <= 8) {
        if (!isEmpty(arr)) {
            return (1);
        }
        // wait for 1 second 
        sleep(1);
        // print position 
        printf("Elevator is at position: %d\n", position);
        position++;
        if (position < 9) {
            removeItem(arr, position);
        }
    }

    return (1);
}