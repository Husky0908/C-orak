#include <iostream>

int main() {
    int number, osztodb=0;

    std::cout << "A program kiirja egy egesz szam osztoit." << std::endl;
    do {
        std::cout << "Kerek egy pozitiv egesz szamot." << std::endl;
        std::cin >> number;
    } while (number < 1);

    std::cout << number << " osztoi: ";
    for (int i=1; i<=number; i++) {
        if (number%i==0) {
            std::cout << i << ", ";
            osztodb++;
        }
    }
    std::cout << "\nOsszesen " << osztodb << " db oszto." << std::endl;
    
    return 0;
}
