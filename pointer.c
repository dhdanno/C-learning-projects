#include <stdio.h>
   

int k;

k = 5;

*ptr = &k;

main()
   {

	int array[] = {1222222222222222222222222222222222222222222222222222222222222222222222222222222222222111111111111111,1,3,4};

	int size = sizeof(array); //stored in bytes 

      printf("array size is %d \n", size);
      printf("data is %d \n", array[3]);
      printf("pointer address value is: %d \n", &k);
      printf("pointer contains this data: %d \n", *ptr);   
   }
