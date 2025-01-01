#include <iostream>
// lvalue reference

int main() {

    int ival = 1024;
    int &refVal = ival; // refVal refers to (is another name for) ival
    // int &refVal2; // error: a reference must be initialized
    // int &refVal3 = 10; // error: initializer must be an object
    int ii = refVal; // initializes ii to the same value as ival

    int i = 1024, i2 = 2048;
    int &r = i, r2 = i2; // r is a reference, r2 is an int
    int i3 = 1024, &ri = i3; // i3 is an int, ri is a reference
    int &r3 = i3, &r4 = i2; // both r3 and r4 are references

}

void _2_15() {
    // Which of the following definitions are invalid? Why?
    // int ival = 1.01; // valid
    // int &rval1 = 1.01; // invalid, initializer must be an object
    // int &rval2 = ival; // valid
    // int &rval3; // invalid, a reference must be initialized
}

void _2_16() {
    // Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
    // int i = 0, &r1 = i; double d = 0, &r2 = d;
    // r2 = 3.14159; // valid, assigns 3.14159 to d
    // r2 = r1; // valid, assigns the value of i to d
    // i = r2; // valid, assigns the value of d to i
    // r1 = d; // valid, assigns the value of d to i
}

void _2_17() {
    // What does the following code print?
    // int i, &ri = i;
    // i = 5; ri = 10;
    // std::cout << i << " " << ri << std::endl;
    // prints 10 10
}