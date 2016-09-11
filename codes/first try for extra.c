#include <stdio.h>

int main(void)  // declare the main function
{
	// declare the array and the variable we gonna use
	int A[10], largest; 
	// declare for counter variable
	int i;
	// read data from the user
	for(i=0; i<10 ;i++)
	{
		printf("Please enter number %d:",i);
		scanf("%d", &A[i]);
		
	}
	
	for(i=1;i<10;i++) // declare and initialize the for loop for finding the largest value
	{
	
	
	      if( largest > A[i]); // if it is true continue with the nest itteration if not finish it
	      {
	       largest=A[i];
	      }

	
	    
		
	}

	// print the largest number
	printf("largest= %d",largest);
	return 0;  // return to the main function
}
