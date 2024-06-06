

#include <iostream>
#include <string>
using std::string;

typedef string::size_type sz;  // typedef see ¡ì 2.5.1 (p. 67)
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');


// inline version: find the shorter of two strings
inline const string&
shorterString(const string& s1, const string& s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

constexpr int new_sz() { return 42; }
constexpr int foo = new_sz();  // ok: foo is a constant expression

void _6_5() {
	string window;
	window = screen();  // equivalent to screen(24,80,' ')
	window = screen(66);// equivalent to screen(66,80,' ')
	window = screen(66, 256);      // screen(66,256,' ')
	window = screen(66, 256, '#'); // screen(66,256,'#')
}