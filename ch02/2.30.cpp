
void _2_30() {
	const int v2 = 0;    
	int v1 = v2;
	int* p1 = &v1, & r1 = v1;
	const int* p2 = &v2, 
		* const p3 = &v1, 
		& r2 = v2;
}