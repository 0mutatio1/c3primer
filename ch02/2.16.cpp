
void _2_16() {
	int i = 0, & r1 = i;
	double d = 0, & r2 = d;
	r2 = 3.14159;

	r2 = r1;

	i = r2;

	r1 = d;


	int j, & ri = j;
	j = 5; ri = 10;
}