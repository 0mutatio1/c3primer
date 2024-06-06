#include <vector>
#include <iostream>

void _3_3_2() {
	std::vector<int> v2;        // empty vector
	for (int i = 0; i != 100; ++i)
		v2.push_back(i);    // append sequential integers to v2
	// at end of loop v2 has 100 elements, values 0 . . . 99

	std::vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	for (auto& i : v)     // for each element in v (note: i is a reference)
		i *= i;           // square the element value
	for (auto i : v)      // for each element in v
		std::cout << i << " "; // print the element
	std::cout << std::endl;

	// count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
	std::vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
	unsigned grade;
	while (std::cin >> grade) {      // read the grades
		if (grade <= 100)       // handle only valid grades
			++scores[grade / 10]; // increment the counter for the current cluster
	}
}