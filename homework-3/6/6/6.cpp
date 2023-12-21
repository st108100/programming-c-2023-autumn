#include <iostream>
using namespace std;
int main() {
	int f0, f1, f, n;
	std::cin >> n;
	f0 = 0;
	f1 = 1;
	for (int i = 1; i < n; i++) {
		f = f1;
		f0 = f1;
		f1 = f1 + f0;
	}
	std::cout << f;
	return 0;
}