
// vector
// deque
// list
// forward_list
// array
// string
#include <string>
#include <vector>
using std::vector;
using std::string;

int main() {

	vector<int> v1 = { 1, 3, 5, 7, 9, 12 };
	vector<int> v2 = { 1, 3, 9 };
	vector<int> v3 = { 1, 3, 5, 7 };
	vector<int> v4 = { 1, 3, 5, 7, 9, 12 };
	v1 < v2;  // true; v1 and v2 differ at element [2]: v1[2] is less than v2[2]
	v1 < v3;  // false; all elements are equal, but v3 has fewer of them;
	v1 == v4; // true; each element is equal and v1 and v4 have the same size()
	v1 == v2; // false; v2 has fewer elements than v1

	/////////////////
	const char* cp = "Hello World!!!"; // null-terminated array
	char noNull[] = { 'H', 'i' };        // not null terminated
	string s1(cp);  // copy up to the null in cp; s1 == "Hello World!!!"
	string s2(noNull, 2); // copy two characters from no_null; s2 == "Hi"
	string s3(noNull);   // undefined: noNull not null terminated
	string s4(cp + 6, 5);// copy 5 characters starting at cp[6]; s4 == "World"
	string s5(s1, 6, 5); // copy 5 characters starting at s1[6]; s5 == "World"
	string s6(s1, 6);    // copy from s1 [6] to end of s1; s6 == "World!!!"
	string s7(s1, 6, 20);  // ok, copies only to end of s1; s7 == "World!!!"
	string s8(s1, 16);   // throws an out_of_range exception

	//

	string s("hello world");
	string s2 = s.substr(0, 5);  // s2 = hello
	string s3 = s.substr(6);     // s3 = world
	string s4 = s.substr(6, 11); // s3 = world
	string s5 = s.substr(12);    // throws an out_of_range exception

	//

	s.insert(s.size(), 5, '!'); // insert five exclamation points at the end of s
	s.erase(s.size() - 5, 5);   // erase the last five characters from s

	//
	const char* cp = "Stately, plump Buck";
	s.assign(cp, 7);            //  s == "Stately"
	s.insert(s.size(), cp + 7); //  s == "Stately, plump Buck"

	//
	string s = "some string", s2 = "some other string";
	s.insert(0, s2); // insert a copy of s2 before position 0 in s
	// insert s2.size() characters from s2 starting at s2[0] before s[0]
	s.insert(0, s2, 0, s2.size());

	return 0;
}