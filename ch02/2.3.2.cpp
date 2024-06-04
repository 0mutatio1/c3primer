#include <iostream>

//  int *ip1, *ip2;  // both ip1 and ip2 are pointers to int
//  double dp, *dp2; // dp2 is a pointer to double; dp is a double
//

int _2_3_2() {
	int ival = 42;
	int *p = &ival; // p holds the address of ival; p is a pointer to ival
	std::cout << " p: " << p << std::endl;
	std::cout << " *p: " << *p << std::endl;

	double dval;
	double* pd = &dval;  // ok: initializer is the address of a double
	double* pd2 = pd;    // ok: initializer is a pointer to double
	// int* pi = pd;  // error: types of pi and pd differ
	// pi = &dval;    // error: assigning the address of a double to a pointer to int

	// reference and pointer
	int i = 42;
	int& r = i;   // & follows a type and is part of a declaration; r is a reference
	int* p;       // * follows a type and is part of a declaration; p is a pointer
	p = &i;       // & is used in an expression as the address-of operator
	*p = i;       // * is used in an expression as the dereference operator
	int& r2 = *p; // & is part of the declaration; * is the dereference operator

	// null pointer

	int* p1 = nullptr; // equivalent to int *p1 = 0;
	int* p2 = 0;       // directly initializes p2 from the literal constant 0
	// must #include cstdlib
	int* p3 = NULL;    // equivalent to int *p3 = 0;

	int ivall = 1024;
	int* pi = 0;      // pi is a valid, null pointer
	int* pi2 = &ivall; // pi2 is a valid pointer that holds the address of ival
	if (pi)  // pi has value 0, so condition evaluates as false
		// ...
	{
	}
	if (pi2) // pi2 points to ival, so it is not 0; the condition evaluates as true
		// ...
	{
	}

	// void* Pointers
	double obj = 3.14, * pd = &obj;
	// ok: void* can hold the address value of any data pointer type
	void* pv = &obj;  // obj can be an object of any type
	pv = pd;          // pv can hold a pointer to any type

	return 0;
}

int main() {
	return 0;
}