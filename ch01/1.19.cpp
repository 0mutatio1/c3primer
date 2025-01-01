
#include <iostream>

void _1_19() {
    // rewrite the program from 1.4.1
    // print range of numbers so that it handles input in which the first number is larger than the second
    int v1 = 0, v2 = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    if (v1 > v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    while (v1 <= v2) {
        std::cout << v1 << std::endl;
        ++v1;
    }    

}