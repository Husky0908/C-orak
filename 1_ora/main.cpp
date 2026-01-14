#include <iostream>

using namespace std;

int main()
{
    float szam1, szam2;
    cout << "Kerek ket pozitiv valos szamot kulon sorba beirva:" << endl;
    do {
        cin >> szam1;
    } while (szam1<=0);
    cout << "Kerem az elsonel nagyobb, masodik pozitiv valos szamot:" << endl;
    do {
        cin >> szam2;
    } while (szam2<=0 || szam1>=szam2);

    cout << szam1 << " es " << szam2 << " atlaga = " << (szam1+szam2)/2 << endl;

    float atlag=(szam1+szam2)/2, diff=(atlag-szam1)/4, koztes=atlag;
    while (koztes<szam2 && koztes>szam1) {
        cout << koztes << endl;
        koztes=koztes+diff;
    }
    cout << "Ezek voltakaz atlaghoz adott novendekek";
    return 0;
}
