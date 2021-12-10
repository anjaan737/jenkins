#include "factorial.h"

unsigned long long Factorial::GetFactorial(int input)
{
	unsigned long long factorial = 1;
	for(int i = 1; i <= input; ++i)
	{
		factorial *= i;
	}

	return factorial;
}
