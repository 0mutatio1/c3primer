
void _4_9() {
	int ia[2];
	// sizeof(ia)/sizeof(*ia) returns the number of elements in ia
	constexpr size_t sz = sizeof(ia) / sizeof(*ia);
	int arr2[sz];  // ok sizeof returns a constant expression ¡ì 2.4.4 (p. 65)
}