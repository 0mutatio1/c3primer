// Iterators

#include <string>

void _3_4() {
    std::string s("some string");
    if (s.begin() != s.end()) { // make sure s is not empty
        auto it = s.begin();    // it denotes the first character in s
        *it = toupper(*it);     // make that character uppercase
    }
}