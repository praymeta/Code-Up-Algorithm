#include <iostream>
using namespace std;

int main(void) {
    string letter;
    cin >> letter;
    if(letter == "M")
        cout << "MatKor";
    else if(letter == "W")
        cout << "WiCys";
    else if(letter == "C")
        cout << "CyKor";
    else if(letter == "A")
        cout << "AlKor";
    else
        cout << "$clear";
}
