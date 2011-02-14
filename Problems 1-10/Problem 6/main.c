/*
 * The sum of the squares of the first ten natural numbers is,
 *
 * 12 + 22 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 *
 * (1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 * */

/* Here is the answer http://rinconmatematico.com/foros/index.php?topic=1705.from1131557404%253Btopicseen */

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int N=100;
    long long int a=N*(N+1)*(2*N+1)/6;
    long long int b=N*(N+1)/2;

    printf("%Ld\n",b*b-a);
    return 0;
}
