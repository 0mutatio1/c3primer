#include <iostream>
int forLoop0()
{
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to 10
    for (int val = 1; val <= 10; val++) {
        sum += val;   // assigns sum + val to sum
    }
    std::cout << "Sum of 1 to 10 inclusive is "
        << sum << std::endl;

    // while loop equivalent
    sum = 0;
    val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    // the advantage of for loop is that the initialization, condition, and update are all in one place
    // the disadvantage is that the initialization is not visible outside the loop

    // the difference between for and while loop is that the for loop has the initialization, condition, and update in one place

    return 0;
}