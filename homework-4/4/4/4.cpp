#include <iostream>
using namespace std;
int main() {
	int N; 
	std::cin >> N;
	int* array = new int[N];
	int c = 0;
	for (int i = 0; i < N; i++) {
		std::cin >> array[i];
		if (array[i] > c) {
			c = array[i];
		}
	}
	std::cout << c;
	delete[] array;
	return 0;
}
