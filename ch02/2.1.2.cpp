#include <iostream>

int main() {
	bool b = 42;            // b is true
	int i = b;              // i has value 1
	i = 3.14;               // i has value 3
	double pi = i;          // pi has value 3.0
	unsigned char c = -1;   // assuming 8-bit chars, c has value 255
	signed char c2 = 256;   // assuming 8-bit chars, the value of c2 is undefined
	unsigned u = 10;
	// Caution: Don‘t Mix Signed and Unsigned Types
	i = -42;
	std::cout << i + i << std::endl;  // prints -84
	std::cout << u + i << std::endl;  // if 32-bit ints, prints 
	// 
	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl;  // ok: result is 32
	std::cout << u2 - u1 << std::endl;  // ok: but the result will wrap around to some large number 
	return 0;
}

void _2_3() {
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;  // ok: result is 32
	std::cout << u - u2 << std::endl;  // ok: but the result will wrap around to some large number
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;  // ok: result is 32
	std::cout << i - i2 << std::endl;  // ok: result is -32
	std::cout << i - u << std::endl;   // ok: result is 0
	std::cout << u - i << std::endl;   // ok: result is 0
}

void _2_4() {
	
}