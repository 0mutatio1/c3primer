
int main() {

	//
	const int buffSize = 512;
	// buffSize = 1;

	int i = 42;
	const int ci = i;    // ok: the value in i is copied into ci
	int j = ci;          // ok: the value in ci is copied into j


	//To share a const object among multiple files, you must define the variable as extern.
	// file_1.cc defines and initializes a const that is accessible to other files
	// extern const int bufSize = fcn();
	// file_1.h
	// extern const int bufSize; // same bufSize as defined in file_1.cc

	return 0;
}
void _2_32() {
	int null = 0, *p = &null;
	int null = 0, *p = null; // illegal, p is a pointer to int, null is an int
}
void _2_33() {
	int i = 0, &r = i;
	auto a = r; // ais anint(ris an alias fori, which has typeint)

	const int ci = i, &cr = ci;
	auto b = ci; // b is an int (top-level const in ci is dropped)
	auto c = cr; // c is an int (cr is an alias for ci whose const is top-level) auto d = &i; // dis anint*(&of anintobject isint*)
	auto d = &i; // d is an int*(&of anintobject isint*)
	auto e = &ci; // e is const int* (& of a const object is low-level const)
	auto &g = ci; // g is a const int& that is bound to ci 

	a = 42; // a is an int (not a reference), so a gets the value 42
	b = 42; // b is an int (not a reference), so b gets the value 42
	c = 42; // c is an int (not a reference), so c gets the value 42
	// d = 42; // error: d is an int* and we can't assign an int to a pointer
	*d = 42; 
	// e = 42; // error: e is a pointer to const
	// g = 42 // error: g is a reference to const

}

