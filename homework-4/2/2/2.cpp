#include <iostream>
using namespace std;
int main() {
	int N;
	std::cin >> N;
	int* array = new int[N];
	int c = 0;
	for (int i = 0; i < N; i++) {
		std::cin >> array[i];
		if (i % 2 == 0) {
			std::cout << array[i];
		}
	}
	delete[] array;
	return 0;
}