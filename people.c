#include<stdio.h>
#include<stdlib.h>

int main()

{ 
    int i;
    int maximum_people=10;
    int *array = malloc(sizeof(int) * 10);

    if (!array) return (0);

    for (int j = 0; j < 10; j++ ) 
    {
        array[j] = 0;
    }
     
    i =0; 
    while (maximum_people)
    {
        
        
        printf("Please enter your floor number \n:");
        scanf("%d", array + i);
        maximum_people--;
        i++;
        
        
    }
    

    for ( int i = 0; i < 10; i++)
    {
        printf("\nPersone %d :floor [[%d]] \n",i, *(array + i));
    
    }
    return 0;
    
}


