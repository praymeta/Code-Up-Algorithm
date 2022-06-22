#include <iostream>
using namespace std;

int main(void) {
    int antenna, eye;
    cin >> antenna;
    cin >> eye;
    if(antenna >= 3 && eye <= 4) {
        cout << "TroyMartian" << endl;
    }
    if(antenna <= 6 && eye >= 2) {
        cout << "VladSaturnian" << endl;
    }
    if(antenna <= 2 && eye <= 3) {
        cout << "GraemeMercurian" << endl;
    }
    return 0;
}
