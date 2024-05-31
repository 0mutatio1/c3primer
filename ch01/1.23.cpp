#include <iostream>
#include "Sales_item.h"

int main() {
	//Sales_item book;

	// std::cin >> book;
	// std::cout << book << std::endl;

	Sales_item item0, item1;
	while (std::cin >> item1) {
		
		item0 = item0 + item1;

	}

	std::cout << ">>>" << item0 << std::endl;

	return 1;
}