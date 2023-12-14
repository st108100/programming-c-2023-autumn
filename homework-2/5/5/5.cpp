#include <iostream>
using namespace std;
int main()
{
	int N;
	std::cin >> N;
	if (N == 1) {
		std::cout << N << " " << "bochka";
	}
	if (N == 2 or N == 3 or N == 4){
		std::cout << N << " " << "bochki";
	}
	if (N > 4) {
		std::cout << N << " " << "bochek";
	}
	return 0;
}