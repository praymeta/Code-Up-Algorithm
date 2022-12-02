#include <iostream>
using namespace std;

int main(void) {
    int t, n, c, sumGrade = 0;
    double g, temp = 0;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        double gpa[n][2];
        for(int j = 0; j < n; j++) {
            cin >> c >> g;
            gpa[j][0] = c;
            gpa[j][1] = g;
            temp += gpa[j][0] * gpa[j][1];
            sumGrade += gpa[j][0];
        }
        cout.precision(6);
        cout << sumGrade << ' ';
        cout << fixed << temp / sumGrade << '\n';
        temp = sumGrade = 0;
    }
}
