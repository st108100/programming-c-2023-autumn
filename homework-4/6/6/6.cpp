#include <iostream>
using namespace std;
int main() {
	int N;
	std::cin >> N;
	int* array = new int[N];
	for (int i = 0; i < N; i++) {
	std::cin >> array[i];
	}
	int min = 0, k = 0;
	int max = 0, p = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (array[i] <= min) {
			min = array[i];
			k = i; 
		}
		if (array[i] >= max){
			max = array[i];
			p = i;
		}
		int c;
		c = array[k];
		array[k] = array[p];
		array[p] = c;
	}
	for (int i = 0; i < N; i++) {
		std::cout << array[i];
	}
	delete[] array;
	return 0;
}