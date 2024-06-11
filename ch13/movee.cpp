#include <utility>

void moveee() {
	
	
	int&& rr1 = 42;    // ok: literals are rvalues
	// int&& rr2 = rr1;   // error: the expression rr1 is an lvalue!

	int&& rr3 = std::move(rr1);   // ok
}