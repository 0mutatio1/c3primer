#include <string>
using std::string;

#include <list>
using std::list;

#include <memory>
using std::shared_ptr;
using std::make_shared;


int main() {
	shared_ptr<string> p1;    // shared_ptr that can point at a string
	shared_ptr<list<int>> p2; // shared_ptr that can point at a list of ints

	// if p1 is not null, check whether it's the empty string
	if (p1 && p1->empty())
		*p1 = "hi";  // if so, dereference p1 to assign a new value to that string



	// shared_ptr that points to an int with value 42
	shared_ptr<int> p3 = make_shared<int>(42);
	// p4 points to a string with value 9999999999
	shared_ptr<string> p4 = make_shared<string>(10, '9');
	// p5 points to an int that is value initialized (¡ì 3.3.1 (p. 98)) to 0
	shared_ptr<int> p5 = make_shared<int>();


	//
	shared_ptr<double> p1; // shared_ptr that can point at a double
	shared_ptr<int> p2(new int(42)); // p2 points to an int with value 42

	//
	// call get_size to determine how many ints to allocate
	int* pia = new int[2]; // pia points to the first of these ints
	delete[] pia; // pa must point to a dynamically allocated array or be null

	return 0;
}




