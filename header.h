#include HEADER_H
#ifndef HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef struct list_s
{
    int position;
    int floor;
    struct list_s *next;
} list_t;

// prototype
list_t *add_node(list_t **head, int position, int floor);
size_t print_list(const list_t *h);

#endif