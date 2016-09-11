#include <stdio.h>
int main (void)
{
	char grade1, grade2;
	printf("Please enter your grade:");
	scanf("%c%c", &grade1,&grade2);
	printf("You entered %c and %c.\n", grade1,grade2);
	return 0;
}
