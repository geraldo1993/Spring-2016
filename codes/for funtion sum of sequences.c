#include <stdio.h>
int main (void)
{
	int result=0;
	int counter;
	for(counter=2; counter<=6; counter=counter+2)
	{
		result=result+counter;
	}
	printf("%d", result);
	return 0;
}
