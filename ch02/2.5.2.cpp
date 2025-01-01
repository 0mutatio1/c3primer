
void _2_5_2() {

	auto i = 1;

	auto i = 0, * p = &i;      // ok: i is int and p is a pointer to int
	// auto sz = 0, pi = 3.14;   // error: inconsistent types for sz and pi

	int i = 0, & r = i;
	auto a = r;  // a is an int (r is an alias for i, which has type int)

	//

	const int ci = i, & cr = ci;
	auto b = ci;  // b is an int (top-level const in ci is dropped)
	auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
	auto d = &i;  // d is an int*(& of an int object is int*)
	auto e = &ci; // e is const int*(& of a const object is low-level const)

	//
	const auto f = ci; // deduced type of ci is int; f has type const int



}

void _2_34() {

}

void _2_35() {
	const int i = 42;  // i is const int
	auto j = i;        // j is int
	const auto &k = i; // k is const int&
	auto *p = &i;   // p is a pointer to const int
	const auto j2 = i, &k2 = i; // j2 is const int, k2 is const int&
}