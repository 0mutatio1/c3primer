#include <string>
#include <iostream>

void initialize() {
	int units_sold = 0;
	int units_soldd = { 0 };
	int units_solddd{ 0 };
	int units_soldddd(0);

	long double ld = 3.1415926536;
	// int a{ ld }, b = { ld }; // error: narrowing conversion required
	// int c(ld), d = ld;   // ok: but value will be truncated
	std::string empty;  // empty implicitly initialized to the empty string
	// Sales_item item;    // default-initialized Sales_item object
}

std::string global_str;
int global_int;
int main()
{
	int local_int = 0;
	
	std::string local_str;

	std::cout << global_int << std::endl;
	std::cout << global_str << std::endl;
	std::cout << local_int << std::endl;
	std::cout << local_str << std::endl;
}