// #include<stdio.h>
// #include<stdlib.h>
// #define maximal 10



// int main()
// {
//     int size=0,i;
//     int *array=malloc(sizeof(int)*maximal);
//      if(!array) return 0;
    

//     for(i=0;i<maximal;i++)
//  {
//           array[i]=0;

//     while (size<3)
//     {
//         printf("\n enter number \n :");
//         scanf("%d",&array[i +i]);
//         size+=1;

//     } 
    



//  }
//   if(size=10)
//     {
//         printf("the elevatore is full!");
        
        
//     }

//     else
//     {
//          printf("h");
//     }
    
     
     
//           for(i=0;i<maximal;i++)
//           {
//           printf("\n%d\n",array[i]);
//           }
     
 

// }



#include<stdio.h>
#include<stdlib.h>

int main()

{
    // int array[25],i,n=10;
    int *array = malloc(sizeof(int) * 10);

    if (!array) return (0);

    for (int j = 0; j < 10; j++ ) {
        array[j] = 0;
    }

    for ( int i = 0; i < 10; i++)
    {
      printf("inpuet floor number");
      scanf("%d",array+i);
        
    }

    for ( int i = 0; i < 10; i++)
    {
        printf("element %d :%d",i,*array+i);
    
    }
    return 0;
    
}