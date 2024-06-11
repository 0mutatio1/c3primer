
#include <iostream>
#include <string>
#include <random>

using namespace std;


void _17_4() {
    default_random_engine e;  // generates random unsigned integers
    for (size_t i = 0; i < 10; ++i)
        // e() "calls" the object to produce the next random number
        cout << e() << " ";
}

void _uniform() {
    // uniformly distributed from 0 to 9 inclusive
    uniform_int_distribution<unsigned> u(0, 9);
    default_random_engine e;  // generates unsigned random integers
    for (size_t i = 0; i < 10; ++i)
        // u uses e as a source of numbers
        // each call returns a uniformly distributed value in the specified range
        cout << u(e) << " ";
}