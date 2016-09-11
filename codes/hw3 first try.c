#include <stdio.h>
int main(void)
{
	int n;
int count=1;
long a = 2;
while(count<n)
{
    long b = 2;
    int prime = 1;// to check if found a prime
    while(b * b <= a)
    {
        if(a % b == 0)
        {
            prime = 0;
            break;
        }
        b++;
    }
    if(prime)
    count++;
    a++;
}
printf("%d st prime no. : %ld\n",count,--a);
return 0;
}


