#include <iostream>
#include "factorial.h"

int main(int argc, char* argv[])
{
	int n = atoi(argv[1]);
	auto factorial = Factorial::GetFactorial(n);

	std::cout << "The factorial of " << n << " = " << factorial << std::endl;
	return 0;
}
