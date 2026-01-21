#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    int number, biggest=0;

    srand(time(NULL));
    
    for (int i=1;i<=10;i++) {
        number = rand() % 90 + 10;
        std::cout << number << " ";
        if (number>biggest) {
            biggest = number;
        }
    }

    std::cout << std::endl << "A legnagyobb: " << biggest << std::endl;

    return 0;
}
