
void _2_4_1() {
	const int ci = 1024;
	const int& r1 = ci;   // ok: both reference and underlying object are const
	// r1 = 42;              // error: r1 is a reference to const
	// int& r2 = ci;         // error: non const reference to a const object

	const double pi = 3.14;   // pi is const; its value may not be changed
	// double* ptr = &pi;        // error: ptr is a plain pointer
	const double* cptr = &pi; // ok: cptr may point to a double that is const
	// *cptr = 42;               // error: cannot assign to *cptr

	int errNumb = 0;
	int* const curErr = &errNumb;  // curErr will always point to errNumb
	const double pi = 3.14159;
	const double* const pip = &pi; // pip is a const pointer to a const object

}

void _2_27() {
	// Which of the following initializations are legal? Explain why.
	// int i = -1, &r = 0; // illegal, r must refer to an object
	// int *const p2 = &i2; // illegal, p2 must be initialized
	// const int i = -1, &r = 0; // illegal, r must refer to an object
	// const int *const p3 = &i2; // illegal, p3 must be initialized
	// const int *p1 = &i2; // legal
	// const int &const r2; // illegal, r2 must be initialized
	// const int i2 = i, &r = i; // legal
}

void _2_28() {
	// Explain the following definitions. Identify any that are illegal.
	// int i, *const cp; // illegal, cp must be initialized
	// int *p1, *const p2; // illegal, p2 must be initialized
	// const int ic, &r = ic; // illegal, ic must be initialized
	// const int *const p3; // illegal, p3 must be initialized
	// const int *p; // legal
}


void _2_29() {
	// Using the variables in the previous exercise, which of the following assignments are legal? Explain why.
	// i = ic; // legal, ic is an int
	// p1 = p3; // illegal, p3 is a const pointer
	// p1 = &ic; // illegal, ic is a const int
	// p3 = &ic; // illegal, p3 is a const pointer
	// p2 = p1; // illegal, p2 is a const pointer
	// ic = *p3; // illegal, ic is a const int
}