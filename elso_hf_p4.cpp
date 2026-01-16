#include <iostream>

int main() {
    int for_end;
    
    std::cout << "Kerek egy pozitiv egesz szamot:" << std::endl;
    std::cin >> for_end;

    for (int i=1; i<=for_end; i=i+2) {
        std::cout << i << " negyzete " << i*i << std::endl;
    }
    
    return 0;
}
