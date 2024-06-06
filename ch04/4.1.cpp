
void _4_1() {

	// precedence
	// associativity
	// order of evaluation

	// Lvalues and Rvalues

	int i = 1024;
	int k = -i; // i is -1024
	bool b = true;
	bool b2 = -b; // b2 is true!

	int ival1 = 21 / 6;  // ival1 is 3; result is truncated; remainder is discarded
	int ival2 = 21 / 7;  // ival2 is 3; no remainder; result is an integral value


	int ival = 42;
	double dval = 3.14;
	ival % 12;   // ok: result is 6
	// ival % dval; // error: floating-point operand

}