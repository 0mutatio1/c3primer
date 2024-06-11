
#include "Blob.h"

template <typename T>
void Blob<T>::check(size_type i, const std::string& msg) const {
	if (i >= data->size())
		throw std::out_of_range(msg);
}
template <typename T>
T& Blob<T>::back() {
	check(0, "back on empry Blob");
	return data->back();
}
template <typename T>
T& Blob<T>::operator[](size_type i) {
	check(i, "subscript out of range");
	return (*data)[i];
}

template <typename T> void Blob<T>::pop_back() {
	check(0, "pop_back on empty Blob");
	data->pop_back();
}

void test() {
	Blob<int> squares = { 0,1,2,3,4,5,6,7,8,9 };
	for (size_t i = 0; i != squares.size(); ++i) {
		squares[i] = i * i;
	}
}





