#include <iostream>
#include "Sales_item.h"

int main() {

	Sales_item total;

	int count = 1;
	if (std::cin >> total) {	
		Sales_item item;
		while (std::cin >> item) {
			if (total.isbn() == item.isbn()) {
				total += item;
				count++;
			}
			else {

				std::cout << total << std::endl;
				std::count << "Total count: " << count << std::endl;

				std::cout << total << std::endl;
				total = item;
				count = 1;
			}
		}
		
	} else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}


	return 1;
}