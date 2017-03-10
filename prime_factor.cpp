// PRIME_FACTOR.CPP: Factorize a number into multiple of primes
// Educational purpose - Coded by Trinh D.D. Nguyen
// ---
// compile: type 'make' and ENTER
// ----
// usage: prime_factor [number]

#include <iostream>
#include <string>	// requires C++ 11 to compile stol()
					// if not please consider using atol() from stdlib.h

using namespace std;

int main(int argc, char * argv[])
{
	unsigned long i, n;

	if (argc < 2) // no value given from command line?
	{
		// input from keyboard
		cout << "enter a number to factorize: ";
		cin >> n;
	}
	else
	{
		// convert received from the value from command line to integer
		// no error checking performed here
		n = stol(argv[1]);
	}

	// ----
	// main algorithm, kinda naive and doesn't fit for using with big integers
	i = 2;					// start with 2, first prime
	while (n > 1)				// loop while n still greater than 1
	{
		while (n % i == 0)		// while still divisible
		{
			cout << i << " ";	// print out that divisor
			n = n / i;		// divide n by i
		}
		i++;	// next divisor
	}

	cout << endl;

	return 0;
}
