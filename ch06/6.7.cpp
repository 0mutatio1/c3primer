#include <iostream>
#include <string>
using std::string;

// compares lengths of two strings
bool lengthCompare(const string&, const string&);
// pf points to a function returning bool that takes two const string references
bool (*pf)(const string&, const string&);  // uninitialized




// third parameter is a function type and is automatically treated as a pointer to function
void useBigger(const string& s1, const string& s2,
    bool pf(const string&, const string&));
// equivalent declaration: explicitly define the parameter as a pointer to function
void useBigger(const string& s1, const string& s2,
    bool (*pf)(const string&, const string&));

using F = int(int*, int);     // F is a function type, not a pointer
using PF = int(*)(int*, int); // PF is a pointer type


void _6_7() {

}