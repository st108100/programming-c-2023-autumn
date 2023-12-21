#include <iostream>
void printArray(int* arr, int len) {
	if (arr == nullptr or len <= 0) {
		std::cout << "Array is empty" << std::endl;
		return;
	}
	for (int i = 0; i < len; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void addElement(int*& arr, int& len, int element) {
	int* array = new int[len + 1];
	for (int i = 0; i < len; i++) {
		array[i] = arr[i];
	}
	array[len] = element;
	delete[] arr;
	arr = array;
	len++;
}
void removeElement(int*& arr, int& len, int index) {
	if (index < 0 or index >= len) {
		std::cout << "Impossible" << std::endl;
		return;
	}
	int* array = new int[len - 1];
	for (int i = 0, k = 0; i < len; i++) {
		if (i != index) {
			array[k++] = arr[i];
		}
	}
	delete[] arr;
	arr = array;
	len--;
}
void sortArray(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int k = 0; k < len - i - 1; k++) {
			if (arr[k] > arr[k + 1]) {
				int c = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = c;
			}
		}
	}
}
void reverseArray(int* arr, int len) {
	for (int i = 0, k = len - 1; i < k; ++i, k--) {
		int c = arr[i];
		arr[k] = arr[k];
		arr[k] = c;
	}
}
void swapMinMaxElements(int* arr, int len) {
	if (arr == nullptr or len <= 1) {
		std::cout << "Impossible" << std::endl;
		return;
	}

	int minIndex = 0, maxIndex = 0;
	for (int i = 1; i < len; ++i) {
		if (arr[i] < arr[minIndex]) {
			minIndex = i;
		}
		if (arr[i] > arr[maxIndex]) {
			maxIndex = i;
		}
	}
	int c = arr[minIndex];
	arr[minIndex] = arr[maxIndex];
	arr[maxIndex] = c;
}
void removeDuplicates(int*& arr, int& len) {
	if (arr == nullptr || len <= 1) {
		return;
	}
	sortArray(arr, len);
	int newLen = 1;
	for (int i = 1; i < len; ++i) {
		if (arr[i] != arr[i - 1]) {
			arr[newLen++] = arr[i];
		}
	}
	int* array = new int[newLen];
	for (int i = 0; i < newLen; ++i) {
		array[i] = arr[i];
	}

	delete[] arr;
	arr = array;
	len = newLen;
}
void addRandomElements(int*& arr, int& len, int n) {
	if (n <= 0) {
		std::cout << "Wrong elements number" << std::endl;
		return;
	}
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < n; ++i) {
		addElement(arr, len, rand() % 100);
	}
}

int main() {
	int* arr = nullptr;
	int len = 0;

	bool exit = false;
	while (!exit) {
		std::cout << "Menu" << std::endl;
		std::cout << "0 - Exit" << std::endl;
		std::cout << "1 - Print array" << std::endl;
		std::cout << "2 - Add element to array" << std::endl;
		std::cout << "3 - Remove element from array" << std::endl;
		std::cout << "4 - Sort element in increasing" << std::endl;
		std::cout << "5 - Restart numbering at the end" << std::endl;
		std::cout << "6 -  Swap first maximum and last minimum array element" << std::endl;
		std::cout << "7 - Remove all duplicates from the array" << std::endl;
		std::cout << "8 - Add n random elements to the array" << std::endl;

		int choice;
		std::cout << "Your choice: ";
		std::cin >> choice;

		switch (choice) {
		case 0:
			exit = true;
			break;
		case 1:
			printArray(arr, len);
			break;
		case 2:
			int newElement;
			std::cout << "Type element to add";
			std::cin >> newElement;
			addElement(arr, len, newElement);
			break;
		case 3:
			int indexToRemove;
			std::cout << "Type element index to remove: ";
			std::cin >> indexToRemove;
			removeElement(arr, len, indexToRemove);
			break;
		case 4:
			sortArray(arr, len);
			break;
		case 5:
			reverseArray(arr, len);
			break;
		case 6:
			swapMinMaxElements(arr, len);
			break;
		case 7:
			removeDuplicates(arr, len);
			break;
		case 8:
			int numRandomElements;
			std::cout << "Type elements number to add ";
			std::cin >> numRandomElements;
			addRandomElements(arr, len, numRandomElements);
			break;
		}
	}

	delete[] arr;

	return 0;
}