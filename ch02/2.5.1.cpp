
int main() {

	typedef double wages;
	typedef wages base, * p;

	// using SI = Sales_item;  // SI is a synonym for Sales_item


	//

	typedef char* pstring;
	const pstring cstr = 0; // cstr is a constant pointer to char
	const pstring* ps;      // ps is a pointer to a constant pointer to char

	const char* cstr = 0; // wrong interpretation of const pstring cstr

	return 0;
}