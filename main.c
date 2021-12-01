#include "header.h";

int main () {
    // get user data
    int maximum_people = 10;
    int floor = 0;
    list_t *head;

    head = NULL;

    while (maximum_people) {
        printf("Number of people remiaining: %d\n", maximum_people);
        printf("Enter Floor: ");
        scanf(%d, &floor);
        if (isdigit(floor)) { printf("Please enter a valid floor/n"); }
        else if (floor < 2 || floor > 8) { printf("Top floor: 8, Lowest: 2"); }
        else {
            add_node(&head, maximum_people, floor);
            maximum_people--;
        }
    }

    print_list(*head);

    // create thread to move the elevator

    // empty the elevator

    return (0);
}