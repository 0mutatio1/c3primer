
void _1_13() {
    //rewrite the while loop that prints the numbers from 50 to 100
    //using for loop
    for (int i = 50; i <= 100; ++i) {
        std::cout << i << std::endl;
    }
    //rewrite the while loop that prints the numbers from 10 down to 0
    //using for loop
    for (int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
    }
    //rewrite the while loop that sums the numbers from 50 to 100
    //using for loop
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
}