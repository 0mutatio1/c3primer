
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

void _2_30() {
	// For each of the following declarations indicate whether the object being declared has top-level or low-level const.
	const int v2 = 0; int v1 = v2; // top-level const
	int* p1 = &v1, &r1 = v1; // low-level const
	const int* p2 = &v2, *const p3 = &i, &r2 = v2; // low-level const
}

void _2_31() {
	// Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.
	// r1 = v2; // legal, v2 is a const int
	// p1 = p2; // illegal, p2 is a pointer to a const int
	// p2 = p1; // legal, p1 is a pointer to an int
	// p1 = p3; // illegal, p3 is a const pointer to an int
	// p2 = p3; // legal, p3 is a const pointer to an int
}