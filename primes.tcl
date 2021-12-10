proc countprimes n {
    set primes {2 3}
    for {set candidate 5}  {$candidate<$n} {incr candidate 2} {
        set isprime 1
        foreach i $primes {
                if {$i*$i>$candidate} break
                if {$candidate%$i == 0} {
                    set isprime 0
                        break
                    }
            }
        if {$isprime} {
            lappend primes $candidate
  #          puts $primes

        }
   
    }
    return $primes
}

puts [ llength [countprimes 10000000 ] ]