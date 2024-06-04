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
