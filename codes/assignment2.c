#include <stdio.h>
int main (void) // This assignment is designated to create a code, which input will be non negative integer
// and which output will be factorial of that integer.
// In this code our main function will call first for input where we will use scanf function
// after it main function will call for factorial function using for function
// and to print the result main function will call for printf function.
{
	int number;     // declaration of our input (an integer number)
	int result=1;   // declaration for factorial function (for function)
	int counter=1;  // declaration for factorial function (for function)
	printf("Enter your integer:\n"); // Asking user to enter his/her integer
	scanf("%d", &number);  // Reading the user's input
	for(counter=1;counter<=number;counter++) //  Calling for Factorial function (for function)
	{
		result=result*counter; // Definition of factorial function, what it is doing.
	}
	printf("Factorial of %d is %d.", number, result); // Printing out the result of user's integer factorial.
	return 0; 
} 
