#include <iostream>
using namespace std;
int main()
{
	int x, n;
	std::cin >> x;
	n = 1;
	while (x / 10 != 0) {
		n = n + 1;
	}
	for (1; n; 1){
		std::cout << x % 10;
	}
	return 0;
}