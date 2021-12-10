def primes(to):
    primes=[2,3]
    for candidate in range (5,to+1,2):
        is_prime=True
        for p in primes:
            if (candidate<(p**2) or not is_prime):
                break
            if (candidate%p==0):
                is_prime=False
                break
        if is_prime:
            primes.append(candidate)
    return primes

print (len(primes(10000000)))
