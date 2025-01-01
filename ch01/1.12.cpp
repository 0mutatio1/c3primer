void loop() {
	int sum = 0;
	// sum values from -100 to 100 inclusive
	for (int i = -100; i <= 100; ++i)
		sum += i;
	// print the sum
	std::cout << "The sum of -100 to 100 inclusive is "
		<< sum << std::endl;
	
}