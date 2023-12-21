#include <iostream>
using namespace std;
int main(){
    int A, B;
    std::cin >> A >> B;
    while (A != B) {
        if (A % 2 == 0 and A / 2 >= B) {
            std::cout << ":2";
            A /= 2;
        }
        else {
            std::cout << "-1";
            A--;
        }
    }
    return 0;
}