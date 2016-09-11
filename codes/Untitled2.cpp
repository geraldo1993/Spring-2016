#include <stdio.h>
int main (void)
{
	int a=2, b=3, c=4;
	a++;
	b=c*a;
	c=b/c;
	printf("%d", c);
	return 0;
}
