#include <iostream>
using namespace std;

int main() {
    int istenilenY;

    cout << "ucgenin yuksekligi kac olsun : ";
    cin >> istenilenY;  

    for (int line = 1; line <= istenilenY; line++) {

        for (int bosluk = 1; bosluk <= (istenilenY - line); bosluk++) {
            cout << " ";
        }

        for (int yildiz = 1; yildiz <= (2 * line - 1); yildiz++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}