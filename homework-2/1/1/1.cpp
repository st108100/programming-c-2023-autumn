#include <iostream>
using namespace std;
int main()
{
	int N;
	std::cin >> N;
	if ((N % 4 == 0) and (N % 100  != 0) or (N % 400 == 0)) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}
	return 0;
}