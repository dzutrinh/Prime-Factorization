# make file for prime factorization
# type 'make' and press ENTER
pname=prime_factor
cc=g++
cflags=-std=c++11 -o $(pname) # using C++11

all: $(pname)

$(pname):
	$(cc) $(pname).cpp $(cflags)

clean:
	rm -f $(pname)
