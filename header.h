#include HEADER_H
#ifndef HEADER_H

#include <stdlib.h>
#include <stdio.h>
// cross platform inclusion
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

// include files
#include "isEmpty.c"
#include "moveElevator.c"
#include "removeItem.c"

int isEmpty(int *arr);
int removeItem(int *arr, int floor);
int moveElevator(int *arr);

#endif