#include <stdio.h>
int main (void)
{
	//declare array
	float numbers[10], sum=0, average;
	// declare for counter variable
	int index;
	// read data from the user
	for(index=0; index<10; index++)
	{
		printf("Please enter number %d:\n", index);
		scanf("%f", &numbers[index]);
		
	}
	printf("After we exit the loop, the value of index is %d.\n", index);
	// calculate the sum
	for(index=0; index<10; index++)
	{
		sum=sum+numbers[index];
	}
	printf("The sum is %.2f\n", sum);
	average=sum/10;
	printf("The average is %.2f\n", average);
	return 0;
	
}


