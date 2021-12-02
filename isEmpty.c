#include "header.h"

/**
 * isEmpty: check if the array as no element 
 * @arr: list of floors.
 * @return int 0  when the array is empty and 1 when the array is not empty. 
 **/

int isEmpty(int *arr) {
    for (int i = 0; i < 10; ) {
        // condition ? true : false
        arr[i] != 0 ? return (1) : i++;   
    }
    return (0);
};