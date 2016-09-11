#include <stdio.h>
int substract (int number1, int number2); // parameters 
// function decleration in C                                           
int main (void)
{
	int exam1, exam2; // variable deceration
	// you can not write int exam1, int exam2
	exam1=65;
	exam2=95;
	printf("change=%d\n", substract(exam1, exam2) ); // replaces the function call with the result
	// how to call the function
	printf("exam1=%d\n",exam1);
	// when ccompiler sees the calling of function it goes to function decleration; checks the name, 
	// type and then it assignes the values to the function, to the paramenters
	return 0;
}
// functions; 1) easy to use 
//            2) easy to debug
//            3) code re-use

// math functions: name, arguments, result, type returned  
// typeReturned functionName (argument list)
// {
//     ....
//     ....
//     return result;
// }
// their memory addrress is different so they are not the same entities

//typeReturned
int substract (int exam1, int exam2) // dummy arguments, nth but a variable names inside the function
// parameters
{
	int result;
	result=exam1-exam2;
	exam1=exam1+20;
	return result;
}        
