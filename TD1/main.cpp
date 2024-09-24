#include <iostream>

void printGreetings(int n) {
    for (int i=1; i <= n/2; ++i) {
        std::cout << 2*i << std::endl;
    }

    std::cout << "Hello World !" << std::endl;

    for (int i=(n-1)/2; i >= 0; --i) {
        std::cout << 2*i + 1 << std::endl;
    }
}

int main(void) {
    printGreetings(9);
    printGreetings(10);
    return 0;
}
