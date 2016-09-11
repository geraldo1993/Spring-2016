#include <stdio.h>
int main (void)
{
	int a=2,b=3,c=4;
	b=c*(a++);
	printf("a=%d, b=%d", a,b);
	
	return 0;
}
