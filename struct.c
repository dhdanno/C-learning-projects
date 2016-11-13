#include <stdio.h>

struct x
   {
      int a;
      char b[5];
      int c;
   };

   main()
   {
      struct x z;
	
      z.a = 10;
      z.b = "bob";
      z.a++;

      printf(" first member is %d \n %d",z.a, z.b);   
   }
