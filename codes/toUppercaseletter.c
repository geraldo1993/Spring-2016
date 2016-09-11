#include <stdio.h>
char toUpper(char lower);
int main (void)
{
	char lower;
	printf("Enter lower case letter:\n",lower);
	scanf("%c", &lower);
	printf("The capital of %c is %c.\n", lower, toUpper(lower));
	return 0;
}
char toUpper(char lower)
{
	char toUpper;
	toUpper=lower-('x'-'X');
	return toUpper;
		
}
