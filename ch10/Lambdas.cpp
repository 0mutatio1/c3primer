#include <string>
using std::string;
#include <vector>
using std::vector;

#include <algorithm>
#include <iostream>

// [capture list] (parameter list) -> return type  { function body }

void Lambdas() {

	auto f = [] { return 42; };
	[](const string& a, const string& b)
	{ return a.size() < b.size(); };
	auto words = { "a", "b", "C" };
	auto sz = 1;
	// get an iterator to the first element whose size() is >= sz
	auto wc = std::find_if(words.begin(), words.end(),
		[sz](const string& a)
		{ return a.size() >= sz; });
}

void fcn1()
{
	size_t v1 = 42;  // local variable
	// copies v1 into the callable object named f
	auto f = [v1] { return v1; };
	v1 = 0;
	auto j = f(); // j is 42; f stored a copy of v1 when we created it
}


void fcn2()
{
	size_t v1 = 42;  // local variable
	// the object f2 contains a reference to v1
	auto f2 = [&v1] { return v1; };
	v1 = 0;
	auto j = f2(); // j is 0; f2 refers to v1; it doesn't store it
}