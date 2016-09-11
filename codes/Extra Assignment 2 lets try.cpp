#include <stdio.h>
// This program is supposed to print out the reverse of elements of the array
int main(void)  // declare the main function
{ 
int a[10], i; // declare the array and counter for for loop

printf("Enter the elements of the initial array :\n"); 

for(i = 0; i < 10; i++) // declare and initialize for loop and read data from user

scanf("%d", a + i); 

printf("The reverse of the array is:\n"); 

for(i = 9; i >=0; i--) // declare the for loop for the reverse of the array
printf("%d\n", a[i]); // print the reverse

return 0;  // go back to main function
}
