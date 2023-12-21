#include <iostream>
using namespace std;
int main() {
	int N;
	std::cin >> N;
	int* array = new int[N];
	int c = 0;
	int n= 0;
	for (int i = 0; i < N; i++) {
		std::cin >> array[i];
		if (array[i] > 0) {
			c++;
			array[n++] = array[i];
		}
	}
	N = c;
	for (int i = 0; i < c; i++) {
		std::cout << array[i];
	}
	delete[] array;
	return 0;
}