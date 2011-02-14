/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *
 * Find the sum of all the primes below two million.
 */

#include <stdio.h>
#include <math.h>

int is_prime(n)
{
    unsigned int i;
    unsigned int top=ceil(sqrt(n))+1;
    for (i = 3; i < top; i+=2)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main(int argc, const char *argv[])
{
    unsigned long long int suma=2;
    unsigned int i,N=2000000;
    printf("%d\n",is_prime(9));

    for (i = 3; i < N; i+=2)
    {
        if(is_prime(i))suma+=i;
    }
    printf("%Lu\n",suma);
    return 0;
}
