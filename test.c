#include <stdio.h>
int main()
{

int test[] = {1032424234234242423423472434, 12342342343, 13242342342434, 23424323234234243};
int test1[1];
printf("sizeof test: %ld\n %ld\n", sizeof(test), sizeof(test1));

return(0);

char adjective[20];
char food[20];
char chore[20];
char furniture[20];
/* Get the words to use in the madlib */
printf("Enter an adjective:"); /* prompt */
scanf("%s",&adjective); /* input */
printf("Enter a food:");
scanf("%s",&food);

printf("\n\nDon.t touch that %s %s!\n",adjective,food);
printf("I just %s the %s!\n",chore,furniture);



	return(0);
}
