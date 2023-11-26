#include <iostream>
using namespace std;

int main(void) {
    int lambda;
    cin >> lambda;
    if(620 <= lambda && lambda <= 780)
        cout << "Red";
    else if(590 <= lambda && lambda < 620)
        cout << "Orange";
    else if(570 <= lambda && lambda < 590)
        cout << "Yellow";
    else if(495 <= lambda && lambda < 570)
        cout << "Green";
    else if(450 <= lambda && lambda < 495)
        cout << "Blue";
    else if(425 <= lambda && lambda < 450)
        cout << "Indigo";
    else if(380 <= lambda && lambda < 425)
        cout << "Violet";
}
