#include <iostream>
// using declaration; when we use the name cin, we get the one from the namespace std
using std::cin;
using std::cout; 
using std::endl;

void _3_1() {
    cout << "Enter two numbers:" << endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
        << " is " << v1 + v2 << endl;
}