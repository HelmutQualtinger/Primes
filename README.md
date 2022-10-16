# Why Python is a bad computing language

In the present repository, I have three versions of the same 
algoithm finding the primes among the first 10 
million integers. In C, in Python and in Tcl my all time 
favourite not just because of the Tk GUIs which can be used
with some hazzle in Python.

The results are devastating for Python. It is 200 times slower
than C and twice as slow as Tcl.

These days one does not get around  Python, but it is a
very messy and as it turns out very slow language. Tcl 
development was discontinued 15 years ago and still it 
beats Python by a factor of two.

Syntactally Python is a very rich - mess with useless 
syntatic sugar such as comprehensions, which are not more
readable as loops and add nothing semantically.

The worst crime is that it uses strict typing without declaration and performing
typechecking at runtime, i.e. when the program has already
been possibly deployed. Which is a logical contradiction
in terms. The user does not care whether a program crashes
with a core dump or with a traceback to line whatever in
the Python Source. Tcl just transfers any type to any type
more or less gracefully. Using "0" or even "" as 0 or 0.0
or false or none is in most cases the right think to do.

Sometimes it is not, but tracedumping on you in all cases
whether justified or not never is of any worth.

The only value of Python resides in its widespread use and
some very good libraries, like numpy, matplotlib, pandas 
OpenCV and
many others. They are not really part of the language and
its merits. It would by a trivial to port them to Tcl which
has a much cleaner interface to C. Alas nobody will ever
do that.

I am ***very disappointed and frustrated with Python *** 
because there is no way to get around Python these days.

I would be greatful if other people could port the sample
program to other widespread languages like Java and 
Javascript to allow for a broader comparison.

The benchmark has been run on a MacBook Air.

Somewhere close to here in GitHub you can also find tcl/tk and
python version of Conways game of Life. Also there TcL/Tk
under Tcl far outperforms Python and is not that much harder
to read.
