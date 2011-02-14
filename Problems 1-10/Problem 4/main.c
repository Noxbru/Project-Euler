/*
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91  99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_palindrome(int a)
{
    int b=ceil(log10(a));
    int *c=malloc(b*sizeof(int));
    int i=0,ret=0;

    while(a>0)
    {
        c[i]=a%10;
        a/=10;
        i++;
    }

    for (i = 0; i <= b/2; i++)
    {
        if(c[i]!=c[b-i-1])
        {
            ret=0;
            break;
        }
        else ret=1;
    }

    free(c);
    return ret;
}

int main(int argc, const char *argv[])
{
    int a=999,b=999;
    int limit=5;
    int pal=0;

    for(a=999;900<a;a--)
        for(b=999;900<b;b--)
            if (is_palindrome(a*b)>pal)
                pal=a*b;
    printf("%i\n",pal);
    return 0;
}
