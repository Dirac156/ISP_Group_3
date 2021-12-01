#include "header.h";

/**
 * add_node: add a new node as the head of the list
 * @head: the first element of the linked list
 * @position: the position where we wanna add the element
 * @floor: the floor person is going to.
 **/
  

list_t *add_node(list_t **head, int position, int floor)
{
    list_t *new;

    if (head == NULL)
        return (0);

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->position = position;
    new->floor = floor;
    new->next = *head;
    *head = new;

    return (new);
}