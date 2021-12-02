#include "header.h"

/**
 * removeItem:  
 * @arr: the elevator
 * @floor: 
 * @return int 
 **/

void removeItem(int *arr, int floor) {
    int remaining = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == floor) {
            arr[i] = 0
        } else {
            remaining++;
        };
    }
    printf(">>> Number of people remaining: %d\n", remaining);
}   
