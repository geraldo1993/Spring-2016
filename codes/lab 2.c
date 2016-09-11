#include <stdio.h>
int main (void)
{
	int cel;
	float far;
	printf("Give ... in celsius\n");
	scanf("%d", &cel);
	far=(1.8*cel)+32;
	printf("%.f\n", far);
	printf("Give ... in fahrenheit\n");
	scanf("%f", &far);
	cel=(5.0/9)*(far-32);
	printf("%d", cel);
	
	return 0;
}
