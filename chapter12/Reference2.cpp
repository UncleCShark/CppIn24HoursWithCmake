#include <iostream>

int main() {
    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    std::cout << "intOne: " << intOne << "\n";
    std::cout << "rSomeRef: " << rSomeRef << "\n";

    std::cout << "&intOne: " << &intOne << "\n";
    std::cout << "&rSomeRef: " << &rSomeRef << "\n";

    return 0;
}
