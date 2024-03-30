#include <iostream>
#include "Log.h"

static int Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

int main()
{
	//char -> 1byte, short -> 2 bytes, int -> 4 bytes,, long -> 4 bytes (depending on the compiler), long long  -> 8 bytes of data.
	// float -> 4 bytes, double -> 8 bytes.
	// bool -> true/false (0 is false, any other number is true) -> 1 bytes
	unsigned int variable = 8; //-2b -> 2b, but with unsigned it is : 0 -> 4b
	float var = 5.5f;
	double var2 = 2.316;
	std::cout << sizeof(var2) << std::endl;
	std::cin.get();
}