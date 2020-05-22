#include "pch.h"
#include "PrimeNumberLib.h"

bool is_prime_number(int number)
{
	if (number <= 1) {
		return false;
	}

	int v = 2;
	
	for (int i = v;i < number;++i) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
	
}