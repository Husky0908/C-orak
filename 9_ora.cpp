#include <iostream>

int main() {
    int number1, number2, number3=0;
    
    std::cout << "A program kiirja ket pozitiv szam kozos tobszoroset.\n";
    do {
        std::cout << "Kerem az elso pozitiv szamot.\n";
        std::cin >> number1;
    } while (number1 <= 0);
    do {
        std::cout << "Kerem a masodik pozitiv szamot.\n";
        std::cin >> number2;
    } while (number2 <= 0);
    std::cout << number1 << " es " << number2 << " legnagyobb kozos osztoja = ";

    
    while (!(number1*number2==0)) {
        if (number1 < number2) {
            number2 = number2%number1;
        } else {
            number1 = number1%number2;
        }
        number3++;
    }
    std::cout << number1+number2 << std::endl;
     
/*
    while (!(number1==number2)) {
        if (number1<number2) {
            number2=number2-number1;
        } else {
            number1=number1-number2;
        }
        number3++;
    }
    std::cout << number2 << std::endl;
*/
    std::cout << number3 << " ennyi darab\n";
    
    return 0;
}
