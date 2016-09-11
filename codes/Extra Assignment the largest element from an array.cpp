#include <stdio.h>
// This program will print out the largest element from the array
int main(void) // declare the main function
{
	// declare array and variable named "largest"
	int A[10], largest;
	// declare for counter variable
	int i;
	// read data from the user
	for(i=0; i<10; i++)
	{
		printf("Please enter number %d:", i+1); // print the elements of the array
		scanf("%d", &A[i]); // read the elements
		
	}
	
	
	// assume that the first element is the largest one
	largest = A[0];
	
	for(i=1; i<10; i++) // declare and initialize for loop for finding the largest value; start from index=1;
	// because index=0 already used;
	{
		if( largest > A[i]); // if the first element from the first index is largest keep it as largest and continue
		
		else
		{
			largest = A[i]; // if not assign the largest value to other element ( from other index) of an array
			
		}
	}

	//print the largest number
	printf("LARGEST= %d",largest);
	return 0;
}
