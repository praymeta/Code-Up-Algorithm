#include <iostream>
#include <string>
using namespace std;

int colorToNum(string color, int three) {
    if(three == 1) {
        if(color == "black")
            return 1;
        else if(color == "brown")
            return 10;
        else if(color == "red")
            return 100;
        else if(color == "orange")
            return 1000;
        else if(color == "yellow")
            return 10000;
        else if(color == "green")
            return 100000;
        else if(color == "blue")
            return 1000000;
        else if(color == "violet")
            return 10000000;
        else if(color == "grey")
            return 100000000;
        else if(color == "white")
            return 1000000000;
    } else {
        if(color == "black")
            return 0;
        else if(color == "brown")
            return 1;
        else if(color == "red")
            return 2;
        else if(color == "orange")
            return 3;
        else if(color == "yellow")
            return 4;
        else if(color == "green")
            return 5;
        else if(color == "blue")
            return 6;
        else if(color == "violet")
            return 7;
        else if(color == "grey")
            return 8;
        else if(color == "white")
            return 9;
    }
}

int main(void) {
    long long resi;
    string c1, c2, c3, temp = "";
    cin >> c1 >> c2 >> c3;
    temp = to_string(colorToNum(c1, 0)) + to_string(colorToNum(c2, 0));
    resi = stoi(temp);
    resi *= colorToNum(c3, 1);
    cout << resi;
}
