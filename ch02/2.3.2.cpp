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

void _2_18() {
	// Write code to change the value of a pointer.
	int i = 42;
	int* p = &i;
	*p = 0;
}

void _2_19() {
	// Explain the key differences between pointers and references.
	// A reference is another name for an object, a pointer is an object.
	// A reference must be initialized, a pointer can be initialized at any time.
	// A reference always refers to the object with which it is initialized, a pointer can point to different objects.
	// A reference always refers to the same object, a pointer can point to different objects.
	// A reference is not an object, a pointer is an object.
	// A reference is not a variable, a pointer is a variable.
	// A reference is not a constant, a pointer can be a constant.
	// A reference is not a pointer, a pointer is a pointer.
	// A reference is not a null, a pointer can be null.
}

void _2_20() {
	// What does the following program do?
	int i = 42;
	int* p1 = &i; // p1 points to i
	*p1 = *p1 * *p1; // i = i * i
}

void _2_21() {
	// Explain each of the following definitions. Indicate whether any are illegal and, if so, why.
	// int i = 0; // i is an int with value 0
	// double* dp = &i; // illegal, dp is a pointer to double, i is an int
	// int *ip = i; // illegal, ip is a pointer to int, i is an int
	// int* ip = &i; // ip is a pointer to int, i is an int
}

void _2_22() {
	// Assuming p is a pointer to int, explain the following code:
	// if (p) // ...
	// if (*p) // ...
	// if (p) // if p is not a null pointer
	// if (*p) // if the object to which p points is not 0
}

void _2_23() {
	// Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?
	// No, you cannot determine whether p points to a valid object. You can only determine whether p is a null pointer.
}

void _2_24() {
	// Why is the initialization of p legal but that of lp illegal?
	int i = 42;
	void* p = &i; // legal
	// long* lp = &i; // illegal, lp is a pointer to long, i is an int
}

void _2_25() {
	// (a) int * ip, &r = ip; // illegal, ip is a pointer to int, r is a reference to int
	// (b) int i, * ip = 0; // legal, i is an int, ip is a null pointer
	// (c) int* ip, ip2; // legal, ip is a pointer to int, ip2 is an int
}