
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