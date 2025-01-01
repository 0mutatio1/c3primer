#include <iostream>

void decr() {
    int v1=0, v2=10;
    while (v2 >= v1) {
        std::cout << v2 << std::endl;
        --v2;
    }
}