#include <iostream>

int main() {
	bool b = 42;            // b is true
	int i = b;              // i has value 1
	i = 3.14;               // i has value 3
	double pi = i;          // pi has value 3.0
	unsigned char c = -1;   // assuming 8-bit chars, c has value 255
	signed char c2 = 256;   // assuming 8-bit chars, the value of c2 is undefined
	unsigned u = 10;
	// Caution: Don¡¯t Mix Signed and Unsigned Types
	i = -42;
	std::cout << i + i << std::endl;  // prints -84
	std::cout << u + i << std::endl;  // if 32-bit ints, prints 4294967264
	return 0;
}