
#include <string>

void _4_6() {
	std::string s1 = "a string", * p = &s1;
	auto n = s1.size(); // run the size member of the string s1
	n = (*p).size();    // run size on the object to which p points
	n = p->size();      // equivalent to (*p).size()
}