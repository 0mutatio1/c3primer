
void _2_5_3() {


	// decltype(f()) sum = x; // sum has whatever type f returns

	const int ci = 0, & cj = ci;
	decltype(ci) x = 0; // x has type const int
	decltype(cj) y = x; // y has type const int& and is bound to x
	// decltype(cj) z;     // error: z is a reference and must be initialized
	// decltype of an expression can be a reference type
	int i = 42, * p = &i, & r = i;
	decltype(r + 0) b;  // ok: addition yields an int; b is an (uninitialized) int
	// decltype(*p) c;     // error: c is int& and must be initialized

	// decltype of a parenthesized variable is always a reference
	// decltype((i)) d;    // error: d is int& and must be initialized
	decltype(i) e;      // ok: e is an (uninitialized) int

}

void _2_36() {
	// In the following code, determine the type of each variable and the value each variable has when the code finishes:
	int a = 3, b = 4;
	decltype(a) c = a;  // c is an int
	decltype((b)) d = a; // d is an int&
	++c; // c is 4
	++d; // a is 4
}

void _2_37() {
	int a = 3, b = 4;
	decltype(a) c = a;  // c is an int
	decltype(a = b) d = a; // d is an int&
}

void _2_38() {
	// Describe the differences in type deduction between decltype and auto. Give an example of an expression where auto and decltype will deduce the same type and an example where they will deduce different types.
	// auto ignores top-level consts, decltype does not
	const int i = 0, & r = i;
	auto a = i;  // a is an int
	decltype(i) d = i; // d is a const int
	auto b = r;  // b is an int
	decltype(r) e = r; // e is a const int&
}