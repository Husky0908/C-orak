#include <iostream>

using namespace std;

int main()
{
    /*
    for(int i=10;i<100;i=i+2) {
        if(i%3!=0) {
        cout << i << ", ";
        }
    }
    cout << endl;
    */
    int db=0;
    for (int i=101;i<1000;i=i+2) {
        if(i%7!=0) {
            cout << i << ", ";
            db++;
        }
    }
    cout << endl << db << endl;
    return 0;
}
