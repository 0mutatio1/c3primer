#include <iostream>

int main() {

	std::cout << 'a' << L'a' << "a" << L"a" << std::endl;

	std::cout << 10 << 10u << 10L << 10uL << 012 << 0xC << std::endl;

	std::cout << 3.14 << " " << 3.14f << " " << 3.14L << std::endl;

	std::cout << 10 << " " << 10u << " " << 10. << " " << 10e-2 << std::endl;

	int month = 9, day = 7;
	month = 9;
	day = 07;

	std::cout << "Who goes with F\145rgus?\012" << std::endl;
	std::cout << 3.14e1L << " " << 1024.0f << " " << 3.14L << std::endl;
}

void _2_5() {
	// 'a', L'a', "a", L"a" 
	// 10, 10u, 10L, 10uL, 012, 0xC
	// 3.14, 3.14f, 3.14L
	// 10, 10u, 10., 10e-2
	//explain the value of each expression
	// 'a' is a char type, L'a' is a wide char type, "a" is a string, L"a" is a wide string
	// 10 is an int, 10u is an unsigned int, 10L is a long int, 10uL is an unsigned long int, 012 is an octal int, 0xC is a hexadecimal int
	// 3.14 is a double, 3.14f is a float, 3.14L is a long double
	// 10 is an int, 10u is an unsigned int, 10. is a double, 10e-2 is a double
}

void _2_6() {
	// What, if any, are the differences between the following definitions:
	// int month = 9, day = 7;
	// int month = 09, day = 07;
	// month = 9 is an int, day = 7 is an int
	// month = 09 is an error, day = 07 7 is an octal int
}


void _2_7() {
	// What values do these literals represent? What type does each have?
	// "Who goes with F\145rgus?\012" is a string, it represents "Who goes with Fergus?" with a newline character
	// 3.14e1L is a long double, 1024.0f is a float, 3.14L is a long double
}

void _2_8() {
	// Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.
	std::cout << "2M\n";
	std::cout << "2\tM\n";
}