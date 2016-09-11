#include <stdio.h>
float convertToInches(float inches);
float convertToCentis (float centis);
int main (void)
{
	float inches;
	float centis;
	printf("Enter the number of inches:");
	scanf("%f", &inches);
	centis=convertToInches (inches);
	printf(" %f inches equals to %f centis\n", inches, centis);
	printf("Enter the number of centis;\n");
	scanf("%f", &centis);
	inches=convertToCentis (centis);
	printf("%f centis equals to %f inches\n", centis, inches);
	return 0;
}

float convertToInches (float inches)
{
	return (inches * 2.54);
}
float convertToCentis (float centis)
{
	return (centis/2.54);
}
