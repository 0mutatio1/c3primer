
#include <string>
using std::string;

void _3_2() {
	string s1;            // default initialization; s1 is the empty string
	string s2 = s1;       // s2 is a copy of  s1
	string s3 = "hiya";   // s3 is a copy of the string literal
	string s4(10, 'c');   // s4 is cccccccccc

	string s5 = "hiya";  // copy initialization
	string s6("hiya");   // direct initialization
	string s7(10, 'c');  // direct initialization; s7 is cccccccccc
	string s8 = string(10, 'c'); // copy initialization; s8 is cccccccccc

	string temp(10, 'c'); // temp is cccccccccc
	string s8 = temp;     // copy temp into s8
}

void _3_2() {
	
	string word;
	
	while (std::cin >> word) {
		std::cout << word << std::endl;
	}

}

void _3_3() {
	// Explain how whitespace characters are handled in the string input operator and in the getline function.
	// \n is left in the input stream by the string input operator, but is removed by getline
	string line;
	while (getline(cin, line)) {
		cout << line << endl;
	}
}