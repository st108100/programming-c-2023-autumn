#include <iostream>
using namespace std;
int main() {
	int N;
	std::cin >> N;
	int* array = new int[N];
	for (int i = 0; i < N; i++) {
		std::cin >> array[i];
		if (array[i] % 2 != 0) {
			std::cout << array[i];
		}
	}
	delete[] array;
	return 0;
}