#include <iostream>
using namespace std;
int main()
{
	int n, N;
	std::cin >> n >> N;
	if ((n != 1 && N != 1) or (n == 1 && N == 1))
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}