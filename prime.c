#include <stdbool.h>
#include <stdio.h>


static const size_t buffer_len = 100;

bool is_prime(size_t maybe_prime)
{
	printf("%lu", buffer_len);
	for (int i = 2; i < maybe_prime; i++)
	{
		if (maybe_prime % i == 0)
		{
			return false;
		}
	}
	return true;
}

// int count_primes(size_t maybe_prime) {}

int main(void)
{
	unsigned long maybe_prime;
	printf("Enter prime number: ");
	size_t result = scanf("%lu", &maybe_prime);
	printf("You entered %lu\n", maybe_prime);
	bool is_prime_result = is_prime(maybe_prime);
	if (is_prime_result)
	{
		printf("%lu is a prime number\n", maybe_prime);
	}
	else
	{
		printf("%lu is a NOT prime number\n", maybe_prime);
	}

	return 0;
}