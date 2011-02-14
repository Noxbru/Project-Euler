/* A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,
 *
 * a2 + b2 = c2
 * For example, 32 + 42 = 9 + 16 = 25 = 52.
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int m,n;

    for (m = 1; m < 40; m++)
        for (n = 1; n < m-1; n++)
        {
            if(m*m+m*n==500)
                printf("%d\n",(m*m*m*m-n*n*n*n)*2*m*n);
        }
    return 0;
}
