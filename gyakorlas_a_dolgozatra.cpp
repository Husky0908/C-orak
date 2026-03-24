#include <iostream>

int main() {
    int n, elozo=1, azelotti=1, seged, paros_db=0;
    
    setlocale(LC_ALL, "");
    std::cout << "A program kiírja a Fibonacci sorozat első n db elemét.\n";
    do {
        std::cout << "Kérek egy 2-nél nagyobb egész számot: ";
        std::cin >> n;
    } while (n<=2);

    std::cout << "A sorozat: 1, 1, ";
    for (int i=3; i<=n; i++) {
        seged = elozo;
        elozo = elozo + azelotti;
        azelotti = seged;
        std::cout << elozo << ", ";
        if (elozo%2==0) {
            paros_db++;
        }
    };

    std::cout << "\nA sorozatban " << paros_db << " db páros szám van.\n";
    
    return 0;
}
