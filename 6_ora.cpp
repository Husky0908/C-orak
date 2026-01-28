#include <iostream>

int main() {
    std::string name;

    std::cout << "Hogy hivjak?" << std::endl;
    getline(std::cin, name);
    std::cout << "Lepcsozetesen:" << std::endl;

    for (int i=1; i<=7; i++) {
        for (int j=7; j>i; j--) {
            std::cout << " ";
        }
        std::cout << name << std::endl;
    }

    return 0;
}
