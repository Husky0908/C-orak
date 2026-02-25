#include <iostream>

int main() {
    std::cout << "A program kiirja a Fibonacci sorozat elso n db elemet.\n";
    int aktualis, elozo=1, azelotti=1, n;
    do {
        std::cout << "Kerek egy pozitiv egesz szamot (n>2):";
        std::cin >> n;
    } while (!(n>2));

    std::cout << "A sorozat: 1, 1, ";

    for (int i=3; i<=n; i++) {
        aktualis = elozo+azelotti;
        std::cout << aktualis << ", ";
        azelotti = elozo;
        elozo = aktualis;
    }

    std::cout << std::endl;

    return 0;
}
