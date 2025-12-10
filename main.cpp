#include <iostream>

using namespace std;

int main()
{
/*
    cout << "Hello world!" << endl;
*/
    int egesz; //4 byte
    short kisegesz; //2 byte
    char ch; //1 byte
    float valos;
    double nagyvalos;
    bool logikai; //1 byte

    string szoveg;

    egesz=3;
    ch='a';

    cout << "A te szamod: ";
    cin >> egesz;
    cout << "A te betud: ";
    cin >> ch;
    cout << "A te betud es szamod: " << ch << " es " << egesz << endl;

    return 0;
}
