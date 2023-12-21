#include <iostream>
using namespace std;
int main() {
    int n;
    std::cin >> n;
    for (int i = 31; i >= 0; --i) {
        int bit = (n >> i) & 1; 
        std::cout << bit;
    }
    return 0;
}