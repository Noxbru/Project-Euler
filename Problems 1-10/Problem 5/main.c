/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 * */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, const char *argv[])
{
    int i,j,k,N=20;
    int mcm=1;
    int a=1;
    int limit=ceil(N/2);
    
    int *p=malloc(limit*sizeof(int));

    p[0]=2;
    for(i=1;i<limit;i++)
        p[i]=1+2*i;

    for(i=1;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
            if(p[j]%p[i]==0)
            {
                for(k=j;k<limit;k++)
                    p[k]=p[k+1];
                limit--;
            }
    }

    for(i=0;i<limit;i++)
        printf("%d\n",p[i]);

    for (i = 0; i < limit; i++)
    {
        a=p[i];
        while(a<=N)
        {
            mcm*=p[i];
            a*=p[i];
        }
    }
    printf("%d\n",mcm);
    return 0;
}
