#include <stdio.h>
int factorialFunction (int number, int factorial);
int main (void)
{
	int number;
	int factorial;
	int result=1;
	int counter;
	printf("Enter your integer:\n");
	scanf("%d", &number);
    factorial=factorialFunction (number, factorial);
    printf("Factorial of  %d is %d.",number, factorial);
	
	return 0;
}
int factorialFunction (int number, int factorial)
{   
    int result=1;
    int counter;
    for(counter=1; counter<result; counter++);
    {
    	result=result*counter;
    	
    }
    return (result*counter);
}
