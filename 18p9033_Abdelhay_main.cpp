#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Sum: " << sum(x, y) << std::endl;
    return 0;
}
