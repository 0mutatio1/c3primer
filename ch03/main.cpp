
// Iterators

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s("some string");
    if (s.begin() != s.end()) { // make sure s is not empty
        auto it = s.begin();    // it denotes the first character in s
        *it = toupper(*it);     // make that character uppercase
    }
    std::cout << s << std::endl;

    // process characters in s until we run out of characters or we hit a whitespace
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it); // capitalize the current character
    std::cout << s << std::endl;

    int ia[] = { 0,1,2,3,4,5,6,7,8,9 }; // ia is an array of ten ints
    auto ia2(ia); // ia2 is an int* that points to the first element in ia
    *ia2 = 42;     // error: ia2 is a pointer, and we can't assign an int to a pointer

    for (const auto& s : ia)
        std::cout << s << ' ';
    std::cout << '\n';
}