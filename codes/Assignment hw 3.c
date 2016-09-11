
#include <stdio.h>

int isPrime(int number);
int prime(int n);

int main (void)
{
   int n; 
   printf("Enter the ordinal number of prime number you want to print out.\n");
   scanf("%d", &n);
   int result;
   
   result=prime(n);
   printf("(%d)PRIME is: %d\n", n, result);
   
   return 0;	
}
int isPrime(int number) 
{
	
	int counter=2;
    if (number <= 1) 
	return 0; // zero and one are not prime
    
    for (counter=2; counter<=number-1; counter++) 
	{
        if (number%counter == 0) 
		return 0;
	
    }
    return 1;
}
int prime (int n)
{
	int orderOfPrime=0;
	int currentPrimeNumber;
	int counter;
	
	for(counter=2; orderOfPrime!=n; counter++)
	{
		
		if(isPrime(counter))
		{
			orderOfPrime++;
			currentPrimeNumber = counter;
			
		
		}
	} 
    
	return currentPrimeNumber;
}


