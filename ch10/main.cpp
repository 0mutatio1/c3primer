#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;



int main() {
	vector<int> vec = { 1 , 2 };
	int val = 42; // value we'll look for
	// result will denote the element we want if it's in vec, or vec.cend() if not
	auto result = std::find(vec.cbegin(), vec.cend(), val);
	// report the result
	cout << "The value " << val
		<< (result == vec.cend()
			? " is not present" : " is present") << endl;



	int ia[] = { 27, 210, 12, 47, 109, 83 };
	int val = 83;
	int* result = std::find(std::begin(ia), std::end(ia), val);




	vector<int> vec;  // empty vector
	// disaster: attempts to write to ten (nonexistent) elements in vec
	// fill_n(vec.begin(), 10, 0);
	return 0;
}