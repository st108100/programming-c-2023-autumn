#include <iostream>
void initRandomArray(int*& arr, int len) {
	arr = new int[len];
    srand(static_cast < unsigned int>(time(0)));
    for (int i = 0; i < len; ++i) {
        arr[i] = rand() % 100;
    }
}
void print(int* a, int len) {
    for (int i = 0; i < len; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}
void mix(int* a, int len) {
    for (int i = len - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        int с = a[i];
        a[i] = a[j];
        a[j] = с;
    }
}
void Bubblesort(int* a, int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                int с = a[j];
                a[j] = a[j + 1];
                a[j + 1] = с;
            }
        }
    }
}
int main() {
    int* myArray = nullptr;
    int arrayLength;
    std::cout << "Enter array size ";
    std::cin >> arrayLength;
    initRandomArray(myArray, arrayLength);
    std::cout << "Source array ";
    print(myArray, arrayLength);
    mix(myArray, arrayLength);
    std::cout << "Mixed array ";
    print(myArray, arrayLength);
    Bubblesort(myArray, arrayLength);
    std::cout << "Sorted array ";
    print(myArray, arrayLength);
    delete[] myArray;
    return 0;
}
