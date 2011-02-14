/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *
 * What is the 10001st prime number?
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int i,j,N=10001;
    int prime=0;
    
    unsigned long long int *p=malloc(N*sizeof(unsigned long long  int));

    p[0]=2;
    p[1]=3;
    p[2]=5;

    for(i=2;i<N;)
    {
        prime=1;
        for(j=1;j<i;j++)
        {
            if(p[i]%p[j]==0)
            {
                prime=0;
                p[i]+=2;
                break;
            }
        }
    
        if (i<N-1 && prime)
        {
            p[i+1]=p[i]+2;
            if(p[i+1]==18446744073709551615.) printf("WARNING, OVERFLOW\n");
            i++;
        }
        else if(prime) i++;
    }
    
    for(i=0;i<N;i++)
        printf("%d\t%Lu\n",i+1,p[i]);
    
    return 0;
}
