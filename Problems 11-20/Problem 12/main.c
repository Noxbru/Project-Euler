/* The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
 *
 * 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
 *
 * Let us list the factors of the first seven triangle numbers:
 *
 *    1: 1
 *    3: 1,3
 *    6: 1,2,3,6
 *    10: 1,2,5,10
 *    15: 1,3,5,15
 *    21: 1,3,7,21
 *    28: 1,2,4,7,14,28
 *    We can see that 28 is the first triangle number to have over five divisors.
 *
 *    What is the value of the first triangle number to have over five hundred divisors?
 */

#include <stdio.h>
#include <math.h>

int num_of_divisors(int n)
{
    int i;
    int divisors=0;
    int top=ceil(sqrt(n))+1;
    for (i = 1; i < top; i++)
        if(n%i==0) divisors+=2;
    return divisors;
}

int main(int argc, const char *argv[])
{
    int i;
    int n=1;
    printf("%d\n",num_of_divisors(146611080));

    for (i = 2; num_of_divisors(n)<500; i++)
        n+=i;

    printf("%d\n",n);
    return 0;
}
