#include <iostream>
using namespace std;

int main(void) {
    double w, h, BMI;
    cin >> w >> h;
    BMI = w / (h * h);
    if(BMI > 25) {
        cout << "Overweight";
    } else if(BMI >= 18.5) {
        cout << "Normal weight";
    } else {
        cout << "Underweight";
    }
}
