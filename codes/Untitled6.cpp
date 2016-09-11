#include <stdio.h>
float average (int exam1, int exam2, int exam3);
int main (void)
{
	int exam1, exam2, exam3;
	printf("Please enter your exam\n");
	printf("exam grade should be integer\n");
	scanf("%d", &exam1);
	printf("exam grade should be integer\n");
	scanf("%d", &exam2);
	printf("exam grade should be integer\n");
	scanf("%d", &exam3);
	printf("change=%d", average(exam1, exam2, exam3));
	return 0;
}
float average (int exam1, int exam2, int exam3)
{
	float result;
	result=(exam1+exam2+exam3)/3;
	return result;
}
