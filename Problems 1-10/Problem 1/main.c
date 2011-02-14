/* 
	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
	
	Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include<stdio.h>

main()
{
	int a=0;
	int i=0;

	for(i=5;i<1000;i+=5)
	{
		a+=i;
	}

	for(i=3;i<1000;i+=3)
	{
		if(i%5!=0) a+=i;
	}
	printf("%i",a);
}
