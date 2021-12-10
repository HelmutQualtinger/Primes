#include <stdio.h>
void main()
{
    int cand, primes[1000000],*p,next_prime;
    primes[0]=2;
    primes[1]=3;
    next_prime=2;
    for (cand=3;cand<10000000;cand+=2)
    { int is_prime=1;
        p=primes;
        while(((*p)*(*p)<=cand)&&is_prime)
            if (cand%(*p))
            {
                p++;
            }
            else
            { 
                is_prime=0;
                break;   
            };
            if(is_prime)
                primes[next_prime++]=cand;

    };
    printf("Counted %d primes",next_prime);
}
