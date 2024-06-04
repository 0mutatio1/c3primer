
void _2_4_4() {
	const int max_files = 20;    // max_files is a constant expression
	const int limit = max_files + 1; // limit is a constant expression
	int staff_size = 27;       // staff_size is not a constant expression
	const int sz = 1; // sz is not a constant expression

	//

	constexpr int mf = 20;        // 20 is a constant expression
	constexpr int limit = mf + 1; // mf + 1 is a constant expression
	constexpr int sz = 1;    // ok only if size is a constexpr function

	//

	const int* p = nullptr;     // p is a pointer to a const int
	constexpr int* q = nullptr; // q is a const pointer to int

	//

	constexpr int* np = nullptr; // np is a constant pointer to int that is null
	int j = 0;
	constexpr int i = 42;  // type of i is const int
	// i and j must be defined outside any function
	// constexpr const int* p = &i; // p is a constant pointer to the const int i
	// constexpr int* p1 = &j;      // p1 is a constant pointer to the int j

}