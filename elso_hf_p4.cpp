#include <iostream>

int main() {
    int for_end;

    do {
        std::cout << "Kerek egy pozitiv egesz szamot:" << std::endl;
        std::cin >> for_end;
    } while (for_end<1);
    
    for (int i=1; i<=for_end; i=i+2) {
        std::cout << i << " negyzete " << i*i << std::endl;
    }
    
    return 0;
}
