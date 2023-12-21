#include <iostream>
using namespace std;
int main() {
	int N;
	std::cin >> N;
	int* array = new int[N]; //я поняла, что нужно сделать число N константой. В роликах на утубе предложили такой вариант. Надеюсь, это так и делается...
	for (int i = 0; i < N; i++) {
		std::cin >> array[i];
	}
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (array[i] > 0) {
			c++;
		}
	}
	std::cout << c;
	delete[] array;// используется выделение динамической памяти в куче (heap). использую delete[]
	return 0;
}
