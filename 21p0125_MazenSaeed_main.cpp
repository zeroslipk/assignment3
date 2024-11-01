#include <iostream>

int summation(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;
    std::cout << "Sum: " << summation(x, y) << std::endl;
    return 0;
}
