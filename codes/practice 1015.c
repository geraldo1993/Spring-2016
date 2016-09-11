#include <stdio.h>
float convertToInches(float inches);
int main (void)
{
	float inches;
	float centis;
	pritnf("Enter the number of inches:");
	scanf("%f", &inches);
	centis=convertToInches (inches);
	printf(" %f inches equals to %f centis\n", inches, centis);
	return 0;
}

float convertToInches (float inches)
{
	return (inches * 2.54);
}
