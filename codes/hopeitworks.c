#include <stdio.h>
int main (void)

{   
    
	int n;
	printf("Enter the ordinal number of prime number you want to print out:\n", n);
	scanf("%d", &n);

	int count=0;
	int i=2;
	int currentPrime=0;
	while(count !=n)
	{
		if(isPrime (i))
		{
			count++;
			currentPrime=1;
		}
		i++;
	}
	return (currentPrime);
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


     int i;


    while(i<=number/2)
	{

         if(number%i==0)

             return 0;

         else

             i++;

    }




    return 1;

}
