#include "header.h"

/**
  *
  *
  *
**/

void handleSignint(int sig) {
    printf("> closing \n");
    exit(sig);
};