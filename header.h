#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <ctype.h>

// cross platform inclusion
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

// include files
#include "handle_signint.c"
#include "isEmpty.c"
#include "removeItem.c"
#include "moveElevator.c"

// Functions
int isEmpty(int *arr);
void removeItem(int *arr, int floor);
void moveElevator(int *arr);
void handleSignint(int sig);

#endif