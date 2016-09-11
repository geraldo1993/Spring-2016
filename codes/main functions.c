#include <stdio.h>
int main (void)
{
	float examGrade;
	char letterGrade;
	printf("Exam grade?\n");
	scanf("%f", &examGrade);
	printf("you entered= %f\n", examGrade);
	
	if(examGrade >=90)
	{
		letterGrade= 'A';
		printf("Congrats!\n");
		if( examGrade ==100);
		{
			printf("You rock!\n");
		}
	}
	else if ( examGrade >=60)
	{
		letterGrade= 'C';
		printf("%c Almost failed\n", letterGrade);
	}
	else
	{
		letterGrade= 'F';
		printf("%c You failed\n", letterGrade);
	}
	return 0;
}
