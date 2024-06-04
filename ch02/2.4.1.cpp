
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