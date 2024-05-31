#include <iostream>
#include "Sales_item.h"

int main() {
	//Sales_item book;

	// std::cin >> book;
	// std::cout << book << std::endl;

	Sales_item item0, item1;
	int n{ 0 };
	std::cout << " how many books: " << std::endl;
	std::cin >> n;
	while (std::cin >> item1) {
		if (n == 3) break;
		item0 = item0 + item1;
		n++;
	}

	std::cout << ">>>" << item0 << std::endl;

	return 1;
}