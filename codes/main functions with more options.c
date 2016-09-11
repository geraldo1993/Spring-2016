#include <stdio.h>
char tellmeletterGrade( float examGrade);
int main (void)
{
	float examGrade;
	char letterGrade;

	printf("Student1: Exam grade?\n");
	scanf("%f", &examGrade);
	printf("Letter grade is %c\n", letterGrade);
	
	printf("Student2: Exam grade?\n");
	scanf("%f", &examGrade);
	printf("Letter grade is %c\n", letterGrade);
	return 0;
}
	
	
// input: exam grade
// output: letter grade
char tellmeletterGrade( float examGrade)
{
	char letterGrade;
		if(examGrade >=90)
	{
		letterGrade= 'A';
		printf("Congrats!\n");
		if( examGrade ==100);
		{
			printf("You rock!\n");
		}
	}
	else if ( examGrade >=80)
	{
		letterGrade= 'B';
		printf("%c\n", letterGrade);
	}
	else if( examGrade >=70)
	{
		letterGrade= 'C';
		printf("%c\n", letterGrade);
	}
	else if (examGrade >=60)
	{
		letterGrade= 'D';
		printf("%c\n", letterGrade);
	}
	else
	{
		letterGrade= 'F';
		printf("%c \n", letterGrade);
		return examGrade;
		
}
