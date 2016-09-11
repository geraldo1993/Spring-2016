#include<stdio.h>
#include<conio.h> 

main()
{
int pk,qd,am,no,c=0;
printf("\n Enter the Number U want to Find");
scanf("%d",&no);
for(pk=2;pk<=1000;pk++)
{
am=0;
for(qd=2;qd<=pk/2;qd++)
{
if(pk%qd==0)
{
am=1;
break;
}}
if(am==0)
c++;
if(c==no)
{
printf("%d",pk);
break;
}}
getch();
return 0;
} 
