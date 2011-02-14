/*
	The prime factors of 13195 are 5, 7, 13 and 29.

	What is the largest prime factor of the number 600851475143 ?
*/

#include<stdio.h>
#include<math.h>

main()
{
	double a=600851475143.;
	double b=1;
	double c=0;

	for(b=17;b<a;b++)
	{
		c=a/b;
		while((a/b-floor(c))==0)a=a/b;
	}

	printf("%lf",b);
}
