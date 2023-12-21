#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, N, A, B, p;

    std::cin >> A >> B >> N;

    while (a != N and b != N) {
        if (a == 0) {
            cout << ">A ";
            a = A;
        }
        else if (b == B) {
            cout << ">B ";
            b = 0;
        }
        else if (a > 0 and b < B) {
            p = min(a, B - b);
            cout << "A>B ";
            b += p;
            a -= p;
        }
        else if (a < A and b == 0) {
            cout << "A> ";
            b = a;
            a = 0;
        }
        else if (a < A and b > 0) {
            p = min(A - a, b);
            cout << "B>A ";
            a += p;
            b -= p;
        }
    }

    return 0;
}