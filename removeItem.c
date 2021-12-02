#include "header.h"

/**
 * removeItem:  
 * @arr: the elevator
 * @floor: 
 * @return int 
 **/

void removeItem(int *arr, int floor) {
    int left = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == floor) {
            arr[i] = 0;
            left++;
        }
    }
    printf(">>> Number of people left: %d\n", left);
}   
