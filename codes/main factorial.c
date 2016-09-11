#include <stdio.h>
int main (void)
{
	int result=1;
	int counter;
	for(counter=1; counter<6; counter++)
	{
		result=result*counter;
	}
	printf("%d", result);
	return 0;
}
