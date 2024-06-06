#include <string>
using std::string;

void print(const char* cp);
void print(const int* beg, const int* end);
void print(const int ia[], size_t size);


// int j[2] = { 0,1 };
// print("Hello World");        // calls print(const char*)
// print(j, end(j) - begin(j)); // calls print(const int*, size_t)
// print(begin(j), end(j));     // calls print(const int*, const int*)




// return a reference to the shorter of two strings
const string& shorterString(const string& s1, const string& s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}



string read();
void print(const string&);
void print(double);   // overloads the print function
void fooBar(int ival)
{
    bool read = false; // new scope: hides the outer declaration of read
    // string s = read(); // error: read is a bool variable, not a function
    // bad practice: usually it's a bad idea to declare functions at local scope
    void print(int);  // new scope: hides previous instances of print
    // print("Value: "); // error: print(const string &) is hidden
    print(ival);      // ok: print(int) is visible
    print(3.14);      // ok: calls print(int); print(double) is hidden
}