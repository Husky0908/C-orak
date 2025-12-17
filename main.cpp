#include <iostream>

using namespace std;

int main()
{
    float szam;
    cout << "Kerek egy valos szamot: ";
    cin >> szam;
    if (szam>0) {
        cout << "A szam pozitiv." << endl;
    } else {
        /*if (szam==0) {
            cout << "A szam 0." << endl;
        } else {
            cout << "A szam negativ." << endl;
        }
        */
        szam==0 ? cout << "A szam nulla." << endl : cout << "A szam negativ." << endl;
    }
    int x;
    cout << "Kerek egy egesz szamot." << endl;
    cin >> x;
    x=x%2?11:10;
    cout << x << endl;
    return 0;
}
