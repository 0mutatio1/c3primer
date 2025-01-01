
#include <iostream>

void _1_11() {
    int v1, v2;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    while (v1 <= v2) {
        std::cout << v1 << std::endl;
        ++v1;
    }
}