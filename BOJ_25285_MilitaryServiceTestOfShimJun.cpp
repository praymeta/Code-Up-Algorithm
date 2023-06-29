#include <iostream>
using namespace std;

int main(void) {
    int t, kg;
    double cm, bmi;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> cm >> kg;
        if(cm < 140.1) cout << "6\n";
        else if(cm < 146) cout << "5\n";
        else if(cm < 159) cout << "4\n";
        else {
            bmi = (kg / ((cm / 100) * (cm / 100)));
            if(204 <= cm) cout << "4\n";
            else if(161 <= cm) {
                if(20.0 <= bmi && bmi < 25.0) cout << "1\n";
                else if((18.5 <= bmi && bmi < 20.0) || (25.0 <= bmi && bmi < 30.0)) cout << "2\n";
                else if((16.0 <= bmi && bmi < 18.5) || (30.0 <= bmi && bmi < 35.0)) cout << "3\n";
                else cout << "4\n";
            } else {
                if(16.0 <= bmi && bmi < 35.0) cout << "3\n";
                else cout << "4\n";
            }
        }
    }
}
