#include <iostream>

int main() {
    int number, prim=1;

    std::cout << "A program kiirja egy egesz szam osztoit." << std::endl;
    do {
        std::cout << "Kerek egy pozitiv egesz szamot." << std::endl;
        std::cin >> number;
    } while (number < 1);

    for (int i=2; i<=number/2; i++) {
        if (number%i==0) {
            prim = 0;
        }
    }

    if (prim) {
        std::cout << "A(z) " << number << " primszam\n";
    } else {
        std::cout << "A(z) " << number << " nem primszam\n";
    }
    
    return 0;
}
