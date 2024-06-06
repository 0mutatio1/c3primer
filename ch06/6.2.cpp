#include <iostream>
#include <string>
using std::string;
#include <vector>
using std::vector;
// passed by reference
// called by reference


// function that takes a pointer and sets the pointed-to value to zero
void reset(int* ip)
{
    *ip = 0;  // changes the value of the object to which ip points
    ip = 0;   // changes only the local copy of ip; the argument is unchanged
}

// function that takes a reference to an int and sets the given object to zero
void reset(int& i)  // i is just another name for the object passed to reset
{
    i = 0;  // changes the value of the object to which i refers
}

// compare the length of two strings
bool isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}



// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how often c occurs
string::size_type find_char(const string& s, char c,
    string::size_type& occurs)
{
    auto ret = s.size();   // position of the first occurrence, if any
    occurs = 0;            // set the occurrence count parameter
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            if (ret == s.size())
                ret = i;   // remember the first occurrence of c
            ++occurs;      // increment the occurrence count
        }
    }
    return ret;            // count is returned implicitly in occurs
}

void print(const char* cp)
{
    if (cp)          // if cp is not a null pointer
        while (*cp)  // so long as the character it points to is not a null character
            std::cout << *cp++; // print the character and advance the pointer
}

void print(const int* beg, const int* end)
{
    // print every element starting at beg up to but not including end
    while (beg != end)
        std::cout << *beg++ << std::endl; // print the current element
                                // and advance the pointer
}

// const int ia[] is equivalent to const int* ia
// size is passed explicitly and used to control access to elements of ia
void print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i) {
        std::cout << ia[i] << std::endl;
    }
}

// ok: parameter is a reference to an array; the dimension is part of the type
void print(int(&arr)[10])
{
    for (auto elem : arr)
        std::cout << elem << std::endl;
}

// disaster: this function returns a reference to a local object
const string& manip()
{
    string ret;
    // transform ret in some way
    if (!ret.empty())
        return ret;     // WRONG: returning a reference to a local object!
    else
        return "Empty"; // WRONG: "Empty" is a local temporary string
}

char& get_val(string& str, string::size_type ix)
{
    return str[ix]; // get_val assumes the given index is valid
}

vector<string> process()
{
    // . . .
    // expected and actual are strings
    //if (expected.empty())
    //    return {};  // return an empty vector
    //else if (expected == actual)
    //   return { "functionX", "okay" }; // return list-initialized vector
   // else
    //    return { "functionX", expected, actual };
}

// calculate val!, which is 1 * 2 * 3 . . . * val
int factorial(int val)
{
    if (val > 1)
        return factorial(val - 1) * val;
    return 1;
}

// Type (*function(parameter_list))[dimension]
// int (*func(int i))[10];
// fcn takes an int argument and returns a pointer to an array of ten ints
auto func(int i) -> int(*)[10];

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
// returns a pointer to an array of five int elements
decltype(odd)* arrPtr(int i)
{
    return (i % 2) ? &odd : &even; // returns a pointer to the array
}

void _6_2() {

}