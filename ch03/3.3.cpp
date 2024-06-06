
#include <vector>
#include <string>
using std::vector;
using std::string;

void _3_3() {
	vector<int> ivec;             // ivec holds objects of type int
	vector<vector<string>> file;  // vector whose elements are vectors


	vector<int> ivec;             // initially empty
	// give ivec some values
	vector<int> ivec2(ivec);      // copy elements of ivec into ivec2
	vector<int> ivec3 = ivec;     // copy elements of ivec into ivec3
	// vector<string> svec(ivec2);   // error: svec holds strings, not ints
	
	vector<string> articles = { "a", "an", "the" };
	vector<string> v1{ "a", "an", "the" };  // list initialization
	// vector<string> v2("a", "an", "the");  // error

	vector<int> ivec(10, -1);       // ten int elements, each initialized to -1
	vector<string> svec(10, "hi!"); // ten strings; each element is "hi!"

	vector<int> ivec(10);    // ten elements, each initialized to 0
	vector<string> svec(10); // ten elements, each an empty string

	//

	vector<int> v1(10);    // v1 has ten elements with value 0
	vector<int> v2{ 10 };    // v2 has one element with value 10
	vector<int> v3(10, 1); // v3 has ten elements with value 1
	vector<int> v4{ 10, 1 }; // v4 has two elements with values 10 and 1


}