#include <iostream>
#include <vector>

void swapvec(std::vector<int>& vec, int* arr) {
	size_t size = vec.size();
	for (size_t i = 0; i < size; ++i) {
		std::swap(vec[i], arr[i]);
	}
}

int main() {
	std::vector<int> a = { 1,2,3,4 };
	int b[] = { 2,4,6,8 };
	swapvec(a, b);

	for (size_t i = 0; i < a.size(); ++i)	{
		std::cout << a[i];
	}

	std::cout << std::endl;

	for (size_t i = 0; i < a.size(); ++i) {
		std::cout << b[i];
	}

	return 0;
}