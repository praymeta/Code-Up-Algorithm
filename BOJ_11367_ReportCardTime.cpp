#include <iostream>
using namespace std;

int main(void) {
    string name;
    int t, grade;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> name >> grade;
        cout << name << ' ';
        if(grade >= 97) cout << "A+";
        else if(grade >= 90) cout << "A";
        else if(grade >= 87) cout << "B+";
        else if(grade >= 80) cout << "B";
        else if(grade >= 77) cout << "C+";
        else if(grade >= 70) cout << "C";
        else if(grade >= 67) cout << "D+";
        else if(grade >= 60) cout << "D";
        else cout << "F";
        cout << '\n';
    }
}
