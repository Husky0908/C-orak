#include <iostream>
#include <cmath>

int main() {
    double a0, szp;
    int n;

    std::cout << "Egy megadott %-al kamatozó pénzösszeg értékei a periódusok végén.\n";
    do {
        std::cout << "Kérek egy pozitív egész számot (n): ";
        std::cin >> n;
    } while (n<1);
    std::cout << "Kérek egy valós számot (kezdő tőke): ";
    std::cin >> a0;
    do {
        std::cout << "Kérek egy pozitív valós számot (%): ";
        std::cin >> szp;
    } while (szp<1);
    szp = szp/100;

    std::cout << "Az összegek a periódusok végén: ";
    for (int i=1; i<=n; i++) {
        std::cout << a0*std::pow((1.0+szp),i) << ", ";
    }
    
    return 0;
}
