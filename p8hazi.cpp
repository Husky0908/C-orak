#include <iostream>

void datas(int *n, int *q, int *al) {
    do {
        std::cout << "Kerek egy pozitiv egesz szamot! (n)" << std::endl;
        std::cin >> *n;
    } while (*n < 1);

    std::cout << "Kerek egy egesz szamot! (q)" << std::endl;
    std::cin >> *q;

    std::cout << "Kerek egy egesz szamot! (a1)" << std::endl;
    std::cin >> *al;
};

void print(int n, int q, int al) {
    std::cout << "A sorozat: ";
    for (int i=0; i<n; i++) {
        std::cout << al << ", ";
        al = al * q;
    }
    std::cout << std::endl;
};

int main() {
    int n, q, a1;

    datas(&n, &q, &a1);

    print(n, q, a1);
    
    return 0;
}
