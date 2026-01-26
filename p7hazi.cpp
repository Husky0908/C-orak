#include <iostream>

void datas(int *n, int *d, int *al) {
    do {
        std::cout << "Kerek egy pozitiv egesz szamot! (n)" << std::endl;
        std::cin >> *n;
    } while (*n < 1);

    std::cout << "Kerek egy egesz szamot! (d)" << std::endl;
    std::cin >> *d;

    std::cout << "Kerek egy egesz szamot! (a1)" << std::endl;
    std::cin >> *al;
};

void print(int n, int d, int al) {
    std::cout << "A sorozat: ";
    for (int i=0; i<n; i++) {
        std::cout << al << ", ";
        al = al + d;
    }
    std::cout << std::endl;
};

int main() {
    int n, d, a1;

    datas(&n, &d, &a1);

    print(n, d, a1);
    
    return 0;
}
