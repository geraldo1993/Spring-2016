#include<stdio.h>
#include<math.h>
#include<conio.h>


int main(){
    int i,j,n=0,x;
    printf("Enter the length of the numbers you wanna generate \n");
    scanf("%d",&x);
    for(i=2;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                n++;
            }
        }
        if(n==2)
        printf("%d\n",i);
        n=0;
    }
    return 0;
}
